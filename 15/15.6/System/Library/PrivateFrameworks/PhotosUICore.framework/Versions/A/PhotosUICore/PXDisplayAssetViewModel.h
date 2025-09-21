@class PXUpdater, NSImage, NSArray, NSError, PXDisplayAssetViewModelHighlightTimeRangeController;
@protocol PXDisplayAsset;

@interface PXDisplayAssetViewModel : PXObservable <PXMutableDisplayAssetViewModel>

@property (readonly, nonatomic) PXUpdater *updater;
@property (readonly, nonatomic) PXDisplayAssetViewModelHighlightTimeRangeController *timeRangeController;
@property (readonly, nonatomic) id<PXDisplayAsset> asset;
@property (readonly, nonatomic) long long playbackStyle;
@property (readonly, nonatomic) double assetAspectRatio;
@property (readonly, nonatomic) long long contentMode;
@property (readonly, nonatomic) char wantsLivePhotoPlayback;
@property (readonly, nonatomic) NSImage *currentImage;
@property (readonly, nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } contentSafeAreaInsets;
@property (readonly, nonatomic) char isDisplayingFullQualityContent;
@property (readonly, nonatomic) char allowsTextSelection;
@property (readonly, nonatomic) NSArray *stringsToHighlight;
@property (readonly, nonatomic) NSArray *sceneIdentifiersToHighlight;
@property (readonly, nonatomic) NSArray *audioIdentifiersToHighlight;
@property (readonly, nonatomic) NSArray *humanActionIdentifiersToHighlight;
@property (readonly, nonatomic) NSArray *personLocalIdentifiersToHighlight;
@property (readonly, nonatomic) NSArray *timeRangesToHighlight;
@property (readonly, nonatomic) float loadingProgress;
@property (readonly, nonatomic) NSError *loadingError;

- (id)init;
- (void).cxx_destruct;
- (void)setAsset:(id)a0;
- (void)setContentMode:(long long)a0;
- (void)setCurrentImage:(id)a0;
- (void)setPlaybackStyle:(long long)a0;
- (void)setLoadingProgress:(float)a0;
- (void)performChanges:(id /* block */)a0;
- (void)_setNeedsUpdate;
- (void)setAudioIdentifiersToHighlight:(id)a0;
- (void)setSceneIdentifiersToHighlight:(id)a0;
- (void)setAllowsTextSelection:(char)a0;
- (void)setHumanActionIdentifiersToHighlight:(id)a0;
- (void)setPersonLocalIdentifiersToHighlight:(id)a0;
- (void)setStringsToHighlight:(id)a0;
- (void)didPerformChanges;
- (void)_invalidateAssetAspectRatio;
- (void)_updateAssetAspectRatio;
- (void)setAssetAspectRatio:(double)a0;
- (void)setContentSafeAreaInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setIsDisplayingFullQualityContent:(char)a0;
- (void)setLoadingError:(id)a0;
- (void)setTimeRangesToHighlight:(id)a0;
- (void)setWantsLivePhotoPlayback:(char)a0;

@end
