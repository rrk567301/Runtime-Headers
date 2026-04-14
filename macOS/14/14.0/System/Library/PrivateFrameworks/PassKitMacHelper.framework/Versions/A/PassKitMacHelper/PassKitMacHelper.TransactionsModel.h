@interface PassKitMacHelper.TransactionsModel : NSObject <PKPaymentServiceDelegate> {
    void /* unknown type, empty encoding */ pass;
    void /* unknown type, empty encoding */ settingsModel;
    void /* unknown type, empty encoding */ _transactions;
    void /* unknown type, empty encoding */ _notificationServiceUpdatesEnabled;
    void /* unknown type, empty encoding */ paymentService;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)passSettingsDidChangeWithNotification:(id)a0;

@end
