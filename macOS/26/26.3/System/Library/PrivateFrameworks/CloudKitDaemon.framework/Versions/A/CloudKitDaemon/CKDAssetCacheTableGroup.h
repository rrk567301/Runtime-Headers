@class CKDAssetVolumeTable, CKDAssetHandleTable;

@interface CKDAssetCacheTableGroup : CKSQLiteContainerAttributedTableGroup

@property (readonly, nonatomic) CKDAssetHandleTable *assetHandleTable;
@property (readonly, nonatomic) CKDAssetVolumeTable *assetVolumeTable;

+ (double)expirationTime;
+ (BOOL)rebootShouldClearData;

- (void)createTables;
- (void).cxx_destruct;

@end
