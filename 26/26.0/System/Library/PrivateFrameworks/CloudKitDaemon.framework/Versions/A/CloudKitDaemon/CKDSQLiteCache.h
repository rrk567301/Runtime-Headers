@class CKDLogicalDeviceContext;

@interface CKDSQLiteCache : CKSQLite

@property (weak, nonatomic) CKDLogicalDeviceContext *deviceContext;

+ (id)sharedCache;
+ (id)dbFileName;
+ (id)cacheDirectory;
+ (id)cacheDatabaseSchema;

- (id)initWithDeviceContext:(id)a0;
- (id)initWithCacheDir:(id)a0;
- (void).cxx_destruct;
- (id)initOrExitWithPath:(id)a0 isSharedCache:(BOOL)a1;

@end
