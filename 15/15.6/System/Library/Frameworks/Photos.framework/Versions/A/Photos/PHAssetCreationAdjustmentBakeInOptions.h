@interface PHAssetCreationAdjustmentBakeInOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char shouldBakeInIfLivePhotoPlaybackDisabled;
@property (nonatomic) char shouldBakeInIfLivePhotoMuted;
@property (nonatomic) char shouldBakeInIfAdjustedByThirdParty;
@property (nonatomic) char shouldBakeInIfCropped;
@property (nonatomic) char shouldBakeInIfTimelineTrimmed;
@property (nonatomic) char shouldBakeInIfPortraitDepthEffectEnabled;
@property (nonatomic) char shouldBakeInIfContainsPenultimateResources;
@property (nonatomic) char flattenLivePhotoToStillIfNeeded;

+ (id)adjustmentBakeInOptionsForPublishingOriginals;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithXPCDict:(id)a0;
- (void)encodeToXPCDict:(id)a0;
- (id)plRepresentation;

@end
