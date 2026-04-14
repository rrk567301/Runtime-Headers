@class TSULinkedPointerSetEntry;

@interface TSUMutableLinkedPointerSet : NSObject <NSFastEnumeration> {
    struct __CFDictionary { } *mDictionary;
    TSULinkedPointerSetEntry *mHead;
    TSULinkedPointerSetEntry *mTail;
}

- (BOOL)containsObject:(id)a0;
- (id)objectEnumerator;
- (void)addObject:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (BOOL)isEqual:(id)a0;
- (void)removeAllObjects;
- (id)array;
- (id)firstObject;
- (unsigned long long)hash;
- (id)init;
- (unsigned long long)count;
- (void)removeObject:(id)a0;
- (void)dealloc;
- (id)reverseObjectEnumerator;
- (BOOL)hasObjects;
- (void)insertFirstObject:(id)a0;
- (id)objectEnumeratorAfterObject:(id)a0;

@end
