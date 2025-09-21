@class NSMutableDictionary, NSMutableOrderedSet;

@interface _FPItemList : NSMutableArray {
    NSMutableOrderedSet *_orderedSet;
    NSMutableDictionary *_itemsByIDs;
    NSMutableDictionary *_formerIDs;
}

- (unsigned long long)indexOfObject:(id)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)mutableCopy;
- (unsigned long long)count;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (id)init;
- (void)addObject:(id)a0;
- (id)allObjects;
- (id)description;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)removeLastObject;
- (void).cxx_destruct;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)redactedDescription;
- (unsigned long long)indexOfObject:(id)a0 inSortedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 options:(unsigned long long)a2 usingComparator:(id /* block */)a3;
- (void)sortUsingDescriptors:(id)a0;
- (id)itemWithItemID:(id)a0;
- (id)formerIDs;
- (unsigned long long)indexOfItemID:(id)a0;
- (BOOL)isObsoleteID:(id)a0;
- (id)itemIDsDifferenceWithList:(id)a0;
- (void)removeObjectWithID:(id)a0;

@end
