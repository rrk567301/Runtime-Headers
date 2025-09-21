@class NSUUID, NSIndexPath;

@interface _NSGenericCollectionViewUpdateItem : NSObject

@property (readonly) NSIndexPath *indexPathBeforeUpdate;
@property (readonly) NSIndexPath *indexPathAfterUpdate;
@property (readonly) long long action;
@property (readonly, getter=_isSectionOperation) BOOL isSectionOperation;
@property (readonly, nonatomic, getter=_indexPath) NSIndexPath *indexPath;
@property (retain, nonatomic) NSUUID *identifier;
@property (nonatomic) BOOL isAppendingSectionInsert;
@property (nonatomic, getter=_shouldReconfigure, setter=_setShouldReconfigure:) BOOL shouldReconfigure;
@property (retain, nonatomic, getter=_newIndexPath, setter=_setNewIndexPath:) NSIndexPath *newIndexPath;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToUpdate:(id)a0;
- (id)initWithAction:(long long)a0 forIndexPath:(id)a1;
- (long long)compareIndexPaths:(id)a0;
- (id)description;
- (long long)inverseCompareIndexPaths:(id)a0;
- (id)revertedUpdate;
- (id)initWithInitialIndexPath:(id)a0 finalIndexPath:(id)a1 updateAction:(long long)a2;
- (void).cxx_destruct;
- (id)initWithNSCollectionViewUpdateItem:(id)a0;

@end
