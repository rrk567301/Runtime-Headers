@interface FinanceDaemon.AccountNotificationHandler : NSObject {
    void /* unknown type, empty encoding */ makeCoreDataStore;
}

+ (id)makeHandler;

- (void).cxx_destruct;
- (id)init;
- (void)primaryAppleAccountWasAdded;
- (void)primaryAppleAccountWasDeleted;

@end
