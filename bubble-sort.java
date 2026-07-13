class Bubble{
    public static void main(String args[])
    {
        int  i, j,swap = 0;
        int[] a = {44,65,21,13,78};
        for(i=5;i>0;i--)
        {
            for(j=0;j<i-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    swap = a[j];
                    a[j] = a[j+1];
                    a[j+1] = swap;
                }
            }
        }
        for(i=0;i<5;i++)
        {
            System.out.println(a[i]);
        }

    }
}