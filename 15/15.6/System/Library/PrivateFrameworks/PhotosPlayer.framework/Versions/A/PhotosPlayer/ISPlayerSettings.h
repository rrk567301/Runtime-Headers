@interface ISPlayerSettings : ISSettings

@property (nonatomic) char easingEnabled;
@property (nonatomic) double vitalityEaseDuration;
@property (nonatomic) float vitalityEaseMinRate;
@property (nonatomic) long long startBehavior;
@property (nonatomic) char scaleDuringPlayback;
@property (nonatomic) char loopingEnabled;
@property (nonatomic) char crossfadeEnabled;
@property (nonatomic) char audioEnabled;
@property (nonatomic) char playIsSticky;
@property (nonatomic) char longExposureVitality;
@property (nonatomic) char playDuringHint;
@property (nonatomic) char showStateOverlay;
@property (nonatomic) char prerollBeforePlaying;
@property (nonatomic) char useDedicatedQueues;
@property (nonatomic) char allowFrameBlending;
@property (nonatomic) char allowVideoPreRoll;
@property (nonatomic) double forceScrubRewindFactor;
@property (nonatomic) double forceScrubMinRateChange;
@property (nonatomic) double forceScrubMinimumRate;
@property (nonatomic) double forceScrubMaximumInteractiveRate;

+ (id)sharedInstance;

- (void)setDefaultValues;

@end
