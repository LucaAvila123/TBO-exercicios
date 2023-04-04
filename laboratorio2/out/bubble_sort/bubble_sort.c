#include "item.h"

// bubble sort: N² 
extern void sort(Item *a, int lo, int hi){
    for(int i=lo; i < hi; i++){
        for(int j=hi; j > i; j--){
            compexch(a[j-1], a[j]);
        }
    }
}