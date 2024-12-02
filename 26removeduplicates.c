void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    if(nums1Size == 0 || m == 0){
        for(int x = 0; x<m+n; x++){
            nums1[x] = nums2[x];
        }
    }
    int nums[m+n];
    int i = 0, j = 0, k = 0;
    while(i < m && j < n){
        nums[k++] = nums1[i]<nums2[j] ? nums1[i++] : nums2[j++];
    }
    while(i<m){
        nums[k++] = nums1[i++];
    }
    while(j<n){
        nums[k++] = nums2[j++];
    }
    for(int x = 0; x<m+n; x++){
        nums1[x] = nums[x];
    }
}
