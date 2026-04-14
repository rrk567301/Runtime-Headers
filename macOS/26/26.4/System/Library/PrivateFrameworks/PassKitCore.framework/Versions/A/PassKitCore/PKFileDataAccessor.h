@class PKDirectoryCoordinator, NSString, NSArray, NSURL, PKRemoteAssetManager;

@interface PKFileDataAccessor : PKDataAccessor {
    PKDirectoryCoordinator *_coordinator;
    BOOL _remoteAssetManagerAccessed;
    PKRemoteAssetManager *_remoteAssetManager;
    NSArray *_seids;
}

@property (nonatomic) BOOL ownsFileURL;
@property (copy, nonatomic) NSString *explicitDataTypeIdentifier;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) unsigned long long fileSizeOnDisk;

- (id)content;
- (id)bundle;
- (void)contentWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)dataForBundleResourceNamed:(id)a0 withExtension:(id)a1;
- (void)revocationStatusWithCompletion:(id /* block */)a0;
- (id)initWithFileURL:(id)a0 error:(id *)a1;
- (id)init;
- (id)archiveData;
- (id)dataForBundleResources:(id)a0;
- (id)passLocalizedStringForKey:(id)a0;
- (id)dictionary;
- (id)imageSetForType:(long long)a0 screenScale:(double)a1 suffix:(id)a2 displayProfile:(id)a3 preheat:(BOOL)a4;
- (void)dealloc;
- (id)dataForBundleResource:(id)a0;
- (id)displayProfileOfType:(long long)a0;
- (void)imageSetForType:(long long)a0 screenScale:(double)a1 suffix:(id)a2 displayProfile:(id)a3 preheat:(BOOL)a4 withCompletion:(id /* block */)a5;
- (void)_downloadRemoteAssetsWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (BOOL)_remoteAssetsDownloadedForScreenScale:(double)a0 seids:(id)a1 suffix:(id)a2 includeEncryptedAssets:(BOOL)a3;
- (void)dictionaryWithCompletion:(id /* block */)a0;
- (id)initWithFileURL:(id)a0 error:(id *)a1 coordinator:(id)a2;
- (id)manifestHash;
- (id)remoteAssetManager;
- (id)remoteAssetManagerForSEIDs:(id)a0;
- (BOOL)remoteAssetsDownloadedForConfiguration:(id)a0;
- (id)resourceValueForKey:(id)a0;
- (id)serializedFileWrapper;

@end
