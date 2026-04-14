@class NSMutableArray;

@interface ASKDataItem : ASKDataRow <NSCopying> {
    ASKDataItem *_parentItem;
    NSMutableArray *_items;
}

+ (id)itemForDataSource:(id)a0 parentItem:(id)a1;

- (void)setContents:(id)a0;
- (id)contents;
- (id)content;
- (id)items;
- (void)removeItem:(id)a0;
- (void)setContent:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasItems;
- (id)itemAtIndex:(unsigned long long)a0;
- (void)removeAllItems;
- (id)init;
- (void)dealloc;
- (id)objectSpecifier;
- (id)parentItem;
- (void)setParentItem:(id)a0;
- (unsigned long long)objectIndex_ask;
- (void)addInItems:(id)a0;
- (BOOL)hasParentItem;
- (id)initForDataSource:(id)a0 parentItem:(id)a1;
- (void)insertInItems:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeFromItemsAtIndex:(unsigned long long)a0;
- (void)replaceInItems:(id)a0 atIndex:(unsigned long long)a1;

@end
