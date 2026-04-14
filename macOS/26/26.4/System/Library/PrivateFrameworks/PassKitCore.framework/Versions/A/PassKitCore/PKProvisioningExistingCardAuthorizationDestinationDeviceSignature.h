@class NSString, NSData, PKSecureElementCertificateSet;

@interface PKProvisioningExistingCardAuthorizationDestinationDeviceSignature : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *secureElementIdentifier;
@property (copy, nonatomic) NSData *signature;
@property (retain, nonatomic) PKSecureElementCertificateSet *signatureCertificateSet;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSecureElementIdentifier:(id)a0 signature:(id)a1 signatureCertificateSet:(id)a2;

@end
