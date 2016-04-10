Module Module1

    ' Globals 
    Dim iInputArray() As Integer = {3, 2, 1, 1, -8, 1, 1, 2, 3}
    Dim lStartTime As Long
    Dim lEndTime As Long
    Dim lDelta As Long

    Sub Main()

        BadEnum()
        BetterEnum()
        Console.ReadKey()

    End Sub

    ' Better enum 
    Private Sub BadEnum()

        ' Summation holding the latest max sum 
        Dim iMaxSum As Integer = iInputArray(0)

        ' Summation holding the current sum 
        Dim iCurSum As Integer = 0

        ' Holders for start and end max subarrays 
        Dim iStart, iEnd As Integer
        iStart = iEnd = 0

        ' Start the clocks 
        lStartTime = Now.Ticks

        ' Loop over the start index with nested loop for 
        ' end index 
        For i As Integer = 0 To iInputArray.Length - 1

            ' Init the iCurSum to the first value 
            iCurSum = iInputArray(i)

            For j As Integer = i + 1 To iInputArray.Length - 1

                ' Init current sum 
                iCurSum = iInputArray(i)

                ' Loop to get the sum from i to j 
                For k As Integer = i + 1 To j
                    iCurSum = iCurSum + iInputArray(k)
                Next

                ' Check to se if the current is bigger than max 
                ' and set the max and the start and end 
                If iCurSum > iMaxSum Then
                    iMaxSum = iCurSum
                    iStart = i
                    iEnd = j
                End If

            Next

        Next

        ' Get the end time 
        lEndTime = Now.Ticks
        lDelta = lEndTime - lStartTime

        ' Post the results 
        Console.WriteLine("Bad Algorithm " +
                          " Start:  " + iStart.ToString() +
                          " End: " + iEnd.ToString() +
                          " Sum: " + iMaxSum.ToString() +
                          " Delta: " + lDelta.ToString())
    End Sub

    ' Better enum 
    Private Sub BetterEnum()

        ' Summation holding the current sum
        Dim iCurSum As Integer

        ' Summation holding the latest max sum 
        Dim iMaxSum As Integer = iInputArray(0)

        ' Holders for start and end max subarrays 
        Dim iStart, iEnd As Integer
        iStart = iEnd = 0

        ' Start the clocks 
        lStartTime = Now.Ticks

        ' Loop over the start index with nested loop for 
        ' end index 
        For i As Integer = 0 To iInputArray.Length - 1

            ' Init the current sum with the first element 
            ' of the new starting value, i 
            iCurSum = iInputArray(i)

            For j As Integer = i + 1 To iInputArray.Length - 1

                ' Add on the next element 
                iCurSum = iCurSum + iInputArray(j)

                ' Check to se if the current is bigger than max 
                ' and set the max and the start and end 
                If iCurSum > iMaxSum Then
                    iMaxSum = iCurSum
                    iStart = i
                    iEnd = j
                End If

            Next

        Next

        ' Get the end time 
        lEndTime = Now.Ticks
        lDelta = lEndTime - lStartTime

        ' Post the results 
        Console.WriteLine("Good Algorithm " +
                          " Start: " + iStart.ToString() +
                          " End: " + iEnd.ToString() +
                          " Sum: " + iMaxSum.ToString() +
                          " Delta: " + lDelta.ToString())
    End Sub

End Module
	
// DVC 
1) Find the answer of first half
2) Find the answer of the second half
3) Find the spanning max 
4) Find the max of those three 
? - whats the base case

// Recursion inversion 
-- see 17 30 of the lecture
-- start at the smallest and work up to whole array 