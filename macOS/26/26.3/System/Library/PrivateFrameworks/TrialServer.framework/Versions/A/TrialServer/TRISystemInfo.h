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

+ (BOOL)_isSeedBuild;
+ (id)_storefront:(id)a0;
+ (id)systemInfoFromFile:(id)a0;
+ (id)info;
+ (id)loadSystemInfo;
+ (BOOL)_isAutomatedTestDevice;
+ (id)_iCloudIdentifier;
+ (id)_carrierBundleIdentifier;
+ (BOOL)_isVirtualMachine;
+ (BOOL)_sysIsEnrolledInBetaProgram;
+ (id)_sysEnabledInputModeIdentifiers;
+ (BOOL)_isDiagnosticsAndUsageEnabled;
+ (long long)_appleIntelligenceState:(id)a0;
+ (id)_mapsBucketId:(id)a0;
+ (BOOL)_hasAne;
+ (id)_carrierCountryIsoCode;
+ (id)_aneVersion;
+ (id)_adsBucketId:(id)a0;
+ (id)createSystemInfoWithFactorProvider:(id)a0;
+ (id)_persistentSystemInfoPath;

- (BOOL)save;
- (id)initFromSystemWithFactorProvider:(id)a0;
- (id)_getSiriDeviceAggregationIdRotationDate;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)externalParamManager;
- (BOOL)saveToFile:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
