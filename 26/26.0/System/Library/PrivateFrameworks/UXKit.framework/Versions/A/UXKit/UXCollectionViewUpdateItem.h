@class NSIndexPath;

@interface UXCollectionViewUpdateItem : NSObject {
    id _gap;
}

@property (readonly, retain, nonatomic) NSIndexPath *indexPathBeforeUpdate;
@property (readonly, retain, nonatomic) NSIndexPath *indexPathAfterUpdate;
@property (readonly, nonatomic) long long updateAction;

- (void)dealloc;
- (id)initWithAction:(long long)a0 forIndexPath:(id)a1;
- (id)_newIndexPath;
- (long long)compareIndexPaths:(id)a0;
- (id)_indexPath;
- (id)description;
- (long long)inverseCompareIndexPaths:(id)a0;
- (BOOL)_isSectionOperation;
- (void)_setNewIndexPath:(id)a0;
- (id)initWithOldIndexPath:(id)a0 newIndexPath:(id)a1;
- (long long)_action;
- (id)initWithInitialIndexPath:(id)a0 finalIndexPath:(id)a1 updateAction:(long long)a2;
- (id)_gap;
- (void)_setGap:(id)a0;

@end
