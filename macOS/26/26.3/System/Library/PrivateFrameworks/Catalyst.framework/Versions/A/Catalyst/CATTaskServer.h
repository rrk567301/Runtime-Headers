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

- (void)invalidate;
- (void)invalidateWithError:(id)a0;
- (void)delegateDidInvalidate;
- (void)delegateClientSession:(id)a0 didReceiveNotificationWithName:(id)a1 userInfo:(id)a2;
- (void)sessionDidConnect:(id)a0;
- (void)sessionDidInvalidate:(id)a0;
- (void)makeSessionWithClientTransport:(id)a0;
- (void)delegateClientSessionDidConnect:(id)a0;
- (BOOL)delegateClientSession:(id)a0 shouldConnectWithTransport:(id)a1;
- (id)init;
- (void)connectWithClientTransport:(id)a0;
- (void)startInvalidatingWithError:(id)a0;
- (void)session:(id)a0 enqueueOperation:(id)a1;
- (void)sessionDidDisconnect:(id)a0;
- (void)allSessionsDidInvalidate;
- (void)delegateSessionDidInvalidate:(id)a0;
- (void)postNotificationWithName:(id)a0 userInfo:(id)a1;
- (BOOL)session:(id)a0 shouldAcceptConnectionFromTransport:(id)a1;
- (void)disconnectAllClientSessions;
- (void)invalidateAllClientSessions;
- (void)delegateDidInvalidateAndFinalize;
- (void).cxx_destruct;
- (void)session:(id)a0 didReceiveNotificationWithName:(id)a1 userInfo:(id)a2;
- (void)sessionWillInvalidate:(id)a0;
- (void)session:(id)a0 didInterruptWithError:(id)a1;
- (void)dealloc;
- (id)session:(id)a0 prepareOperationForRequest:(id)a1 error:(id *)a2;
- (void)delegateClientSession:(id)a0 didInterruptWithError:(id)a1;
- (void)delegateClientSessionDidDisconnect:(id)a0;

@end
