@class NSString, MAAsset, MAAssetQuery, NSURL, NSMutableArray, NSLock;

@interface MobileAssetUpdater : NSObject {
    char _participateInSeed;
    NSLock *_lock;
}

@property (retain) MAAsset *asset;
@property (retain) MAAssetQuery *query;
@property (copy) NSString *assetType;
@property (copy, nonatomic) NSMutableArray *alternateAssetTypes;
@property (retain) NSString *overrideFile;
@property (retain) NSString *purgeOverrideFile;
@property (readonly) char assetAvailable;
@property (readonly) char assetDownloaded;
@property (readonly) char overrideApplied;
@property char requireAssetMetadata;
@property (copy) id /* block */ logger;
@property char downloadOnCellularAllowed;
@property (retain) NSURL *assetLocation;
@property (retain) NSURL *assetLocationOverride;

- (void)dealloc;
- (id)initWithAssetType:(id)a0;
- (char)isDeploymentAllowed:(id)a0;
- (id)assetWithMaxVersion:(id)a0;
- (void)doneWithAsset;
- (void)log:(int)a0 format:(id)a1;
- (id)queryPredicate;
- (id)validateAsset;
- (id)validateAssetAttributes:(id)a0;
- (id)overrideQueryPredicateFromDict:(id)a0;
- (id)downloadAsset:(id /* block */)a0;
- (void)downloadComplete:(long long)a0 completion:(id /* block */)a1;
- (char)filterAsset:(id)a0 osBuild:(id)a1 osVersion:(id)a2;
- (id)filterFoundAssets:(id)a0;
- (id)findAsset:(char)a0 completion:(id /* block */)a1;
- (void)purgeAsset;
- (void)queryComplete:(id)a0 remote:(char)a1 status:(long long)a2 completion:(id /* block */)a3;

@end
