@class PHFetchResult, NSProgress, NSArray, NSMutableArray, PHAssetCollection;

@interface PXDuplicateAssetsAction : PXAssetsSelectionAction {
    NSMutableArray *_assetsToDuplicate;
    long long _assetCount;
    BOOL _didCheckDuplicateCapabilities;
    BOOL _canExtractStill;
    NSArray *_createdAssetLocalIdentifiers;
    PHFetchResult *_assetsCreated;
    NSMutableArray *_assetsInput;
    PHAssetCollection *_collectionInput;
}

@property (readonly, nonatomic) BOOL canExtractStill;
@property (nonatomic) BOOL duplicatesOriginal;
@property (nonatomic) BOOL duplicatesAsStill;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } stillImageTime;
@property (retain, nonatomic) NSProgress *actionProgress;
@property (copy, nonatomic) id /* block */ downloadCompletionHandler;
@property (readonly, nonatomic) PHFetchResult *createdAssets;

+ (BOOL)canPerformOnAllAssets:(id)a0;
+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1;

- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (long long)assetCount;
- (id)assets;
- (void)performUndo:(id /* block */)a0;
- (id)initWithAssets:(id)a0 assetCollection:(id)a1;
- (void)processWithAssets:(id)a0 assetCollection:(id)a1 canDuplicate:(BOOL *)a2 canExtractStill:(BOOL *)a3;
- (void)_checkDuplicateCapabilities;
- (id)actionNameLocalizationKey;
- (id)initWithSelectionSnapshot:(id)a0;
- (id)processDuplicateActionWithAssets:(id)a0 assetCollection:(id)a1 assetsInAssetCollection:(id)a2;

@end
