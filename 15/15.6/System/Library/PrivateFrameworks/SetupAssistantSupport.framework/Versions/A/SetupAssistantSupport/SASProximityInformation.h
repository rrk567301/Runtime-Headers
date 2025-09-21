@class NSDate, NSString, NSArray, NSData, _NSAttributedStringGrammarInflection, NSDictionary, SASExpressSettings, NSNumber;

@interface SASProximityInformation : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy) NSArray *keyboards;
@property (copy) NSString *appleID;
@property char usesSameAccountForiTunes;
@property (copy) NSArray *networks;
@property (copy) NSArray *networkPasswords;
@property (retain) NSNumber *connectedToWiFi;
@property (copy) NSDictionary *localePreferences;
@property char automaticTimeZoneEnabled;
@property (copy) NSString *timeZone;
@property (retain) NSData *accessibilitySettings;
@property (retain) _NSAttributedStringGrammarInflection *grammarInflection;
@property (copy) NSString *firstName;
@property (copy) NSString *fullName;
@property (copy) NSString *deviceModel;
@property (copy) NSString *deviceClass;
@property char hasHomeButton;
@property (getter=isRestoring) char restoring;
@property (copy) NSString *deviceName;
@property (copy) NSString *backupUUID;
@property (nonatomic, getter=isBackupEnabled) char backupEnabled;
@property (copy) NSDate *dateOfLastBackup;
@property (retain, nonatomic) NSNumber *supportsCellularBackup;
@property (retain, nonatomic) NSNumber *hasMegaBackup;
@property (retain) SASExpressSettings *expressSettings;
@property (retain) NSData *backupMetadata;
@property char locationServicesOptIn;
@property (retain) NSData *locationServicesData;
@property (retain) NSNumber *findMyDeviceOptIn;
@property (retain) NSNumber *deviceAnalyticsOptIn;
@property (retain) NSNumber *appAnalyticsOptIn;
@property (retain) NSNumber *siriOptIn;
@property (retain) NSData *siriVoiceProfileAvailabilityMetadata;
@property (retain) NSNumber *deviceTermsIdentifier;
@property (retain) NSString *productVersion;
@property (retain) NSNumber *supportsDeviceToDeviceMigration;
@property (retain) NSNumber *deviceToDeviceMigrationVersion;
@property (retain) NSNumber *storageAvailable;
@property (retain) NSNumber *storageCapacity;
@property (retain) NSNumber *preventSoftwareUpdateDeviceMigration;
@property NSNumber *hasTransferrableTelephonyPlan;
@property (retain) NSNumber *hasInexpensiveCellularNetwork;
@property (retain, nonatomic) NSNumber *allowMoreOn5G;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
