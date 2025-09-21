@class PKAppletSubcredential, NSString, NSURL, PKSecureElementPass;

@interface PKPaymentProvisioningPassData : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSURL *passURL;
@property (retain, nonatomic) PKSecureElementPass *secureElementPass;
@property (retain, nonatomic) PKAppletSubcredential *deviceCredential;
@property (nonatomic) char willProvisionWithAuthenticationDisabled;
@property (readonly, nonatomic) char suppressMakeDefaultPaymentPassOffer;
@property (readonly, copy, nonatomic) NSString *ownershipToken;
@property (readonly, copy, nonatomic) NSString *ownershipTokenIdentifier;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithPassURL:(id)a0;
- (id)initWithSecureElementPass:(id)a0;

@end
