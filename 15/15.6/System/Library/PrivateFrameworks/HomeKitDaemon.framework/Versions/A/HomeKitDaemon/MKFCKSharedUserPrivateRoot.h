@class NSDictionary;

@interface MKFCKSharedUserPrivateRoot : MKFCKSharedUserData

@property (nonatomic) long long addSceneButtonPresentedCount;
@property (retain, nonatomic) NSDictionary *characteristicAuthorizationData;
@property (nonatomic) char completedSwitchingHomesOnboardingUI;
@property (nonatomic) char dismissed2024EnergyOnboarding;
@property (nonatomic) char dismissedAccessCodeOnboarding;
@property (nonatomic) char dismissedAccessoryFirmwareUpdateOnboarding;
@property (nonatomic) char dismissedAnnounceOnboarding;
@property (nonatomic) char dismissedCameraRecordingOnboarding;
@property (nonatomic) char dismissedCameraRecordingSetupBanner;
@property (nonatomic) char dismissedCameraUpgradeOfferBanner;
@property (nonatomic) char dismissedHomeTheaterOnboarding;
@property (nonatomic) char dismissedIdentifyVoiceOnboarding;
@property (nonatomic) char dismissedIdentifyVoiceSetupBanner;
@property (nonatomic) char dismissedNaturalLightingOnboarding;
@property (nonatomic) char dismissedTVViewingProfileOnboarding;
@property (nonatomic) char dismissedTVViewingProfileSetupBanner;
@property (nonatomic) char dismissedUserSplitMediaAccountWarning;
@property (nonatomic) char dismissedWalletKeyExpressModeOnboarding;
@property (nonatomic) char dismissedWelcomeUI;
@property (nonatomic) char hasUserSeenRMVNewLanguageNotification;

+ (id)fetchRequest;
+ (unsigned long long)cloudStoreTypes;
+ (id)createWithHomeModelID:(id)a0 persistentStore:(id)a1 context:(id)a2;
+ (id)rootKeyPath;

@end
