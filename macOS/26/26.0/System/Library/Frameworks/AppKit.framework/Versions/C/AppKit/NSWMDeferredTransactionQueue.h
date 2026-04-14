@interface NSWMDeferredTransactionQueue : NSObject {
    void /* unknown type, empty encoding */ _lock;
}

- (void)waitUntilEmpty;
- (id)init;
- (void).cxx_destruct;
- (id)popCompletedTransactions;
- (void)queueTransaction:(id)a0;

@end
