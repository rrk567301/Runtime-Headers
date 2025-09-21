@class NSString, NSData, NSNumber;

@interface LACFlags : NSObject <LACFlagsProvider>

@property (class, readonly, nonatomic) LACFlags *sharedInstance;

@property (readonly, nonatomic) NSString *flagAuthDialogUseAlwaysOnPasswordFieldEnabledKey;
@property (readonly, nonatomic) BOOL valueForFlagAuthDialogUseAlwaysOnPasswordFieldEnabled;
@property (readonly, nonatomic) NSString *flagCompanionMockDevicesKey;
@property (readonly, nonatomic) NSNumber *valueForFlagCompanionMockDevices;
@property (readonly, nonatomic) NSString *flagCompanionSessionAuthenticationKey;
@property (readonly, nonatomic) NSData *valueForFlagCompanionSessionAuthentication;
@property (readonly, nonatomic) NSString *flagOnenessSessionActiveKey;
@property (readonly, nonatomic) NSNumber *valueForFlagOnenessSessionActive;
@property (readonly, nonatomic) NSString *flagPhoneIntegrationSessionActiveKey;
@property (readonly, nonatomic) NSNumber *valueForFlagPhoneIntegrationSessionActive;
@property (readonly, nonatomic) NSString *flagPreboardModeKey;
@property (readonly, nonatomic) NSNumber *valueForFlagPreboardMode;
@property (readonly, nonatomic) NSString *flagReleaseUIDelegateKey;
@property (readonly, nonatomic) BOOL valueForFlagReleaseUIDelegate;
@property (readonly, nonatomic) NSString *flagRunningInBATSKey;
@property (readonly, nonatomic) NSNumber *valueForFlagRunningInBATS;
@property (readonly, nonatomic) NSString *flagSharedModeActiveKey;
@property (readonly, nonatomic) NSNumber *valueForFlagSharedModeActive;
@property (readonly, nonatomic) NSString *flagSharedModeLatencyKey;
@property (readonly, nonatomic) NSNumber *valueForFlagSharedModeLatency;
@property (readonly, nonatomic) NSString *flagUseTestAppleKeyStoreDaemonKey;
@property (readonly, nonatomic) NSNumber *valueForFlagUseTestAppleKeyStoreDaemon;
@property (readonly, nonatomic) BOOL featureFlagAppleKeyStoreOTIEnabled;
@property (readonly, nonatomic) BOOL featureFlagOTIEnabled;
@property (readonly, nonatomic) BOOL featureFlagConcurrentEvaluationsEnabled;
@property (readonly, nonatomic) BOOL featureFlagEssoniteClickEnabled;
@property (readonly, nonatomic) BOOL featureFlagExtractableCredentialProtectionEnabled;
@property (readonly, nonatomic) BOOL featureFlagLaunchAngelEnabled;
@property (readonly, nonatomic) BOOL featureFlagPasscodeServicesProtectionEnabled;
@property (readonly, nonatomic) BOOL featureFlagPasscodeServicesUseKeyboardGuideEnabled;
@property (readonly, nonatomic) BOOL featureFlagPasscodeServicesUseKeyboardGuidePadsEnabled;
@property (readonly, nonatomic) BOOL featureFlagPhoneIntegrationEnabled;
@property (readonly, nonatomic) BOOL featureFlagPreboardEnabled;
@property (readonly, nonatomic) BOOL featureFlagPreboardDeveloperModeEnabled;
@property (readonly, nonatomic) BOOL featureFlagPreboardProtectedVariablesEnabled;
@property (readonly, nonatomic) BOOL featureFlagPreboardUPPEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *flagDTOStrictModeEnabledKey;
@property (readonly, nonatomic) NSNumber *valueForFlagDTOStrictModeEnabled;
@property (readonly, nonatomic) NSString *flagDTOSecureRepairMockRepairTypeKey;
@property (readonly, nonatomic) NSNumber *valueForFlagDTOSecureRepairMockRepairType;
@property (readonly, nonatomic) NSString *flagDTOSecureRepairMockRepairTypeQueryLatencyKey;
@property (readonly, nonatomic) NSNumber *valueForFlagDTOSecureRepairMockRepairTypeQueryLatency;
@property (readonly, nonatomic) BOOL featureFlagDimpleKeyGracePeriodEnabled;
@property (readonly, nonatomic) BOOL featureFlagDimpleKeyGracePeriodUnlimitedEnabled;
@property (readonly, nonatomic) BOOL featureFlagDimpleKeySecureRepairEnabled;
@property (readonly, nonatomic) BOOL featureFlagDimpleKeyZeroDelayRatchetEnabled;


@end
