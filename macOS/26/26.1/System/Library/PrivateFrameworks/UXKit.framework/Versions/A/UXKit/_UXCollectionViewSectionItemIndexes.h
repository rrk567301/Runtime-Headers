@class NSMutableIndexSet;

@interface _UXCollectionViewSectionItemIndexes : NSObject <NSCopying> {
    NSMutableIndexSet *_itemIndexesSet;
}

- (void)removeItem:(unsigned long long)a0;
- (unsigned long long)firstItem;
- (void)addItem:(unsigned long long)a0;
- (unsigned long long)itemCount;
- (id)description;
- (void)dealloc;
- (void)enumerateItemsUsingBlock:(id /* block */)a0;
- (id)items;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)containsItem:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)lastItem;
- (id)init;
- (void)addItemsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)addSectionItemIndexes:(id)a0;
- (void)adjustForDeletionOfItem:(unsigned long long)a0;
- (void)adjustForDeletionOfItems:(id)a0;
- (void)adjustForInsertionOfItem:(unsigned long long)a0;
- (void)adjustForInsertionOfItems:(id)a0;
- (id)itemIndexPathsForSection:(unsigned long long)a0;
- (void)removeItemsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)removeSectionItemIndexes:(id)a0;

@end
