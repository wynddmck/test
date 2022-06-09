#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//①非函数封装实现  在数组中找到两个数字，使得两个数字之和等于目标值
//int main()
//{
//    int i = 0;
//    int j = 0;
//    int nums[10] = {0};
//    int target = 0;
//    printf("请输入目标和的值：");
//    scanf("%d", &target);
//    printf("请输入10个用以相加的数字：");
//    scanf("%d%d%d%d%d%d%d%d%d%d", &nums[0], &nums[1], &nums[2], &nums[3], &nums[4], &nums[5], &nums[6], &nums[7], &nums[8], &nums[9]);
//
//    for (i = 0;i < 10;i++)
//    {
//        for (j = i+1;j < 10;j++)
//        {
//            if (target==nums[i] + nums[j])
//            {
//                 printf("%d %d\n", i,j);
//                 break;
//            }   
//        } 
//    } 
//    return 0;
//}



//②函数封装实现  在数组中找到两个数字，使得两个数字之和等于目标值
//void twoSum(int* nums, int n, int target)
//{
//    int* p1 = nums;
//    int i = 0;
//    int j = 0;
//    for (i = 0;i < n;i++)
//    {
//        for (j = i;j < n;j++)
//        {
//            if ((*(p1 + i)) + (*(p1 + j)) == target)
//            {
//                printf("%d %d\n", i, j);
//                break;
//            }
//        }
//    }
//
//}
//int main()
//{
//    int i = 0;
//    int j = 0;
//    int nums[10] = { 0 };
//    int target = 0;
//    printf("请输入目标和的值：");
//    scanf("%d", &target);
//    printf("请输入10个用以相加的数字：");
//    scanf("%d%d%d%d%d%d%d%d%d%d", &nums[0], &nums[1], &nums[2], &nums[3], &nums[4], &nums[5], &nums[6], &nums[7], &nums[8], &nums[9]);
//    twoSum(nums,10,target);
//    return 0;
//}



