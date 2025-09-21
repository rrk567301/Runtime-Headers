@class NSString, PFAnimatedImage, NSHashTable, ISAnimatedImageTimer;

@interface ISAnimatedImagePlayer : NSObject <ISChangeObserver> {
    NSHashTable *_weakDestinations;
    PFAnimatedImage *_image;
    ISAnimatedImageTimer *_timer;
    char _hasStartedAnimating;
    char _hasFinishedAnimating;
    double _timeAccumulator;
    double _previousFrameTime;
    char _infiniteLoop;
    unsigned long long _remainingLoopCount;
}

@property (nonatomic) struct CGImage { } *currentImage;
@property (readonly, nonatomic) PFAnimatedImage *animatedImage;
@property (nonatomic, getter=isPlaying) char playing;
@property (nonatomic) unsigned long long displayedFrameIndex;
@property (nonatomic) char allowFrameDrops;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_resetAnimationState;
- (id)initWithAnimatedImage:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)updateAnimation;
- (void)animationTimerFired:(double)a0;
- (char)_anyDestinationIsReady;
- (void)_notifyDestinationsOfAnimationEnd;
- (void)_notifyDestinationsOfAnimationStart;
- (void)_notifyDestinationsOfFrameChange;
- (void)_seekToBeginning;
- (void)_setCurrentFrame:(struct CGImage { } *)a0;
- (char)_shouldAnimate;
- (void)registerDestination:(id)a0;
- (void)unregisterDestination:(id)a0;

@end
