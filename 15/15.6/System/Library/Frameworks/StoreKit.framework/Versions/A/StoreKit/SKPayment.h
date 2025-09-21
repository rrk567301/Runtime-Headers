@class NSString, NSDictionary, SKProductSubscriptionPeriod, NSData, SKPaymentDiscount, SKPaymentAppleIDAuthorizationRequest;

@interface SKPayment : NSObject <NSCopying, NSMutableCopying> {
    id _internal;
}

@property (readonly, copy, nonatomic) NSString *partnerIdentifier;
@property (readonly, copy, nonatomic) NSString *partnerTransactionIdentifier;
@property (readonly, copy, nonatomic) NSString *productKind;
@property (readonly, nonatomic) SKProductSubscriptionPeriod *subscriptionPeriod;
@property (readonly, copy, nonatomic) NSDictionary *requestParameters;
@property (readonly, nonatomic) char isStoreOriginated;
@property (readonly, copy, nonatomic) SKPaymentAppleIDAuthorizationRequest *appleIDAuthorizationClientInfo;
@property (readonly, copy, nonatomic) NSString *productIdentifier;
@property (readonly, copy, nonatomic) NSData *requestData;
@property (readonly, nonatomic) long long quantity;
@property (readonly, copy, nonatomic) NSString *applicationUsername;
@property (readonly, nonatomic) char simulatesAskToBuyInSandbox;
@property (readonly, copy, nonatomic) SKPaymentDiscount *paymentDiscount;

+ (id)paymentFromPurchaseIntentWithProduct:(id)a0;
+ (id)paymentWithProduct:(id)a0;
+ (id)paymentWithProductIdentifier:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
