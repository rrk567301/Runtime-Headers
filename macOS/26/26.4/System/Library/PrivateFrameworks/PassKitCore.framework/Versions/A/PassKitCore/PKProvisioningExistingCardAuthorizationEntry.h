@class NSString, NSData, PKSecureElementCertificateSet;

@interface PKProvisioningExistingCardAuthorizationEntry : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *dpanIdentifier;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSData *authorizationData;
@property (retain, nonatomic) PKSecureElementCertificateSet *signatureCertificateSet;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDPANIdentifier:(id)a0 type:(id)a1 authorizationData:(id)a2 signatureCertificateSet:(id)a3;

@end
