@class NSString, AMSPurchaseResult, AMSCarrierLinkResult, NSDictionary;

@interface AMSEngagementResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *ams_buyParams;
@property (retain) AMSCarrierLinkResult *carrierLinkResult;
@property (retain) AMSPurchaseResult *purchaseResult;
@property (retain) NSDictionary *userInfo;

+ (id)_updatedBodyFromValue:(id)a0 request:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)ams_requestActionFromRequest:(id)a0;

@end
