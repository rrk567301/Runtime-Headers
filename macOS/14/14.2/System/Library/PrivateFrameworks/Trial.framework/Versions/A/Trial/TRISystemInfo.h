@class NSArray, NSString;

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
@property (nonatomic) BOOL isAutomatedTestDevice;

+ (id)info;
+ (BOOL)_isDiagnosticsAndUsageEnabled;
+ (id)_aneVersion;
+ (id)_carrierBundleIdentifier;
+ (id)_carrierCountryIsoCode;
+ (BOOL)_isAutomatedTestDevice;
+ (BOOL)_hasAne;
+ (id)_sysEnabledInputModeIdentifiers;
+ (BOOL)_isSeedBuild;
+ (BOOL)_isVirtualMachine;
+ (id)_persistentSystemInfoPath;
+ (BOOL)_sysIsEnrolledInBetaProgram;
+ (id)createSystemInfoWithFactorProvider:(id)a0;
+ (id)loadSystemInfo;
+ (id)systemInfoFromFile:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)save;
- (BOOL)saveToFile:(id)a0;
- (id)initFromSystemWithFactorProvider:(id)a0;

@end
