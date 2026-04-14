@class _GCDevicePhysicalInputTransaction, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface _GCDevicePhysicalInput : _GCDevicePhysicalInputBase {
    NSObject<OS_dispatch_queue> *_clientQueue;
    id /* block */ _elementValueDidChangeHandler;
    id /* block */ _inputStateAvailableHandler;
    NSMutableArray *_allTransactions;
    _GCDevicePhysicalInputTransaction *_currentTransaction;
    _GCDevicePhysicalInputTransaction *_pendingTransaction;
    NSMutableArray *_bufferedTransactions;
    unsigned long long _bufferedTransactionsQueueDepth;
}

- (void)dealloc;
- (BOOL)isSnapshot;
- (void)setDevice:(id)a0;
- (double)lastEventTimestamp;
- (id)initWithFacade:(id)a0 elements:(id)a1;
- (id)popTransaction;

@end
