@class PKTransactionSessionWrapper, NSObject;
@protocol OS_dispatch_queue;

@interface PKPaymentSessionHandle : NSObject {
    NSObject<OS_dispatch_queue> *_internalSessionSerialQueue;
    PKTransactionSessionWrapper *_sessionHandle;
}

- (void).cxx_destruct;
- (void)invalidateSession;
- (void)invalidateSessionWithCompletion:(id /* block */)a0;
- (BOOL)isFirstInQueue;
- (id)initWithInternalSessionHandle:(id)a0 targetQueue:(id)a1;

@end
