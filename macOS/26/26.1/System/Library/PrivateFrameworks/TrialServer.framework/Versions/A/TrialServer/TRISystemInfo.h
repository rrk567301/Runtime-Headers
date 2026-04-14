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

+ (id)systemInfoFromFile:(id)a0;
+ (id)_sysEnabledInputModeIdentifiers;
+ (id)_aneVersion;
+ (id)_persistentSystemInfoPath;
+ (long long)_appleIntelligenceState:(id)a0;
+ (BOOL)_isSeedBuild;
+ (BOOL)_hasAne;
+ (BOOL)_isVirtualMachine;
+ (id)createSystemInfoWithFactorProvider:(id)a0;
+ (id)info;
+ (BOOL)_sysIsEnrolledInBetaProgram;
+ (id)loadSystemInfo;
+ (id)_iCloudIdentifier;
+ (BOOL)_isDiagnosticsAndUsageEnabled;
+ (id)_mapsBucketId:(id)a0;
+ (BOOL)_isAutomatedTestDevice;
+ (id)_carrierCountryIsoCode;
+ (id)_carrierBundleIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)_getSiriDeviceAggregationIdRotationDate;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)externalParamManager;
- (id)initFromSystemWithFactorProvider:(id)a0;
- (BOOL)saveToFile:(id)a0;
- (BOOL)save;

@end
