@class STSSession, NSObject;
@protocol OS_dispatch_queue, NFSession;

@interface PKPaymentSessionHandle : NSObject {
    NSObject<OS_dispatch_queue> *_internalSessionSerialQueue;
    id<NFSession> _NFSessionHandle;
    STSSession *_STSSession;
    BOOL _STSSessionIsFirstInQueue;
}

- (id)init;
- (void)invalidateSession;
- (void).cxx_destruct;
- (void)invalidateSessionWithCompletion:(id /* block */)a0;
- (BOOL)isFirstInQueue;

@end
