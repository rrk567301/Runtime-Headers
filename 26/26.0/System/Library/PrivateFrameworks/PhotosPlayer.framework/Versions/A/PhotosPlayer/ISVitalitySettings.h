@class NSString, ISVitalitySpecificSettings;

@interface ISVitalitySettings : ISSettings <ISVitalitySettings>

@property (nonatomic) BOOL useLegacyBehavior;
@property (retain, nonatomic) ISVitalitySpecificSettings *oneUpSettings;
@property (retain, nonatomic) ISVitalitySpecificSettings *shareViewSettings;
@property (retain, nonatomic) ISVitalitySpecificSettings *activityViewSettings;
@property (retain, nonatomic) ISVitalitySpecificSettings *orbPreviewSettings;
@property (nonatomic) BOOL shouldPreroll;
@property (nonatomic) float vitalityTransitionScoreMinimumValueForPlayback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (double)playbackRate;
- (void)setDefaultValues;
- (long long)behavior;
- (void).cxx_destruct;
- (double)postDuration;
- (double)preDuration;
- (id)_defaultSettings;
- (double)endTimeOffset;
- (double)maxVitalityDelay;
- (double)maximumDelayBeforePlayback;
- (double)minimumPhotoTransitionDuration;
- (double)minimumVisibilityFactor;

@end
