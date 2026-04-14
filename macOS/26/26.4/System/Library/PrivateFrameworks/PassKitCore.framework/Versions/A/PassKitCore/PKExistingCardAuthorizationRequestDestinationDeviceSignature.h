@class NSString, PKSecureElementCertificateSet, NSData;

@interface PKExistingCardAuthorizationRequestDestinationDeviceSignature : NSObject

@property (readonly, nonatomic) NSString *migrationToken;
@property (readonly, nonatomic) NSString *secureElementIdentifier;
@property (readonly, nonatomic) PKSecureElementCertificateSet *signatureCertificateSet;
@property (readonly, nonatomic) NSData *signature;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithMigrationToken:(id)a0 secureElementIdentifier:(id)a1 signatureCertificateSet:(id)a2 signature:(id)a3;

@end
