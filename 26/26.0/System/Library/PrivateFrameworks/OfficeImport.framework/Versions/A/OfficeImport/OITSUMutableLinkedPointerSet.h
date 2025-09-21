@class OITSULinkedPointerSetEntry;

@interface OITSUMutableLinkedPointerSet : NSObject <NSFastEnumeration> {
    struct __CFDictionary { } *mDictionary;
    OITSULinkedPointerSetEntry *mHead;
    OITSULinkedPointerSetEntry *mTail;
}

- (id)firstObject;
- (void)removeObject:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)dealloc;
- (unsigned long long)count;
- (id)init;
- (id)array;
- (void)addObject:(id)a0;
- (id)objectEnumerator;
- (void)removeAllObjects;
- (BOOL)containsObject:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)reverseObjectEnumerator;
- (BOOL)hasObjects;
- (void)insertFirstObject:(id)a0;
- (id)objectEnumeratorAfterObject:(id)a0;

@end
