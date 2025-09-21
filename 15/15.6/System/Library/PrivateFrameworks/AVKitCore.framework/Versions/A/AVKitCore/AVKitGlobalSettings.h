@class NSString, NSArray, NSObservation;

@interface AVKitGlobalSettings : NSObject {
    NSObservation *_mostRecentLegibleLanguageCodeObservation;
    NSObservation *_mostRecentAudioLanguageCodeObservation;
    NSObservation *_displayingCaptionsOnSkipBackObservation;
    NSObservation *_subtitleEnabledFromAutoStateCodeObservation;
}

@property (nonatomic) char secondGenerationPlayerEnabled;
@property (readonly, nonatomic) char playbackSpeedControlEnabled;
@property (readonly, nonatomic) char visualAnalysisEnabled;
@property (readonly, nonatomic) char visualAnalysisSupported;
@property (readonly, nonatomic) char isQuickLook;
@property (readonly, nonatomic) char isArtemisApp;
@property (readonly, nonatomic) char isAVKitMacPlayer;
@property (readonly, nonatomic) char isAVKitTester;
@property (readonly, nonatomic) char isPhotosApp;
@property (readonly, nonatomic) char isQuickTimePlayerX;
@property (readonly, nonatomic) char isTVApp;
@property (readonly, nonatomic) char isSpotlight;
@property (readonly, nonatomic) char extendedVisualAnalysisEnabled;
@property (readonly, nonatomic) char subjectLiftGestureEnabled;
@property (readonly, nonatomic) char searchBannerEnabled;
@property (readonly, nonatomic) char fluidSliderEnabled;
@property (readonly, nonatomic) char showsTVControls;
@property (readonly, nonatomic) char frameCountingForAllVideosEnabled;
@property (readonly, nonatomic) char overVideoScrubbingGestureEnabled;
@property (readonly, nonatomic) char quickLookModernPlayerControlsEnabled;
@property (readonly, nonatomic) char backgroundEffectEnabled;
@property (readonly, nonatomic) char attributedContentTitlesSupported;
@property (readonly, nonatomic) char subtitlesOnMuteEnabled;
@property (copy, nonatomic) NSString *mostRecentLegibleLanguageCode;
@property (copy, nonatomic) NSString *mostRecentAudioLanguageCode;
@property (readonly, nonatomic) char skipBackCaptionsEnabled;
@property (nonatomic, getter=isDisplayingCaptionsOnSkipBack) char displayingCaptionsOnSkipBack;
@property (readonly, nonatomic) char enhanceDialogueEnabled;
@property (nonatomic) unsigned long long subtitleAutomaticallyEnabledState;
@property (readonly, nonatomic) NSArray *preferredLanguages;
@property (readonly, nonatomic) char isIntegratedTimelineEnabled;
@property (readonly, nonatomic) char isIntegratedTimelineEnabledForLiveStreams;
@property (readonly, nonatomic) char timelineDiagnosticsEnabled;
@property (readonly, nonatomic) char animatedSkipButtonsEnabled;
@property (readonly, nonatomic) char prefersTintColorForPlaybackControlsView;
@property (readonly, nonatomic) char playerTipsEnabled;

+ (id)shared;
+ (char)_isDisplayingCaptionsOnSkipBack;
+ (char)_enhanceDialogueEnabled;
+ (id)_mostRecentAudioLanguageCode;
+ (id)_mostRecentLegibleLanguageCode;
+ (char)_overVideoScrubbingGestureEnabled;
+ (unsigned long long)_subtitleAutomaticallyEnabledState;

- (id)init;
- (void).cxx_destruct;
- (char)_platformSupportsIntegratedTimeline;
- (void)setSharedSetting:(id)a0 toString:(id)a1;

@end
