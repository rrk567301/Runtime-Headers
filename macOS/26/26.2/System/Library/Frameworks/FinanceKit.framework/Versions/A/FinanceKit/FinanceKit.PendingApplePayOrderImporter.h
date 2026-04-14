@interface FinanceKit.PendingApplePayOrderImporter : NSObject {
    void /* unknown type, empty encoding */ store;
}

+ (id)makeImporterAndReturnError:(id *)a0;

- (void).cxx_destruct;
- (id)init;
- (void)insertOrUpdatePendingApplePayOrderWithOrderDetails:(id)a0;

@end
