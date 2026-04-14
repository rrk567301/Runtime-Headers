@class NSString, AMSDelegatePurchaseRequest, ACAccount;

@interface CPSStorePurchaseRequest : CPSAuthenticationRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AMSDelegatePurchaseRequest *purchaseRequest;
@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSString *deviceName;
@property (retain, nonatomic) NSString *profileName;

- (id)initWithCoder:(id)a0;
- (long long)authType;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
