@class NSURL, PKSecureElementPass, NSString;

@interface PKPaymentProvisioningPassData : NSObject

@property (readonly, copy, nonatomic) NSURL *passURL;
@property (retain, nonatomic) PKSecureElementPass *secureElementPass;
@property (readonly, nonatomic) BOOL willProvisionWithAuthenticationDisabled;
@property (readonly, nonatomic) BOOL suppressMakeDefaultPaymentPassOffer;
@property (readonly, copy, nonatomic) NSString *ownershipToken;
@property (readonly, copy, nonatomic) NSString *ownershipTokenIdentifier;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithSecureElementPass:(id)a0;

@end
