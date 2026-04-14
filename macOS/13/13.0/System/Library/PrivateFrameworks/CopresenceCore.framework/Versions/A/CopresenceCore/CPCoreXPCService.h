@class NSString, LSApplicationWorkspace, XPCServer, CPIDSHelper, NSMutableDictionary, NSMutableSet, NSObject, TUSessionController;
@protocol OS_dispatch_queue;

@interface CPCoreXPCService : NSObject <CPCoreSessionControllerDelegate, CPCoreService, XPCServerDelegate> {
    TUSessionController *_tuSessionControllerImp;
    LSApplicationWorkspace *_applicationWorkspace;
    NSMutableSet *_cachedParticipants;
    NSMutableDictionary *_cachedSharingRequests;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *xpcQueue;
@property (retain, nonatomic) TUSessionController *sessionController;
@property (retain, nonatomic) CPIDSHelper *idsHelper;
@property (retain, nonatomic) XPCServer *xpcServer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)service;

- (id)init;
- (void).cxx_destruct;
- (void)connectionDidConnect:(id)a0;
- (void)didFailWithError:(id)a0;
- (id)localParticipant;
- (void)participantDidJoinSession:(id)a0;
- (void)participantDidLeaveSession:(id)a0;
- (void)sessionDidChange:(id)a0;
- (oneway void)isConnectedToSession:(id /* block */)a0;
- (oneway void)getConnectedParticipantsWithReply:(id /* block */)a0;
- (oneway void)activeSession:(id /* block */)a0;
- (oneway void)requestConnectionObjectForRemoteParticipant:(id)a0 linkType:(unsigned char)a1 completion:(id /* block */)a2;
- (void)requestBroadcastConnectionForService:(id)a0 completion:(id /* block */)a1;
- (oneway void)sendAppSharingRequest:(id)a0 completion:(id /* block */)a1;
- (oneway void)localAccountName:(id /* block */)a0;
- (oneway void)currentlySharedAppsWithReply:(id /* block */)a0;
- (oneway void)activeSharingRequestsWithReply:(id /* block */)a0;
- (oneway void)activeSceneSharingRequestsWithReply:(id /* block */)a0;
- (void)connectionDidDisconnect:(id)a0;
- (void)didReceiveAppBroadcast:(id)a0 fromID:(id)a1;
- (void)didReceiveAppSharingRequest:(id)a0 fromID:(id)a1;
- (void)didJoinSession:(id)a0;
- (void)didLeaveSession:(id)a0;
- (void)xpcServerStarted;
- (void)xpcServerStopped;
- (void)_notifyClientsWithSharingRequest:(id)a0 fromID:(id)a1;
- (BOOL)_connectionFromCPApp:(id)a0;
- (void)isAppRunningWithBundleId:(id)a0 result:(id /* block */)a1;
- (void)_removeCachedRequest:(id)a0 from:(id)a1;

@end
