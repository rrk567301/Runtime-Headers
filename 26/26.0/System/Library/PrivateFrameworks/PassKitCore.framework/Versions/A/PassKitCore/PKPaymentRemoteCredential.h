@class PKPaymentPass, NSString, NSArray, NSURL, PKPaymentRemoteCredentialFIDOProfile, NSDate;

@interface PKPaymentRemoteCredential : PKPaymentCredential {
    NSArray *_activationMethods;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *passTypeIdentifier;
@property (copy, nonatomic) NSString *serialNumber;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSURL *passURL;
@property (copy, nonatomic) NSArray *summaryMetadata;
@property (copy, nonatomic) NSString *summaryMetadataDescription;
@property (copy, nonatomic) NSString *statusDescription;
@property (copy, nonatomic) NSString *ownershipTokenIdentifier;
@property (copy, nonatomic) NSString *productIdentifier;
@property (copy, nonatomic) NSString *transferableFromDeviceIdentifier;
@property (retain, nonatomic) PKPaymentPass *paymentPass;
@property (nonatomic) unsigned long long rank;
@property (nonatomic) BOOL requiresMetadata;
@property (retain, nonatomic) PKPaymentRemoteCredentialFIDOProfile *fidoProfile;
@property (retain, nonatomic) NSDate *originalProvisioningDate;
@property (retain, nonatomic) NSString *identityAccountKeyIdentifier;
@property (retain, nonatomic) NSString *primaryAccountIdentifier;
@property (retain, nonatomic) NSString *personalizedVehicleIdentifier;
@property (retain, nonatomic) NSArray *transferableFromDevices;
@property (nonatomic) long long transferType;

- (void)updateWithDictionary:(id)a0;
- (id)initWithDictionary:(id)a0;
- (long long)compare:(id)a0;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)activationMethods;
- (id)detailDescriptionWithEnvironment:(unsigned long long)a0;
- (id)initWithIdentifier:(id)a0 status:(long long)a1 credentialType:(long long)a2 passURL:(id)a3;
- (void)setActivationMethods:(id)a0;
- (id)setupProductIdentifier;

@end
