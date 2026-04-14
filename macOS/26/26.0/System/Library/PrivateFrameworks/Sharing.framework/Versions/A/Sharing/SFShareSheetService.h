@class NSString, NSXPCConnection;
@protocol SFShareSheetServiceDelegate;

@interface SFShareSheetService : NSObject <SFShareSheetClientProtocol, NSXPCConnectionDelegate, SFShareSheetServerProtocol> {
    BOOL _invalidateCalled;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (weak, nonatomic) id<SFShareSheetServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)remoteObjectInterface;
- (void)_ensureXPCStarted;
- (id)exportedInterface;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (id)_remoteObjectProxy;
- (void)invalidate;
- (void)_connectionInterrupted;
- (void)activate;
- (void)_connectionInvalidated;
- (void).cxx_destruct;
- (void)performAction:(id)a0;
- (void)_ensureConnectionEstablished;
- (id)_synchronousRemoteObjectProxy;
- (void)canShareFileURL:(id)a0 completion:(id /* block */)a1;
- (void)createSharingURLForCollaborationRequest:(id)a0 completion:(id /* block */)a1;
- (void)deleteSharingURL:(id)a0 containerSetupInfo:(id)a1 completion:(id /* block */)a2;
- (void)establishConnectionWithCompletionHandler:(id /* block */)a0;
- (void)performActivity:(id)a0;
- (void)performRTSRequestForFileURL:(id)a0 completion:(id /* block */)a1;
- (void)requestAddParticipantsAllowedForRequest:(id)a0 completion:(id /* block */)a1;
- (void)requestCollaborativeModeForContentIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)requestDefaultShareModeCollaborationForURL:(id)a0 completion:(id /* block */)a1;
- (void)requestExtensionsOrderingPreferencesWithCompletion:(id /* block */)a0;
- (void)requestIsShareOwnerOrAdminForFileURL:(id)a0 completion:(id /* block */)a1;
- (void)requestRestrictedSharingServicesWithCompletion:(id /* block */)a0;
- (void)requestSessionForConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)requestShareStatusForURL:(id)a0 completion:(id /* block */)a1;
- (void)requestSharedURLForCollaborationRequest:(id)a0 completion:(id /* block */)a1;
- (void)saveCollaborativeMode:(id)a0 forContentIdentifier:(id)a1;
- (void)saveDefaultExtensionsOrdering:(id)a0;
- (void)sessionDidUpdate:(id)a0 withChangeDetails:(id)a1;
- (void)shareSheetSessionDidEndWithTestingSnapshot:(id)a0 completion:(id /* block */)a1;
- (void)startSessionWithContext:(id)a0 completion:(id /* block */)a1;
- (void)stopSessionWithResult:(id)a0;

@end
