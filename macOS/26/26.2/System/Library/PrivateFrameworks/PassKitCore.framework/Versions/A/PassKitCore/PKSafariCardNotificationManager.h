@class PKPaymentService;

@interface PKSafariCardNotificationManager : NSObject {
    PKPaymentService *_paymentService;
}

- (void).cxx_destruct;
- (id)init;
- (void)_eligibleToCheckWithCompletion:(id /* block */)a0;
- (void)userDidPerformAction:(long long)a0 withCard:(id)a1;

@end
