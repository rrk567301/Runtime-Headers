@class AMSDelegatePurchaseResult;

@interface CPSStorePurchaseResponse : CPSAuthenticationResponse <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) AMSDelegatePurchaseResult *purchaseResult;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPurchaseResult:(id)a0;

@end
