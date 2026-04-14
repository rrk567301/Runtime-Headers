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

- (void)resumeConnection;
- (void)invalidate;
- (void)resumeQueue;
- (void)invalidateConnection;
- (void)didInvalidate;
- (void)invalidSendForMessage:(id)a0;
- (id)debugDescription;
- (void)enqueueDelegateDidConnect;
- (void)delegateDidInvalidate;
- (void)suspend;
- (void)resumeQueueAndConnection;
- (id)description;
- (void)enqueueDelegateDidReceiveMessage:(id)a0;
- (void)suspendQueueAndConnection;
- (id)init;
- (void)suspendConnection;
- (void)enqueueDelegateDidInvalidateAndFinalize;
- (void)suspendQueue;
- (void)sendHelloMessageAndResumeQueue;
- (void)resume;
- (void)sendMessage:(id)a0;
- (void)enqueueDelegateDidInterruptWithError:(id)a0;
- (void).cxx_destruct;
- (id)operationToSendMessage:(id)a0;
- (void)cancelAndResumeQueuesAndEnqueueInvalidateConnection;
- (void)enqueueDelegateCouldNotConnectWithError:(id)a0;
- (void)dealloc;
- (void)enqueueSendForMessage:(id)a0;
- (void)cancelHelloMessageAndResumeQueueOperations;
- (void)didReceiveMessage:(id)a0;
- (void)delegateDidResume;
- (void)didInterruptWithError:(id)a0;

@end
