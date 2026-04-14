@class CATOperationQueue, NSString, CATStateMachine;
@protocol CATTransportDelegate;

@interface CATTransport : NSObject {
    CATStateMachine *mFSM;
    CATOperationQueue *mControlQueue;
    CATOperationQueue *mMessageQueue;
    CATTransport *mStrongSelf;
}

@property (copy, nonatomic) NSString *name;
@property (weak, nonatomic) id<CATTransportDelegate> delegate;

- (void)invalidateConnection;
- (void)delegateDidInvalidate;
- (void)resumeQueue;
- (void)sendMessage:(id)a0;
- (void)invalidate;
- (void)enqueueDelegateDidInvalidateAndFinalize;
- (void)enqueueDelegateDidReceiveMessage:(id)a0;
- (void)cancelAndResumeQueuesAndEnqueueInvalidateConnection;
- (void)invalidSendForMessage:(id)a0;
- (void)enqueueDelegateDidInterruptWithError:(id)a0;
- (id)operationToSendMessage:(id)a0;
- (void)delegateDidResume;
- (void)didInvalidate;
- (void)suspend;
- (void)enqueueDelegateDidConnect;
- (id)debugDescription;
- (void)resume;
- (void).cxx_destruct;
- (id)description;
- (void)suspendConnection;
- (void)didReceiveMessage:(id)a0;
- (void)resumeQueueAndConnection;
- (void)sendHelloMessageAndResumeQueue;
- (id)init;
- (void)enqueueSendForMessage:(id)a0;
- (void)resumeConnection;
- (void)suspendQueue;
- (void)enqueueDelegateCouldNotConnectWithError:(id)a0;
- (void)suspendQueueAndConnection;
- (void)cancelHelloMessageAndResumeQueueOperations;
- (void)didInterruptWithError:(id)a0;
- (void)dealloc;

@end
