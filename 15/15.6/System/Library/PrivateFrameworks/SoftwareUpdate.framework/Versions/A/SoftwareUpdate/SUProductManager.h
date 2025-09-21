@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface SUProductManager : NSObject {
    id _indexFile;
    NSMutableSet *_lockedProducts;
    NSObject<OS_dispatch_queue> *_updatesRepoQueue;
}

+ (id)defaultManager;
+ (id)_suggestedProductPathForProductKey:(id)a0 createDirectoryIfNeeded:(char)a1;
+ (id)sharedUpdatesDirectory;
+ (id)suggestedPackagePathForFileName:(id)a0 product:(id)a1;

- (void)dealloc;
- (id)init;
- (void)synchronize;
- (id)_anyLocalProductForProduct:(id)a0;
- (id)addProductsToAutomaticallyInstallLater:(id)a0;
- (char)addProductsToInstallAtLogout:(id)a0 replacingPrevious:(char)a1 nowIsLater:(char)a2;
- (id)allLocalProductKeys;
- (char)createDirectoryForProduct:(id)a0 error:(id *)a1;
- (unsigned long long)downloadedSizeForProduct:(id)a0;
- (char)isProductFullyDownloaded:(id)a0;
- (id)localProductForProduct:(id)a0;
- (id)packagePathForPackageURL:(id)a0 productKey:(id)a1;
- (id)partiallyDownloadedLocalProductForProduct:(id)a0;
- (id)productKeysToAutomaticallyInstallLater;
- (id)productKeysToInstallAtLogout;
- (id)productPathForProductKey:(id)a0;
- (void)registerProductExternallyChanged:(id)a0;
- (char)removeLocalProductWithKey:(id)a0;
- (char)removePackageRefs:(id)a0 forProductKey:(id)a1;
- (void)removeProductKeysToAutomaticallyInstallLater:(id)a0;
- (void)setLocked:(char)a0 forLocalProductWithKey:(id)a1;
- (void)setProductKeysToAutomaticallyInstallLater:(id)a0;

@end
