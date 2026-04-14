@class CKDLogicalDeviceContext;

@interface CKDSQLiteCache : CKSQLite

@property (weak, nonatomic) CKDLogicalDeviceContext *deviceContext;

+ (id)dbFileName;
+ (id)sharedCache;
+ (id)cacheDatabaseSchema;
+ (id)cacheDirectory;

- (void).cxx_destruct;
- (id)initWithDeviceContext:(id)a0;
- (id)initWithCacheDir:(id)a0;
- (id)initOrExitWithPath:(id)a0 isSharedCache:(BOOL)a1;

@end
