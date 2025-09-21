@class NSArray, NSString, NSDate, NSNumber;

@interface TRISystemInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isEnrolledInBetaProgram;
@property (retain, nonatomic) NSArray *enabledInputModeIdentifiers;
@property (nonatomic) BOOL logUserSettingsLanguageCode;
@property (nonatomic) BOOL logUserSettingsRegionCode;
@property (nonatomic) BOOL logUserKeyboardEnabledInputMode;
@property (retain, nonatomic) NSString *carrierBundleIdentifier;
@property (retain, nonatomic) NSString *carrierCountryIsoCode;
@property (nonatomic) BOOL isDiagnosticsAndUsageEnabled;
@property (nonatomic) BOOL hasAne;
@property (retain, nonatomic) NSString *aneVersion;
@property (retain, nonatomic) NSString *iCloudIdentifier;
@property (nonatomic) BOOL isAutomatedTestDevice;
@property (retain, nonatomic) NSDate *siriDeviceAggregationIdRotationDate;
@property (nonatomic) long long appleIntelligenceState;
@property (retain, nonatomic) NSNumber *mapsBucketId;

+ (BOOL)_isAutomatedTestDevice;
+ (id)_iCloudIdentifier;
+ (id)loadSystemInfo;
+ (id)_sysEnabledInputModeIdentifiers;
+ (id)systemInfoFromFile:(id)a0;
+ (BOOL)_sysIsEnrolledInBetaProgram;
+ (long long)_appleIntelligenceState:(id)a0;
+ (id)_aneVersion;
+ (id)_carrierBundleIdentifier;
+ (id)_persistentSystemInfoPath;
+ (BOOL)_isDiagnosticsAndUsageEnabled;
+ (id)info;
+ (id)_mapsBucketId:(id)a0;
+ (id)_carrierCountryIsoCode;
+ (BOOL)_isSeedBuild;
+ (BOOL)_isVirtualMachine;
+ (BOOL)_hasAne;
+ (id)createSystemInfoWithFactorProvider:(id)a0;

- (BOOL)save;
- (void)encodeWithCoder:(id)a0;
- (id)_getSiriDeviceAggregationIdRotationDate;
- (id)initWithCoder:(id)a0;
- (id)externalParamManager;
- (id)initFromSystemWithFactorProvider:(id)a0;
- (BOOL)saveToFile:(id)a0;
- (void).cxx_destruct;

@end
