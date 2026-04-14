@class AMSPurchaseSIWAAuthorizationResult, AMSPurchaseResult;

@interface AMSPurchaseSIWAResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) AMSPurchaseResult *purchaseResult;
@property (readonly) AMSPurchaseSIWAAuthorizationResult *authorizationResult;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithPurchaseResult:(id)a0 authorizationResult:(id)a1;
- (BOOL)isEqualToPurchaseSIWAResult:(id)a0;

@end
