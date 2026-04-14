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

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (id)init;
- (void)resume;
- (void)invalidate;
- (void).cxx_destruct;
- (void)suspend;
- (void)sendMessage:(id)a0;
- (void)didInvalidate;
- (void)suspendConnection;
- (void)resumeConnection;
- (void)invalidateConnection;
- (void)resumeQueue;
- (void)didReceiveMessage:(id)a0;
- (id)operationToSendMessage:(id)a0;
- (void)delegateDidInvalidate;
- (void)enqueueDelegateDidInterruptWithError:(id)a0;
- (void)sendHelloMessageAndResumeQueue;
- (void)enqueueSendForMessage:(id)a0;
- (void)resumeQueueAndConnection;
- (void)cancelHelloMessageAndResumeQueueOperations;
- (void)suspendQueueAndConnection;
- (void)enqueueDelegateDidConnect;
- (void)enqueueDelegateCouldNotConnectWithError:(id)a0;
- (void)enqueueDelegateDidReceiveMessage:(id)a0;
- (void)cancelAndResumeQueuesAndEnqueueInvalidateConnection;
- (void)invalidSendForMessage:(id)a0;
- (void)enqueueDelegateDidInvalidateAndFinalize;
- (void)didInterruptWithError:(id)a0;
- (void)suspendQueue;
- (void)delegateDidResume;

@end
