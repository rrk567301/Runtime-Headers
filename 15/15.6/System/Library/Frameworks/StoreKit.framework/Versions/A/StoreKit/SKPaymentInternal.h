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
    char _simulatesAskToBuyInSandbox;
    SKProductSubscriptionPeriod *_subscriptionPeriod;
    char _isStoreOriginated;
    SKPaymentDiscount *_paymentDiscount;
    SKPaymentAppleIDAuthorizationRequest *_appleIDAuthorizationClientInfo;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end
