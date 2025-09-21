@interface PXAssetsSceneSettings : PXSettings

@property (nonatomic) double transitionDuration;
@property (nonatomic) char enableImagePreheating;
@property (nonatomic) char showBordersOnAnimatedContent;
@property (nonatomic) char animateContentByDefault;
@property (nonatomic) char allowLivePhotoPlayback;
@property (nonatomic) char playLivePhotosAsLoops;
@property (nonatomic) char allowLoopingVideoPlayback;
@property (nonatomic) char allowVideoPlayback;
@property (nonatomic) char allowAnimatedImagePlayback;

+ (id)sharedInstance;

- (void)setDefaultValues;
- (id)parentSettings;

@end
