@class STSSession, NSObject;
@protocol OS_dispatch_queue, NFSession;

@interface PKPaymentSessionHandle : NSObject {
    NSObject<OS_dispatch_queue> *_internalSessionSerialQueue;
    id<NFSession> _NFSessionHandle;
    STSSession *_STSSession;
    BOOL _STSSessionIsFirstInQueue;
}

- (void)invalidateSession;
- (void).cxx_destruct;
- (id)init;
- (void)invalidateSessionWithCompletion:(id /* block */)a0;
- (BOOL)isFirstInQueue;

@end
