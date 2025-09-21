@interface PLManagedAssetCMMAdjustmentBakeInOptions : NSObject

@property (nonatomic) char shouldBakeInIfLivePhotoPlaybackDisabled;
@property (nonatomic) char shouldBakeInIfLivePhotoMuted;
@property (nonatomic) char shouldBakeInIfAdjustedByThirdParty;
@property (nonatomic) char shouldBakeInIfCropped;
@property (nonatomic) char shouldBakeInIfTimelineTrimmed;
@property (nonatomic) char shouldBakeInIfPortraitDepthEffectEnabled;
@property (nonatomic) char shouldBakeInIfContainsPenultimateResources;
@property (nonatomic) char flattenLivePhotoToStillIfNeeded;

@end
