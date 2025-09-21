@interface PXCursorInteractionSettings : PXSettings

@property (nonatomic) double animationDuration;
@property (nonatomic) double dampingRatio;
@property (nonatomic) double yearsPadding;
@property (nonatomic) double monthsPadding;
@property (nonatomic) double daysPadding;
@property (nonatomic) double allPhotosAspectFitPadding;
@property (nonatomic) double allPhotosAspectFillPadding;
@property (nonatomic) long long aspectFitAnimationStyle;
@property (nonatomic) long long aspectFillAnimationStyle;
@property (nonatomic) char enableGridShadows;
@property (nonatomic) char enableGridLift;
@property (nonatomic) char enableCardShadows;
@property (nonatomic) char enableCardLift;
@property (nonatomic) char enableDetailsEffect;
@property (nonatomic) char enableCuratedLibraryEffects;
@property (nonatomic) char enableDaysEffect;

+ (id)sharedInstance;

- (void)setDefaultValues;
- (id)parentSettings;
- (long long)cardInteractionOptions;
- (long long)gridInteractionOptions;
- (long long)interactionOptionsForZoomLevel:(long long)a0 isAllPhotosAspectFit:(char)a1;
- (double)paddingForZoomLevel:(long long)a0;

@end
