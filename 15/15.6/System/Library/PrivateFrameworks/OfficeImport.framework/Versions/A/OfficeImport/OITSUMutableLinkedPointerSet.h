@class OITSULinkedPointerSetEntry;

@interface OITSUMutableLinkedPointerSet : NSObject <NSFastEnumeration> {
    struct __CFDictionary { } *mDictionary;
    OITSULinkedPointerSetEntry *mHead;
    OITSULinkedPointerSetEntry *mTail;
}

- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (char)containsObject:(id)a0;
- (void)addObject:(id)a0;
- (id)array;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)firstObject;
- (id)objectEnumerator;
- (void)removeAllObjects;
- (void)removeObject:(id)a0;
- (id)reverseObjectEnumerator;
- (char)hasObjects;
- (void)insertFirstObject:(id)a0;
- (id)objectEnumeratorAfterObject:(id)a0;

@end
