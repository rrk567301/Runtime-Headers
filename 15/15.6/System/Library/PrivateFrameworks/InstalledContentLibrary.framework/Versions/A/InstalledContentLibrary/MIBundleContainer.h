@class MIBundleMetadata, NSURL, MIExecutableBundle, MIStoreMetadata;

@interface MIBundleContainer : MIContainer

@property (copy, nonatomic) MIBundleMetadata *bundleMetadata;
@property (copy, nonatomic) MIStoreMetadata *iTunesMetadata;
@property (readonly, nonatomic) MIExecutableBundle *bundle;
@property (readonly, nonatomic) unsigned int bundleMaxLinkedSDKVersion;
@property (readonly, nonatomic) NSURL *bundleMetadataURL;
@property (readonly, nonatomic) NSURL *iTunesMetadataURL;
@property (readonly, nonatomic) NSURL *referenceStorageURL;
@property (readonly, nonatomic) char shouldHaveCorrespondingDataContainer;
@property (readonly, nonatomic) char hasParallelPlaceholder;
@property (readonly, nonatomic) NSURL *parallelPlaceholderURL;

+ (id)allAppBundleContainersWithError:(id *)a0;
+ (id)appBundleContainerForIdentifier:(id)a0 inDomain:(unsigned long long)a1 withError:(id *)a2;
+ (id)appBundleContainerForIdentifier:(id)a0 temporary:(char)a1 inDomain:(unsigned long long)a2 withError:(id *)a3;
+ (id)appBundleContainerWithIdentifier:(id)a0 createIfNeeded:(char)a1 created:(char *)a2 error:(id *)a3;
+ (id)pluginKitPluginBundleContainerWithIdentifier:(id)a0 createIfNeeded:(char)a1 created:(char *)a2 error:(id *)a3;
+ (id)tempAppBundleContainerWithIdentifier:(id)a0 error:(id *)a1;
+ (id)tempAppBundleContainerWithIdentifier:(id)a0 inDomain:(unsigned long long)a1 withError:(id *)a2;
+ (id)tempPluginKitPluginBundleContainerWithIdentifier:(id)a0 error:(id *)a1;
+ (char)updateiTunesMetadata:(id)a0 forAppWithIdentifier:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)initWithContainer:(id)a0 error:(id *)a1;
- (id)_bundleExtensionForContainerClassWithError:(id *)a0;
- (char)_configureBundleWithError:(id *)a0;
- (char)_writeRawiTunesMetadataData:(id)a0 error:(id *)a1;
- (char)bestEffortRollbackiTunesMetadata:(id)a0 error:(id *)a1;
- (id)bundleMetadataWithError:(id *)a0;
- (char)captureBundleByMoving:(id)a0 withError:(id *)a1;
- (char)captureStoreDataFromDirectory:(id)a0 doCopy:(char)a1 failureIsFatal:(char)a2 includeiTunesMetadata:(char)a3 withError:(id *)a4;
- (id)iTunesMetadataWithError:(id *)a0;
- (id)initForAppContainerWithURL:(id)a0;
- (id)initWithContainerURL:(id)a0 containingBundleWithURL:(id)a1;
- (id)initWithToken:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (char)makeContainerLiveReplacingContainer:(id)a0 reason:(unsigned long long)a1 waitForDeletion:(char)a2 withError:(id *)a3;
- (char)saveBundleMetadata:(id)a0 withError:(id *)a1;
- (char)writeiTunesMetadata:(id)a0 error:(id *)a1;

@end
