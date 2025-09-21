@interface VUIMediaShowcasingConfig : NSObject

@property (nonatomic) double playbackDelayInterval;
@property (nonatomic) double animationTransitionDuration;
@property (nonatomic) float backgroundVolume;
@property (nonatomic) float foregroundVolume;
@property (nonatomic) char backgroundMediaTransferEnabled;
@property (nonatomic) double backgroundMediaTransferAnimationDuration;
@property (nonatomic) double backgroundMediaFullscreenTransitionDuration;
@property (nonatomic) double volumeTransitionAnimationDuration;
@property (nonatomic) unsigned long long numberOfVolumeIncrements;
@property (nonatomic, getter=isRubberBandingEnabled) char rubberBandingEnabled;
@property (nonatomic) double swipingEndAnimationDuration;
@property (nonatomic) double autoSwipeAnimationDuration;
@property (nonatomic) char carouselBehaviorEnabled;
@property (nonatomic) float navigationBarTransitionDistance;
@property (nonatomic) float titleViewTransitionDistance;
@property (nonatomic, getter=isAutoAdvanceToNextPageEnabled) char autoAdvanceToNextPageEnabled;
@property (nonatomic) double advanceToNextPageDelayDuration;
@property (nonatomic) double advanceToNextPageDelayDurationImageOnly;
@property (nonatomic, getter=isParallaxEnabled) char parallaxEnabled;
@property (nonatomic) float parallaxRatio;
@property (nonatomic) float metadataFadeOutSpeed;
@property (nonatomic) float metadataFadeInSpeed;
@property (nonatomic) float swipeSpeedFactor;
@property (nonatomic) float swipeCompletionSpeedFactor;
@property (nonatomic) double itemHoverDelayDuration;
@property (nonatomic) char gradientUsesImageColor;
@property (nonatomic) double hideMuteButtonDelayDuration;
@property (nonatomic) double hidePageIndicatorsDelayDuration;
@property (nonatomic) double focusDebounceThreshold;
@property (nonatomic) char allowsFullscreenMediaTransition;
@property (nonatomic) float sidebarOpenDuringAnimationThreshold;

- (id)init;

@end
