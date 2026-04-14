@class NSIndexPath;

@interface NSUICollectionViewUpdateItem : NSObject {
    id _gap;
}

@property (readonly, retain, nonatomic) NSIndexPath *indexPathBeforeUpdate;
@property (readonly, retain, nonatomic) NSIndexPath *indexPathAfterUpdate;
@property (readonly, nonatomic) long long updateAction;

- (void)_setNewIndexPath:(id)a0;
- (id)initWithOldIndexPath:(id)a0 newIndexPath:(id)a1;
- (id)description;
- (id)initWithInitialIndexPath:(id)a0 finalIndexPath:(id)a1 updateAction:(long long)a2;
- (long long)inverseCompareIndexPaths:(id)a0;
- (long long)_action;
- (void).cxx_destruct;
- (long long)compareIndexPaths:(id)a0;
- (id)_newIndexPath;
- (id)initWithAction:(long long)a0 forIndexPath:(id)a1;
- (id)_indexPath;
- (BOOL)_isSectionOperation;
- (id)_gap;
- (void)_setGap:(id)a0;

@end
