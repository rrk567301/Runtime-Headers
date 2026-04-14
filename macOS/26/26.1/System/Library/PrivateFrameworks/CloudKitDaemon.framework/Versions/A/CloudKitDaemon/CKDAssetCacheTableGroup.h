@class CKDAssetVolumeTable, CKDAssetHandleTable;

@interface CKDAssetCacheTableGroup : CKSQLiteContainerAttributedTableGroup

@property (readonly, nonatomic) CKDAssetHandleTable *assetHandleTable;
@property (readonly, nonatomic) CKDAssetVolumeTable *assetVolumeTable;

+ (BOOL)rebootShouldClearData;
+ (double)expirationTime;

- (void)createTables;
- (void).cxx_destruct;

@end
