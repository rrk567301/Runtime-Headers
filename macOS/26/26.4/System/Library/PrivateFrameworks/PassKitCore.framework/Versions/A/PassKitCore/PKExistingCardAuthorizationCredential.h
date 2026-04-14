@class NSString, PKPaymentRemoteCredential;

@interface PKExistingCardAuthorizationCredential : PKPaymentRemoteCredential

@property (readonly, nonatomic) PKPaymentRemoteCredential *remoteCredential;
@property (readonly, copy, nonatomic) NSString *redemptionToken;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithRemoteCredential:(id)a0 redemptionToken:(id)a1;
- (id)paymentPass;

@end
