@interface _CNKFeatures : NSObject

@property (class, nonatomic, readonly) _CNKFeatures *sharedInstance;

@property (nonatomic, readonly) BOOL isSystemApertureEnabled;
@property (nonatomic, readonly) BOOL isIncomingCallBannerEnabled;
@property (nonatomic, readonly) BOOL isHeroImageEnabled;
@property (nonatomic, readonly) BOOL isFaceTimeLaunchPageEnabled;
@property (nonatomic, readonly) BOOL isHeroTitleEnabled;
@property (nonatomic, readonly) BOOL isEnhancedEmergencyEnabled;
@property (nonatomic, readonly) BOOL isSADMessagesEnabled;
@property (nonatomic, readonly) BOOL isDialPadEnabled;
@property (nonatomic, readonly) BOOL isScreeningLiveActivityEnabled;
@property (nonatomic, readonly) BOOL shouldEmbedSwapBanner;
@property (nonatomic, readonly) BOOL isFaceTimeMyselfEnabled;
@property (nonatomic, readonly) BOOL isButtonShelfEnabled;
@property (nonatomic, readonly) BOOL isAudioCallTranslationEnabled;
@property (nonatomic, readonly) BOOL shouldShowFullScreenCallWaiting;
@property (nonatomic, readonly) BOOL isDominoEnabled;
@property (nonatomic, readonly) BOOL isNameAndPhotoC3Enabled;
@property (nonatomic, readonly) BOOL callManagerEnabled;
@property (nonatomic, readonly) BOOL hudActivityManagerEnabled;
@property (nonatomic, readonly) BOOL requestToScreenShareEnabled;
@property (nonatomic, readonly) BOOL usesModernScreenSharingFromMessages;
@property (nonatomic, readonly) BOOL isAppProtectionEnabled;
@property (nonatomic, readonly) BOOL buttonRemoteControlEnabled;
@property (nonatomic, readonly) BOOL tapToTrackEnabled;
@property (nonatomic, readonly) BOOL isUIFluidTransitionsEnabled;
@property (nonatomic, readonly) BOOL callRecordingEnabled;
@property (nonatomic, readonly) BOOL iPadCallRecordingEnabled;
@property (nonatomic, readonly) BOOL callRecordingDominoEnabled;
@property (nonatomic, readonly) BOOL waitOnHoldEnabled;
@property (nonatomic, readonly) BOOL smartHoldingRelayEnabled;
@property (nonatomic, readonly) BOOL isDualSimParityEnabled;
@property (nonatomic, readonly) BOOL lvm_stopEnabled;
@property (nonatomic, readonly) BOOL lvm_endCallImmediately;
@property (nonatomic, readonly) BOOL showTranscriptWithoutConfidenceFiltering;
@property (nonatomic, readonly) BOOL lvmEverywhereEnabled;
@property (nonatomic, readonly) BOOL isModernBannerSystemEnabled;
@property (nonatomic, readonly) BOOL isiPadPostersEnabled;
@property (nonatomic, readonly) BOOL isNewCallSwapNonJindoEnabled;
@property (nonatomic, readonly) BOOL isEasySharedNameAndPhotoEnabled;
@property (nonatomic, readonly) BOOL isAvatarSwiftUIEnabled;
@property (nonatomic, readonly) BOOL isMacInCallUIPosterEnabled;
@property (nonatomic, readonly) BOOL isModernAudioBottomButtonsEnabled;
@property (nonatomic, readonly) BOOL isICUIRedesignEnabled;
@property (nonatomic, readonly) BOOL isMoreMenuEnabled;
@property (nonatomic, readonly) BOOL sharePlayInCallsEnabled;
@property (nonatomic, readonly) BOOL receptionistEnabled;
@property (nonatomic, readonly) BOOL nudityDetectionEnabled;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isiPadPostersEnabledFor:(id)a0;

@end
