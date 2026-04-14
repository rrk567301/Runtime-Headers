@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface SUProductManager : NSObject {
    id _indexFile;
    NSMutableSet *_lockedProducts;
    NSObject<OS_dispatch_queue> *_updatesRepoQueue;
}

+ (id)defaultManager;
+ (id)_suggestedProductPathForProductKey:(id)a0 createDirectoryIfNeeded:(BOOL)a1;
+ (id)suggestedPackagePathForFileName:(id)a0 product:(id)a1;
+ (id)sharedUpdatesDirectory;

- (void)dealloc;
- (id)init;
- (void)synchronize;
- (unsigned long long)downloadedSizeForProduct:(id)a0;
- (BOOL)createDirectoryForProduct:(id)a0 error:(id *)a1;
- (void)registerProductExternallyChanged:(id)a0;
- (void)setLocked:(BOOL)a0 forLocalProductWithKey:(id)a1;
- (BOOL)removePackageRefs:(id)a0 forProductKey:(id)a1;
- (BOOL)removeLocalProductWithKey:(id)a0;
- (id)_anyLocalProductForProduct:(id)a0;
- (id)allLocalProductKeys;
- (id)localProductForProduct:(id)a0;
- (BOOL)isProductFullyDownloaded:(id)a0;
- (id)partiallyDownloadedLocalProductForProduct:(id)a0;
- (id)productPathForProductKey:(id)a0;
- (id)packagePathForPackageURL:(id)a0 productKey:(id)a1;
- (BOOL)addProductsToInstallAtLogout:(id)a0 replacingPrevious:(BOOL)a1 nowIsLater:(BOOL)a2;
- (id)productKeysToInstallAtLogout;
- (id)addProductsToAutomaticallyInstallLater:(id)a0;
- (void)removeProductKeysToAutomaticallyInstallLater:(id)a0;
- (void)setProductKeysToAutomaticallyInstallLater:(id)a0;
- (id)productKeysToAutomaticallyInstallLater;

@end
