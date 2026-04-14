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

- (void).cxx_destruct;
- (long long)behavior;
- (void)setDefaultValues;
- (double)playbackRate;
- (id)_defaultSettings;
- (double)preDuration;
- (double)postDuration;
- (double)minimumPhotoTransitionDuration;
- (double)endTimeOffset;
- (double)minimumVisibilityFactor;
- (double)maximumDelayBeforePlayback;
- (double)maxVitalityDelay;

@end
