@class NSString, AMSPurchaseResult;

@interface AMSDelegatePurchaseRequest : AMSDelegateAuthenticateRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *deviceName;
@property (retain) AMSPurchaseResult *purchaseResult;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPurchaseResult:(id)a0 challenge:(id)a1 userAgent:(id)a2;

@end
