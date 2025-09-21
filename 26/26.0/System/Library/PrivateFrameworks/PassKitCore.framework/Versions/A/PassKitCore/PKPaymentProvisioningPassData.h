@class PKAppletSubcredential, NSString, NSURL, PKSecureElementPass;

@interface PKPaymentProvisioningPassData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSURL *passURL;
@property (retain, nonatomic) PKSecureElementPass *secureElementPass;
@property (retain, nonatomic) PKAppletSubcredential *deviceCredential;
@property (nonatomic) BOOL willProvisionWithAuthenticationDisabled;
@property (readonly, nonatomic) BOOL suppressMakeDefaultPaymentPassOffer;
@property (readonly, copy, nonatomic) NSString *ownershipToken;
@property (readonly, copy, nonatomic) NSString *ownershipTokenIdentifier;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPassURL:(id)a0;
- (id)initWithSecureElementPass:(id)a0;

@end
