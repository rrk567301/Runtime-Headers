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

+ (id)info;
+ (id)_carrierBundleIdentifier;
+ (id)_carrierCountryIsoCode;
+ (id)_persistentSystemInfoPath;
+ (id)loadSystemInfo;
+ (id)systemInfoFromFile:(id)a0;
+ (id)createSystemInfoWithFactorProvider:(id)a0;
+ (BOOL)_sysIsEnrolledInBetaProgram;
+ (id)_sysEnabledInputModeIdentifiers;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)save;
- (BOOL)saveToFile:(id)a0;
- (id)initFromSystemWithFactorProvider:(id)a0;

@end
