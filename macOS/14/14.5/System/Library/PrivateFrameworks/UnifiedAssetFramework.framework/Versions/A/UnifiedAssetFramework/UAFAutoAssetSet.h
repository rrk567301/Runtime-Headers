@class NSString, NSUUID, NSMutableSet, NSMutableDictionary, MAAutoAssetSet;

@interface UAFAutoAssetSet : NSObject

@property (retain, nonatomic) MAAutoAssetSet *autoAssetSet;
@property (retain, nonatomic) NSString *latestAtomicInstance;
@property (retain, nonatomic) NSMutableSet *atomicInstances;
@property (retain, nonatomic) NSMutableSet *unpromotableAssets;
@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSString *assetSetName;
@property (retain, nonatomic) NSMutableDictionary *assets;

+ (id)getClientName;
+ (id)autoAssetEntryToAsset:(id)a0 withAssetName:(id)a1;
+ (id)catalogAssetSetID:(id)a0;
+ (id)getConcurrentQueue;
+ (id)getLockReason:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)markAssetsPromoted:(id)a0 error:(id *)a1;
- (BOOL)markAssetsProvisional:(id)a0 error:(id *)a1;
- (BOOL)lockAutoAssets:(id)a0;
- (void)addAtomicInstance:(id)a0;
- (id)assetWithName:(id)a0;
- (void)availableForUseError:(id *)a0 newerVersionError:(id *)a1;
- (id)getMAAutoAssetDownloadErrorsSync;
- (id)initWithAssetSetName:(id)a0 autoAssets:(id)a1 uuid:(id)a2;
- (BOOL)lockAtomicInstance:(id)a0 specifierToAssetName:(id)a1;
- (BOOL)lockLatestAtomicInstance:(id)a0;

@end
