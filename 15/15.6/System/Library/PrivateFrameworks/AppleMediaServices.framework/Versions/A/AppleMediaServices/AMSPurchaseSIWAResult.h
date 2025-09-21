@class AMSPurchaseSIWAAuthorizationResult, AMSPurchaseResult;

@interface AMSPurchaseSIWAResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) AMSPurchaseResult *purchaseResult;
@property (readonly) AMSPurchaseSIWAAuthorizationResult *authorizationResult;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPurchaseResult:(id)a0 authorizationResult:(id)a1;
- (char)isEqualToPurchaseSIWAResult:(id)a0;

@end
