class Selection{
    public static void main(String args[])
    {
        int i,j,min,ind,swap;
        int[] a = {34,21,67,48,93};
        for(i=0;i<4;i++)
         {
            ind = i;
            min = a[i];
            for(j=i+1;j<5;j++)
            {
                if(a[j]<min)
                {
                    min = a[j];
                    ind = j;
                }
            }
            if(a[i] != min)
            {
                swap = a[i];
                a[i] = a[ind];
                a[ind] = swap;
            }
         }
         for(i=0;i<5;i++)
         {
            System.out.println(a[i]);
         }
    }
}