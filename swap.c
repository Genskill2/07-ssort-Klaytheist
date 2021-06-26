void swap_max(int arr[],int l, int n)
{
    int big = n, temp;
    for(int i = n+1; i < l ; i++)
        if(arr[i] > arr[big])
            big = i;
    temp = arr[big];
    arr[big] = arr[n];
    arr[n] = temp;
}

void ssort(int arr[],int l)
{
    for(int i = 0 ; i < l ; i++)
        swap_max(arr, l, i);
}
