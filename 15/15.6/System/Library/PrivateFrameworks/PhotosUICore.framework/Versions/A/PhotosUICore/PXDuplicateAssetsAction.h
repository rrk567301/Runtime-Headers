@class PHFetchResult, NSProgress, NSArray, NSMutableArray;

@interface PXDuplicateAssetsAction : PXAssetsSelectionAction {
    NSMutableArray *_originalAssets;
    long long _assetCount;
    char _didCheckDuplicateCapabilities;
    char _canExtractStill;
    NSArray *_createdAssetLocalIdentifiers;
    PHFetchResult *_createdAssets;
}

@property (readonly, nonatomic) char canExtractStill;
@property (nonatomic) char duplicatesOriginal;
@property (nonatomic) char duplicatesAsStill;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } stillImageTime;
@property (retain, nonatomic) NSProgress *actionProgress;
@property (copy, nonatomic) id /* block */ downloadCompletionHandler;
@property (readonly, nonatomic) PHFetchResult *createdAssets;

+ (char)canPerformOnAllAssets:(id)a0;
+ (char)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1;

- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (long long)assetCount;
- (id)assets;
- (void)performUndo:(id /* block */)a0;
- (void)_checkDuplicateCapabilities;
- (id)actionNameLocalizationKey;
- (id)initWithSelectionSnapshot:(id)a0;

@end
