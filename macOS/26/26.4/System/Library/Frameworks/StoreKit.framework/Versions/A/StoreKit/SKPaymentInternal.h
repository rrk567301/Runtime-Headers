@class NSString, NSDictionary, NSData, SKProductSubscriptionPeriod, SKPaymentDiscount, SKPaymentAppleIDAuthorizationRequest;

@interface SKPaymentInternal : NSObject <NSCopying> {
    NSString *_applicationUsername;
    NSString *_partnerIdentifier;
    NSString *_partnerTransactionIdentifier;
    NSString *_productIdentifier;
    NSString *_productKind;
    long long _quantity;
    NSData *_requestData;
    NSDictionary *_requestParameters;
    BOOL _simulatesAskToBuyInSandbox;
    SKProductSubscriptionPeriod *_subscriptionPeriod;
    BOOL _isStoreOriginated;
    SKPaymentDiscount *_paymentDiscount;
    SKPaymentAppleIDAuthorizationRequest *_appleIDAuthorizationClientInfo;
    NSDictionary *_metricsOverlay;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;

@end
