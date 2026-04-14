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
- (void)resumeSession;
- (void)sendMessageThroughTransport:(id)a0;
- (void)transportDidInvalidate:(id)a0;
- (void)delegateWillInvalidateAndInvalidateSessionWithError:(id)a0;
- (void)enqueueMessage:(id)a0;
- (void)sendMessage:(id)a0;
- (id)prepareTaskOperationForRequest:(id)a0;
- (void)connectWithTransportFromTaskClient:(id)a0;
- (void)processSessionMessage:(id)a0;
- (void)delegateWillInvalidate;
- (void)transport:(id)a0 didSendMessage:(id)a1;
- (void)transportDidResume:(id)a0;
- (void)invalidate;
- (void)enqueueTaskOperation:(id)a0;
- (void)abandonTransport;
- (void)activeOperationDidFinish:(id)a0;
- (void)abandonTransportClearQueuedMessagesAndCancelAllOperationsWithError:(id)a0;
- (void)clearQueuedMessagesAndCancelAllOperationsWithError:(id)a0;
- (void)postNotificationWithName:(id)a0 userInfo:(id)a1;
- (void)trackTaskOperation:(id)a0;
- (void)remoteTaskOperation:(id)a0 preparedMessage:(id)a1;
- (void)processTaskMessage:(id)a0;
- (void)resumeCapturedTransportFromTaskClient:(id)a0;
- (void)transport:(id)a0 didFailToSendMessage:(id)a1 error:(id)a2;
- (void)delegateDidInvalidateAndFinalize;
- (void)delegatedidReceiveNotificationWithName:(id)a0 userInfo:(id)a1;
- (void)delegateDidDisconnect;
- (void)resumeWithTaskUUIDs:(id)a0;
- (void)dealloc;
- (void)delegateDidInterruptWithError:(id)a0;
- (void)sessionDidInvalidate;
- (id)captureTransport;
- (void)didPrepareTaskOperation:(id)a0;
- (void)invalidateWithError:(id)a0;
- (void).cxx_destruct;
- (void)taskOperationDidFailWithInvalidTaskClient:(id)a0;
- (void)transport:(id)a0 didInterruptWithError:(id)a1;
- (void)delegateDidConnect;
- (void)connectWithTransport:(id)a0;
- (void)sessionResumedWithTaskUUIDs:(id)a0;
- (void)transport:(id)a0 didReceiveMessage:(id)a1;
- (void)processNotificationMessage:(id)a0;
- (void)resumeTransport:(id)a0;
- (id)init;

@end
