@class NFUnfairLock, NSString, NSDictionary, AVURLAsset, NSURL, FCContentArchive, FCContentManifest;
@protocol FCAVAssetResourceLoaderType, FCAVAssetKeyManagerType, FCAVAssetKeyCacheType, FCAVAssetCacheType;

@interface FCAVAsset : NSObject <NSCopying, FCContentArchivable> {
    NSDictionary *_assetOptions;
    NFUnfairLock *_assetLock;
    id<FCAVAssetCacheType> _assetCache;
    id<FCAVAssetKeyCacheType> _assetKeyCache;
    id<FCAVAssetResourceLoaderType> _assetResourceLoader;
    id<FCAVAssetKeyManagerType> _assetKeyManager;
    NSURL *_remoteURL;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) AVURLAsset *asset;
@property (readonly, nonatomic) FCContentArchive *contentArchive;
@property (readonly, nonatomic) FCContentManifest *contentManifest;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)_resetUnderlyingAsset;

@end
