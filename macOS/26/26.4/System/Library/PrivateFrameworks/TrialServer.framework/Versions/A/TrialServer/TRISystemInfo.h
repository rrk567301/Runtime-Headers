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

+ (BOOL)_sysIsEnrolledInBetaProgram;
+ (BOOL)_isDiagnosticsAndUsageEnabled;
+ (id)_persistentSystemInfoPath;
+ (id)_iCloudIdentifier;
+ (id)_sysEnabledInputModeIdentifiers;
+ (id)createSystemInfoWithFactorProvider:(id)a0;
+ (id)_adsBucketId:(id)a0;
+ (BOOL)_isAutomatedTestDevice;
+ (BOOL)_isSeedBuild;
+ (BOOL)_hasAne;
+ (id)_storefront:(id)a0;
+ (id)_aneVersion;
+ (BOOL)isVirtualMachine;
+ (id)_carrierCountryIsoCode;
+ (id)loadSystemInfo;
+ (id)systemInfoFromFile:(id)a0;
+ (id)info;
+ (long long)_appleIntelligenceState:(id)a0;
+ (id)_mapsBucketId:(id)a0;
+ (id)_carrierBundleIdentifier;

- (BOOL)save;
- (id)initFromSystemWithFactorProvider:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)externalParamManager;
- (void).cxx_destruct;
- (id)_getSiriDeviceAggregationIdRotationDate;
- (id)initWithCoder:(id)a0;
- (BOOL)saveToFile:(id)a0;

@end
