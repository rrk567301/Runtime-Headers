@class CKDAssetVolumeTable, CKDAssetHandleTable;

@interface CKSAssetCacheTableGroup : CKSQLiteTableGroup

@property (readonly, nonatomic) CKDAssetHandleTable *assetHandleTable;
@property (readonly, nonatomic) CKDAssetVolumeTable *assetVolumeTable;

+ (BOOL)rebootShouldClearData;

- (void).cxx_destruct;
- (id)createTables;

@end
