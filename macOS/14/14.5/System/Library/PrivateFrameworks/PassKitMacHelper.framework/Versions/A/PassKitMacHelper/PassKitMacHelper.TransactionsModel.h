@interface PassKitMacHelper.TransactionsModel : NSObject <PKDashboardTransactionFetcherDelegate> {
    void /* unknown type, empty encoding */ pass;
    void /* unknown type, empty encoding */ settingsModel;
    void /* unknown type, empty encoding */ _transactions;
    void /* unknown type, empty encoding */ _yearlyGroups;
    void /* unknown type, empty encoding */ _monthlyGroups;
    void /* unknown type, empty encoding */ transactionFetcher;
    void /* unknown type, empty encoding */ _notificationServiceUpdatesEnabled;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)transactionsChanged:(id)a0;
- (void)passSettingsDidChangeWithNotification:(id)a0;

@end
