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

- (void)suspendQueueAndConnection;
- (void)invalidateConnection;
- (id)operationToSendMessage:(id)a0;
- (void)resumeQueueAndConnection;
- (void)didReceiveMessage:(id)a0;
- (void)enqueueDelegateDidConnect;
- (void)cancelHelloMessageAndResumeQueueOperations;
- (void)enqueueDelegateDidInvalidateAndFinalize;
- (void)enqueueDelegateDidInterruptWithError:(id)a0;
- (void)delegateDidInvalidate;
- (id)debugDescription;
- (void)invalidSendForMessage:(id)a0;
- (void)delegateDidResume;
- (void)dealloc;
- (void)suspendQueue;
- (void)resumeConnection;
- (void)didInvalidate;
- (void)suspendConnection;
- (void)enqueueDelegateCouldNotConnectWithError:(id)a0;
- (void)sendMessage:(id)a0;
- (void)enqueueDelegateDidReceiveMessage:(id)a0;
- (void)invalidate;
- (void)didInterruptWithError:(id)a0;
- (void)enqueueSendForMessage:(id)a0;
- (void)resumeQueue;
- (void)cancelAndResumeQueuesAndEnqueueInvalidateConnection;
- (void)sendHelloMessageAndResumeQueue;
- (void)suspend;
- (void)resume;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
