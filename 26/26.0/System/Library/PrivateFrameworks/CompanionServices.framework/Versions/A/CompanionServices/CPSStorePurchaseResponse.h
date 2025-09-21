@class AMSDelegatePurchaseResult;

@interface CPSStorePurchaseResponse : CPSAuthenticationResponse <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) AMSDelegatePurchaseResult *purchaseResult;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPurchaseResult:(id)a0;

@end
