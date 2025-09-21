@interface CNKFeatures : NSObject

@property (class, readonly, nonatomic) CNKFeatures *sharedInstance;

@property (readonly, nonatomic) char isSystemApertureEnabled;
@property (readonly, nonatomic) char isIncomingCallBannerEnabled;
@property (readonly, nonatomic) char isHeroImageEnabled;
@property (readonly, nonatomic) char isHeroTitleEnabled;
@property (readonly, nonatomic) char isDialPadEnabled;
@property (readonly, nonatomic) char isEnhancedEmergencyEnabled;
@property (readonly, nonatomic) char isSADMessagesEnabled;
@property (readonly, nonatomic) char isButtonLayoutEnabled;
@property (readonly, nonatomic) char shouldEmbedSwapBanner;
@property (readonly, nonatomic) char shouldShowFullScreenCallWaiting;
@property (readonly, nonatomic) char isDominoEnabled;
@property (readonly, nonatomic) char isNameAndPhotoC3Enabled;
@property (readonly, nonatomic) char callManagerEnabled;
@property (readonly, nonatomic) char buttonRemoteControlEnabled;
@property (readonly, nonatomic) char isUIFluidTransitionsEnabled;
@property (readonly, nonatomic) char requestToScreenShareEnabled;
@property (readonly, nonatomic) char lvm_allowLockScreenSleepEnabled;
@property (readonly, nonatomic) char lvm_endCallImmediately;
@property (readonly, nonatomic) char lvm_stopEnabled;
@property (readonly, nonatomic) char cacheVMDEnabled;

@end
