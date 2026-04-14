@class AMSDelegatePurchaseRequest;

@interface AMSDelegatePurchaseResult : AMSDelegateAuthenticateResult <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) AMSDelegatePurchaseRequest *request;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
