@class NSIndexPath;

@interface UXCollectionViewUpdateItem : NSObject {
    id _gap;
}

@property (readonly, retain, nonatomic) NSIndexPath *indexPathBeforeUpdate;
@property (readonly, retain, nonatomic) NSIndexPath *indexPathAfterUpdate;
@property (readonly, nonatomic) long long updateAction;

- (id)initWithOldIndexPath:(id)a0 newIndexPath:(id)a1;
- (BOOL)_isSectionOperation;
- (long long)inverseCompareIndexPaths:(id)a0;
- (long long)compareIndexPaths:(id)a0;
- (id)initWithInitialIndexPath:(id)a0 finalIndexPath:(id)a1 updateAction:(long long)a2;
- (long long)_action;
- (void)_setNewIndexPath:(id)a0;
- (id)_indexPath;
- (id)description;
- (id)initWithAction:(long long)a0 forIndexPath:(id)a1;
- (id)_newIndexPath;
- (void)dealloc;
- (id)_gap;
- (void)_setGap:(id)a0;

@end
