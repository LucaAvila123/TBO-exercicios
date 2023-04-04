#include "item.h"

// insertion sort
extern void sort(Item *a, int lo, int hi){
    for(int i=lo; i < hi; i++){
        for(int k = i; k > 0; k--){
            compexch(a[k-1], a[k]);
        }
    }
}