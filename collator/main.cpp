//
//  main.cpp
//  collator
//
//  Created by 孙宇 on 15/11/11.
//  Copyright © 2015年 孙宇. All rights reserved.
//

#include <iostream>
#define n 5
int main(int argc, const char * argv[]) {
    // insert code here...
    int a[n];
    int i,j,temp;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;i++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            
        }
    
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
