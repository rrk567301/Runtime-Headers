@class NSError;

@interface PKPaymentAuthorizationErrorStateParam : PKPaymentAuthorizationStateParam

@property (retain, nonatomic) NSError *error;
@property (nonatomic, getter=isClientFailure) char clientFailure;
@property (nonatomic, getter=isPaymentOffersError) char paymentOffersError;

+ (id)paramWithError:(id)a0;
+ (id)paramWithError:(id)a0 clientFailure:(char)a1;
+ (id)paramWithError:(id)a0 paymentOffersError:(char)a1;

- (id)description;
- (void).cxx_destruct;

@end
