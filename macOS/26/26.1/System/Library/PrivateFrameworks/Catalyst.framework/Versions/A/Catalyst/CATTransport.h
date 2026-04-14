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
- (void)enqueueDelegateDidInterruptWithError:(id)a0;
- (void)resumeConnection;
- (void)enqueueDelegateDidInvalidateAndFinalize;
- (void)invalidSendForMessage:(id)a0;
- (void)didInvalidate;
- (void)sendMessage:(id)a0;
- (void)delegateDidResume;
- (void)didReceiveMessage:(id)a0;
- (void)enqueueDelegateCouldNotConnectWithError:(id)a0;
- (void)sendHelloMessageAndResumeQueue;
- (void)resume;
- (void)suspend;
- (void)invalidate;
- (void)resumeQueueAndConnection;
- (id)description;
- (void)suspendQueue;
- (void)dealloc;
- (void)suspendQueueAndConnection;
- (void).cxx_destruct;
- (void)didInterruptWithError:(id)a0;
- (id)debugDescription;
- (void)cancelAndResumeQueuesAndEnqueueInvalidateConnection;
- (void)enqueueSendForMessage:(id)a0;
- (id)operationToSendMessage:(id)a0;
- (void)enqueueDelegateDidConnect;
- (void)enqueueDelegateDidReceiveMessage:(id)a0;
- (void)cancelHelloMessageAndResumeQueueOperations;
- (id)init;
- (void)suspendConnection;

@end
