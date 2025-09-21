@class NSArray, NSString;

@interface AMPDeviceSetupInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char showLicenseAgreement;
@property (nonatomic) char showWarrantyInfo;
@property (nonatomic) char suppressRestoreFromBackup;
@property (retain, nonatomic) NSArray *backupList;
@property (nonatomic) long long bestBackupIndex;
@property (retain, nonatomic) NSString *licenseAgreementText;
@property (retain, nonatomic) NSString *warrantyInfoText;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
