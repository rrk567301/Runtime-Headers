@class NSString, AMSDelegatePurchaseRequest, ACAccount;

@interface CPSStorePurchaseRequest : CPSAuthenticationRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AMSDelegatePurchaseRequest *purchaseRequest;
@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSString *deviceName;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (long long)authType;
- (void).cxx_destruct;

@end
