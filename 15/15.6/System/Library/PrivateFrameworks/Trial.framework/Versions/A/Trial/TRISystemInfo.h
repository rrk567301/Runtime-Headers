@class NSArray, NSString, NSDate;

@interface TRISystemInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char isEnrolledInBetaProgram;
@property (retain, nonatomic) NSArray *enabledInputModeIdentifiers;
@property (nonatomic) char logUserSettingsLanguageCode;
@property (nonatomic) char logUserSettingsRegionCode;
@property (nonatomic) char logUserKeyboardEnabledInputMode;
@property (retain, nonatomic) NSString *carrierBundleIdentifier;
@property (retain, nonatomic) NSString *carrierCountryIsoCode;
@property (nonatomic) char isDiagnosticsAndUsageEnabled;
@property (nonatomic) char hasAne;
@property (retain, nonatomic) NSString *aneVersion;
@property (retain, nonatomic) NSString *iCloudIdentifier;
@property (nonatomic) char isAutomatedTestDevice;
@property (retain, nonatomic) NSString *siriUserActivitySegment;
@property (retain, nonatomic) NSDate *siriDeviceAggregationIdRotationDate;
@property (nonatomic) long long appleIntelligenceState;

+ (id)info;
+ (char)_hasAne;
+ (id)_sysEnabledInputModeIdentifiers;
+ (id)_aneVersion;
+ (long long)_appleIntelligenceState;
+ (id)_carrierBundleIdentifier;
+ (id)_carrierCountryIsoCode;
+ (id)_iCloudIdentifier;
+ (char)_isAutomatedTestDevice;
+ (char)_isDiagnosticsAndUsageEnabled;
+ (char)_isSeedBuild;
+ (char)_isVirtualMachine;
+ (id)_persistentSystemInfoPath;
+ (id)_siriUserActivitySegment;
+ (char)_sysIsEnrolledInBetaProgram;
+ (id)createSystemInfoWithFactorProvider:(id)a0;
+ (id)loadSystemInfo;
+ (id)systemInfoFromFile:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)save;
- (char)saveToFile:(id)a0;
- (id)_getSiriDeviceAggregationIdRotationDate;
- (id)externalParamManager;
- (id)initFromSystemWithFactorProvider:(id)a0;

@end
