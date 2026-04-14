@class NSUUID, NSString, CATTransport, NSHashTable, NSObject, NSDictionary, NSMutableSet, CATStateMachine, NSMutableArray, NSMapTable;
@protocol CATTaskClientDelegate, OS_dispatch_group;

@interface CATTaskClient : NSObject <CATTransportDelegate> {
    CATStateMachine *mFSM;
    NSMutableSet *mActiveRemoteTaskOperations;
    NSMapTable *mRemoteTaskByUUID;
    NSMutableArray *mEnqueuedMessages;
    NSMutableArray *mEnqueuedTaskUUIDs;
    NSHashTable *mOrphanedTransports;
    CATTaskClient *mStrongSelf;
    NSObject<OS_dispatch_group> *mSessionDidInvalidateGroup;
    BOOL mIsStarting;
}

@property (retain, nonatomic) NSUUID *sessionUUID;
@property (copy, nonatomic) NSDictionary *serverUserInfo;
@property (readonly, nonatomic) CATTransport *transport;
@property (weak, nonatomic) id<CATTaskClientDelegate> delegate;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)disconnect;
- (void)delegateDidInvalidate;
- (void)sendMessageThroughTransport:(id)a0;
- (void)abandonTransport;
- (void)delegateDidInterruptWithError:(id)a0;
- (void)invalidateWithError:(id)a0;
- (void)postNotificationWithName:(id)a0 userInfo:(id)a1;
- (void)sessionResumedWithTaskUUIDs:(id)a0;
- (void)delegateWillInvalidateAndInvalidateSessionWithError:(id)a0;
- (void)trackTaskOperation:(id)a0;
- (id)prepareTaskOperationForRequest:(id)a0;
- (void)sendMessage:(id)a0;
- (void)transport:(id)a0 didInterruptWithError:(id)a1;
- (void)abandonTransportClearQueuedMessagesAndCancelAllOperationsWithError:(id)a0;
- (void)transport:(id)a0 didReceiveMessage:(id)a1;
- (void)activeOperationDidFinish:(id)a0;
- (void)resumeCapturedTransportFromTaskClient:(id)a0;
- (void)delegateDidDisconnect;
- (void)resumeSession;
- (void)connectWithTransport:(id)a0;
- (void)resumeTransport:(id)a0;
- (void)delegateDidInvalidateAndFinalize;
- (void)clearQueuedMessagesAndCancelAllOperationsWithError:(id)a0;
- (void)transportDidResume:(id)a0;
- (void)taskOperationDidFailWithInvalidTaskClient:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)delegateDidConnect;
- (void)transport:(id)a0 didSendMessage:(id)a1;
- (void)transportDidInvalidate:(id)a0;
- (void)enqueueTaskOperation:(id)a0;
- (void)processTaskMessage:(id)a0;
- (id)init;
- (void)transport:(id)a0 didFailToSendMessage:(id)a1 error:(id)a2;
- (void)didPrepareTaskOperation:(id)a0;
- (void)delegatedidReceiveNotificationWithName:(id)a0 userInfo:(id)a1;
- (void)processSessionMessage:(id)a0;
- (void)resumeWithTaskUUIDs:(id)a0;
- (void)enqueueMessage:(id)a0;
- (void)connectWithTransportFromTaskClient:(id)a0;
- (void)sessionDidInvalidate;
- (void)dealloc;
- (void)remoteTaskOperation:(id)a0 preparedMessage:(id)a1;
- (id)captureTransport;
- (void)processNotificationMessage:(id)a0;
- (void)delegateWillInvalidate;

@end
