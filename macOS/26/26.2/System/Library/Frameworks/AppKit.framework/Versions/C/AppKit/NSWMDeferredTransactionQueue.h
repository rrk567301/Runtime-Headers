@interface NSWMDeferredTransactionQueue : NSObject {
    void /* unknown type, empty encoding */ _lock;
}

- (void).cxx_destruct;
- (void)waitUntilEmpty;
- (id)init;
- (id)popCompletedTransactions;
- (void)queueTransaction:(id)a0;

@end
