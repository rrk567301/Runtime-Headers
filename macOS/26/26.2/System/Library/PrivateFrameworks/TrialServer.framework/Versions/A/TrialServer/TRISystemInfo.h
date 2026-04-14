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
@property (retain, nonatomic) NSNumber *adsBucketId;
@property (retain, nonatomic) NSString *storefront;

+ (id)_persistentSystemInfoPath;
+ (id)systemInfoFromFile:(id)a0;
+ (id)createSystemInfoWithFactorProvider:(id)a0;
+ (id)_carrierCountryIsoCode;
+ (BOOL)_isSeedBuild;
+ (id)_iCloudIdentifier;
+ (id)_carrierBundleIdentifier;
+ (id)_storefront:(id)a0;
+ (BOOL)_sysIsEnrolledInBetaProgram;
+ (id)_adsBucketId:(id)a0;
+ (id)_mapsBucketId:(id)a0;
+ (id)loadSystemInfo;
+ (id)_sysEnabledInputModeIdentifiers;
+ (id)info;
+ (BOOL)_isAutomatedTestDevice;
+ (BOOL)_isVirtualMachine;
+ (BOOL)_isDiagnosticsAndUsageEnabled;
+ (id)_aneVersion;
+ (long long)_appleIntelligenceState:(id)a0;
+ (BOOL)_hasAne;

- (BOOL)save;
- (id)_getSiriDeviceAggregationIdRotationDate;
- (id)externalParamManager;
- (id)initWithCoder:(id)a0;
- (id)initFromSystemWithFactorProvider:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)saveToFile:(id)a0;

@end
