@class NSString;

@interface PKAddCarKeyPassConfiguration : PKAddSecureElementPassConfiguration <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long referralSource;
@property (copy, nonatomic) NSString *pairedReaderIdentifier;
@property (copy, nonatomic) NSString *vehicleName;
@property (nonatomic) BOOL ownerKeyPairingAvailable;
@property (nonatomic) BOOL proofOfOwnershipPresent;
@property (nonatomic) BOOL onlineServicesActivated;
@property (nonatomic) BOOL passwordEnteredManually;
@property (copy, nonatomic) NSString *bluetoothAddress;
@property (copy, nonatomic) NSString *bluetoothIdentityResolvingKey;
@property (copy, nonatomic) NSString *password;
@property (nonatomic) unsigned long long supportedRadioTechnologies;
@property (copy, nonatomic) NSString *manufacturerIdentifier;
@property (retain, nonatomic) NSString *provisioningTemplateIdentifier;
@property (copy, nonatomic) NSString *productPlanIdentifier;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)manufacturerOrIssuerIdentifier;
- (id)vehicleInitiatedPairingLaunchURL;

@end
