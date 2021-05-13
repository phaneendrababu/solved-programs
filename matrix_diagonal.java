    int row=matrix.length;
		int col=matrix[0].length;
		for(int i=0;i<row;i++)
		{
		    int k=i;
		    for(int j=0;j<=i;j++)
		    {
		        System.out.print(matrix[k][j]+" ");
		        k--;
		    }
		}
		for(int i=1;i<col;i++)
		{
		    int k=row-1;
		    for(int j=i;j<col;j++)
		    {
		        System.out.print(matrix[k][j]+" ");
		        k--;
		    }
		}
