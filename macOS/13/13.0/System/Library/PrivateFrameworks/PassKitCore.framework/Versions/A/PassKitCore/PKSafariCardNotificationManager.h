@class PKPaymentService;

@interface PKSafariCardNotificationManager : NSObject {
    PKPaymentService *_paymentService;
}

- (id)init;
- (void).cxx_destruct;
- (void)userDidPerformAction:(long long)a0 withCard:(id)a1;
- (void)_eligibleToCheckWithCompletion:(id /* block */)a0;

@end
