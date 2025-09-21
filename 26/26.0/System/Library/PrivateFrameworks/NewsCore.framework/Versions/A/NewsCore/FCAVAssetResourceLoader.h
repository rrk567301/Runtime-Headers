@class FCAssetManager, NSString, FCThreadSafeMutableSet;

@interface FCAVAssetResourceLoader : NSObject <AVAssetResourceLoaderDelegate, FCAVAssetResourceLoaderType>

@property (readonly, nonatomic) FCAssetManager *assetManager;
@property (readonly, nonatomic) FCThreadSafeMutableSet *whitelistedMasterPlaylistURLs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerAVURLAssetForAutomaticResourceManagement:(id)a0;
- (id)init;
- (BOOL)resourceLoader:(id)a0 shouldWaitForLoadingOfRequestedResource:(id)a1;
- (void)prefetchMasterPlaylistForAssetURL:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_isHLSURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithCacheDirectory:(id)a0 networkReachability:(id)a1;

@end
