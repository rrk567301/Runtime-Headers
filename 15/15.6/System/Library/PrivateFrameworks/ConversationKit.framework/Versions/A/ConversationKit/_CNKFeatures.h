@interface _CNKFeatures : NSObject

@property (class, nonatomic, readonly) _CNKFeatures *sharedInstance;

@property (nonatomic, readonly) char isSystemApertureEnabled;
@property (nonatomic, readonly) char isIncomingCallBannerEnabled;
@property (nonatomic, readonly) char isHeroImageEnabled;
@property (nonatomic, readonly) char isHeroTitleEnabled;
@property (nonatomic, readonly) char isEnhancedEmergencyEnabled;
@property (nonatomic, readonly) char isSADMessagesEnabled;
@property (nonatomic, readonly) char isDialPadEnabled;
@property (nonatomic, readonly) char isButtonLayoutEnabled;
@property (nonatomic, readonly) char isScreeningLiveActivityEnabled;
@property (nonatomic, readonly) char shouldEmbedSwapBanner;
@property (nonatomic, readonly) char isFaceTimeMyselfEnabled;
@property (nonatomic, readonly) char shouldShowFullScreenCallWaiting;
@property (nonatomic, readonly) char isDominoEnabled;
@property (nonatomic, readonly) char isNameAndPhotoC3Enabled;
@property (nonatomic, readonly) char callManagerEnabled;
@property (nonatomic, readonly) char hudActivityManagerEnabled;
@property (nonatomic, readonly) char requestToScreenShareEnabled;
@property (nonatomic, readonly) char usesModernScreenSharingFromMessages;
@property (nonatomic, readonly) char isAppProtectionEnabled;
@property (nonatomic, readonly) char buttonRemoteControlEnabled;
@property (nonatomic, readonly) char isUIFluidTransitionsEnabled;
@property (nonatomic, readonly) char lvm_stopEnabled;
@property (nonatomic, readonly) char lvm_allowLockScreenSleepEnabled;
@property (nonatomic, readonly) char lvm_endCallImmediately;
@property (nonatomic, readonly) char cacheVMDEnabled;
@property (nonatomic, readonly) char showTranscriptWithoutConfidenceFiltering;

- (id)init;
- (void).cxx_destruct;

@end
