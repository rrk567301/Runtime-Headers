@class AMSBuyParams, AMSPurchaseResult, NSURL, NSError, ACAccount;
@protocol AMSBagProtocol;

@interface AMSPurchaseConfiguration : NSObject {
    void /* unknown type, empty encoding */ kAutoEnrollRetryKey;
    void /* unknown type, empty encoding */ kDPANEmptyIdentifier;
    void /* unknown type, empty encoding */ applePayBagModel;
    void /* unknown type, empty encoding */ expressCheckoutBagModel;
    void /* unknown type, empty encoding */ biometricsProvider;
    void /* unknown type, empty encoding */ systemProvider;
}

@property (nonatomic, readonly) BOOL isExpressCheckoutEligible;
@property (nonatomic, readonly) BOOL isExpressCheckoutShouldCheckForWalletBiometrics;

+ (void)makeConfigurationWithBag:(id<AMSBagProtocol>)a0 completionHandler:(void (^)(AMSPurchaseConfiguration *, NSError *))a1;

- (id)init;
- (void).cxx_destruct;
- (void)beginCardEnrollmentAttemptWithAccount:(ACAccount *)a0 completionHandler:(void (^)(NSURL *))a1;
- (void)finishCardEnrollmentAttemptWithBuyParams:(AMSBuyParams *)a0 purchaseResult:(AMSPurchaseResult *)a1 completionHandler:(void (^)(NSError *))a2;

@end
