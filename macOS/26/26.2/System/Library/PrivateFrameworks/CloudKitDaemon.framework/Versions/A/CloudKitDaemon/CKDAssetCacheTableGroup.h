@class CKDAssetVolumeTable, CKDAssetHandleTable;

@interface CKDAssetCacheTableGroup : CKSQLiteContainerAttributedTableGroup

@property (readonly, nonatomic) CKDAssetHandleTable *assetHandleTable;
@property (readonly, nonatomic) CKDAssetVolumeTable *assetVolumeTable;

+ (BOOL)rebootShouldClearData;
+ (double)expirationTime;

- (void).cxx_destruct;
- (void)createTables;

@end
