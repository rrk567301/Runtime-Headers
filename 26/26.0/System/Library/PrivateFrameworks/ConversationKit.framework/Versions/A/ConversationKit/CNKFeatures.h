@interface CNKFeatures : NSObject

@property (class, readonly, nonatomic) CNKFeatures *sharedInstance;

@property (readonly, nonatomic) BOOL isSystemApertureEnabled;
@property (readonly, nonatomic) BOOL isIncomingCallBannerEnabled;
@property (readonly, nonatomic) BOOL isHeroImageEnabled;
@property (readonly, nonatomic) BOOL isHeroTitleEnabled;
@property (readonly, nonatomic) BOOL isFaceTimeLaunchPageEnabled;
@property (readonly, nonatomic) BOOL isDialPadEnabled;
@property (readonly, nonatomic) BOOL isEnhancedEmergencyEnabled;
@property (readonly, nonatomic) BOOL isSADMessagesEnabled;
@property (readonly, nonatomic) BOOL shouldEmbedSwapBanner;
@property (readonly, nonatomic) BOOL shouldShowFullScreenCallWaiting;
@property (readonly, nonatomic) BOOL isDominoEnabled;
@property (readonly, nonatomic) BOOL isNameAndPhotoC3Enabled;
@property (readonly, nonatomic) BOOL callManagerEnabled;
@property (readonly, nonatomic) BOOL buttonRemoteControlEnabled;
@property (readonly, nonatomic) BOOL tapToTrackEnabled;
@property (readonly, nonatomic) BOOL isUIFluidTransitionsEnabled;
@property (readonly, nonatomic) BOOL callRecordingEnabled;
@property (readonly, nonatomic) BOOL iPadCallRecordingEnabled;
@property (readonly, nonatomic) BOOL callRecordingDominoEnabled;
@property (readonly, nonatomic) BOOL waitOnHoldEnabled;
@property (readonly, nonatomic) BOOL smartHoldingRelayEnabled;
@property (readonly, nonatomic) BOOL requestToScreenShareEnabled;
@property (readonly, nonatomic) BOOL lvm_endCallImmediately;
@property (readonly, nonatomic) BOOL lvm_stopEnabled;
@property (readonly, nonatomic) BOOL cacheVMDEnabled;
@property (readonly, nonatomic) BOOL lvmEverywhereEnabled;
@property (readonly, nonatomic) BOOL isModernBannerSystemEnabled;
@property (readonly, nonatomic) BOOL isModernAudioBottomButtonsEnabled;
@property (readonly, nonatomic) BOOL isNewCallSwapNonJindoEnabled;
@property (readonly, nonatomic) BOOL isDualSimParityEnabled;
@property (readonly, nonatomic) BOOL receptionistEnabled;
@property (readonly, nonatomic) BOOL isICUIRedesignEnabled;
@property (readonly, nonatomic) BOOL isMoreMenuEnabled;
@property (readonly, nonatomic) BOOL sharePlayInCallsEnabled;
@property (readonly, nonatomic) BOOL isButtonShelfEnabled;

- (BOOL)isiPadPostersEnabledForCall:(id)a0;

@end
