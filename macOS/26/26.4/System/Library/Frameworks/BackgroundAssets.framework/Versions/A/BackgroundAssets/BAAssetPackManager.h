@class NSSet, NSString, NSError, BAAssetPack;

@interface BAAssetPackManager : NSObject {
    void /* unknown type, empty encoding */ swiftManager;
}

@property (class, nonatomic, readonly) BAAssetPackManager *sharedManager;

@property (nonatomic, weak) void /* function */ delegate;

- (id)init:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (int)fileDescriptorForPath:(id)a0 searchingInAssetPackWithIdentifier:(id)a1 error:(id *)a2;
- (id)URLForPath:(id)a0 error:(id *)a1;
- (BOOL)assetPackIsAvailableLocallyWithIdentifier:(id)a0;
- (void)checkForUpdatesWithCompletionHandler:(void (^)(NSSet *, NSSet *, NSError *))a0;
- (id)contentsAtPath:(id)a0 searchingInAssetPackWithIdentifier:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (void)ensureLocalAvailabilityOfAssetPack:(BAAssetPack *)a0 completionHandler:(void (^)(NSError *))a1;
- (void)ensureLocalAvailabilityOfAssetPack:(id)a0 requireLatestVersion:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)getAllAssetPacksWithCompletionHandler:(void (^)(NSSet *, NSError *))a0;
- (void)getAssetPackWithIdentifier:(NSString *)a0 completionHandler:(void (^)(BAAssetPack *, NSError *))a1;
- (void)getLocalStatusOfAssetPackWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)getStatusOfAssetPackWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)getStatusRelativeToAssetPack:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeAssetPackWithIdentifier:(NSString *)a0 completionHandler:(void (^)(NSError *))a1;

@end
