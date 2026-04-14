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
- (void)suspendQueue;
- (void)delegateDidInvalidate;
- (void)resumeQueue;
- (void)didInterruptWithError:(id)a0;
- (void)invalidateConnection;
- (void)resume;
- (void)enqueueDelegateDidInterruptWithError:(id)a0;
- (id)debugDescription;
- (void)invalidSendForMessage:(id)a0;
- (void)sendMessage:(id)a0;
- (void)sendHelloMessageAndResumeQueue;
- (void)enqueueSendForMessage:(id)a0;
- (void)suspend;
- (void)suspendConnection;
- (void)didInvalidate;
- (void)cancelHelloMessageAndResumeQueueOperations;
- (id)operationToSendMessage:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)cancelAndResumeQueuesAndEnqueueInvalidateConnection;
- (void)enqueueDelegateDidInvalidateAndFinalize;
- (void)enqueueDelegateDidReceiveMessage:(id)a0;
- (id)init;
- (void)enqueueDelegateDidConnect;
- (void)resumeQueueAndConnection;
- (id)description;
- (void)enqueueDelegateCouldNotConnectWithError:(id)a0;
- (void)didReceiveMessage:(id)a0;
- (void)dealloc;
- (void)suspendQueueAndConnection;
- (void)delegateDidResume;

@end
