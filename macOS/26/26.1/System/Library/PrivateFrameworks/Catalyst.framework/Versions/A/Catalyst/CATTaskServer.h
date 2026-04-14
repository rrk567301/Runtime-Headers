@class NSString, NSArray, CATOperationQueue, NSMutableDictionary, NSDictionary, NSMutableSet, CATStateMachine, NSObject;
@protocol CATTaskServerDelegate, OS_dispatch_group;

@interface CATTaskServer : NSObject <CATTaskSessionDelegate> {
    CATStateMachine *mFSM;
    NSMutableSet *mSessions;
    NSMutableDictionary *mActiveSessionsByUUID;
    NSMutableDictionary *mInvalidatingSessionsByUUID;
    NSMutableDictionary *mConnectedSessionsByUUID;
    CATTaskServer *mStrongSelf;
    NSObject<OS_dispatch_group> *mAllSessionsDidInvalidateGroup;
    CATOperationQueue *mOrphanedOperationQueue;
}

@property (weak, nonatomic) id<CATTaskServerDelegate> delegate;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (readonly, copy, nonatomic) NSArray *clientSessions;
@property (readonly, copy, nonatomic) NSArray *connectedClientSessions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)delegateDidInvalidate;
- (void)allSessionsDidInvalidate;
- (void)connectWithClientTransport:(id)a0;
- (void)invalidateAllClientSessions;
- (void)session:(id)a0 enqueueOperation:(id)a1;
- (void)delegateClientSessionDidConnect:(id)a0;
- (void)delegateClientSessionDidDisconnect:(id)a0;
- (void)delegateClientSession:(id)a0 didInterruptWithError:(id)a1;
- (void)sessionWillInvalidate:(id)a0;
- (void)invalidate;
- (void)delegateSessionDidInvalidate:(id)a0;
- (void)sessionDidDisconnect:(id)a0;
- (id)session:(id)a0 prepareOperationForRequest:(id)a1 error:(id *)a2;
- (void)session:(id)a0 didInterruptWithError:(id)a1;
- (void)postNotificationWithName:(id)a0 userInfo:(id)a1;
- (void)delegateDidInvalidateAndFinalize;
- (void)makeSessionWithClientTransport:(id)a0;
- (void)dealloc;
- (void)startInvalidatingWithError:(id)a0;
- (void)invalidateWithError:(id)a0;
- (void).cxx_destruct;
- (BOOL)delegateClientSession:(id)a0 shouldConnectWithTransport:(id)a1;
- (void)sessionDidInvalidate:(id)a0;
- (BOOL)session:(id)a0 shouldAcceptConnectionFromTransport:(id)a1;
- (void)disconnectAllClientSessions;
- (void)delegateClientSession:(id)a0 didReceiveNotificationWithName:(id)a1 userInfo:(id)a2;
- (id)init;
- (void)session:(id)a0 didReceiveNotificationWithName:(id)a1 userInfo:(id)a2;
- (void)sessionDidConnect:(id)a0;

@end
