@class NSString, NSXPCConnection;
@protocol SFShareSheetServiceClientDelegate;

@interface SFShareSheetServiceClient : NSObject <NSXPCConnectionDelegate, SFShareSheetHostProtocol> {
    BOOL _invalidateCalled;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (weak, nonatomic) id<SFShareSheetServiceClientDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;
- (void)connectionInterrupted;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (void)activate;
- (id)exportedInterface;
- (id)remoteObjectInterface;
- (void)_invalidated;
- (void)performAction:(id)a0;
- (void)_interrupted;
- (void)_ensureXPCStarted;
- (void)establishConnectionWithCompletionHandler:(id /* block */)a0;
- (void)sessionDidUpdate:(id)a0 withChangeDetails:(id)a1;
- (void)performActivity:(id)a0;
- (id)requestSessionForConfiguration:(id)a0;
- (id)requestRestrictedSharingServices;
- (void)createSharingURLForCollaborationRequest:(id)a0 completion:(id /* block */)a1;
- (id)requestDefaultShareModeCollaborationForURL:(id)a0;
- (id)requestCollaborativeModeForContentIdentifier:(id)a0;
- (void)saveCollaborativeMode:(id)a0 forContentIdentifier:(id)a1;
- (id)requestSharedURLForFileOrFolderURL:(id)a0;
- (void)requestSharedURLForFileOrFolderURL:(id)a0 completion:(id /* block */)a1;
- (id)requestAddParticipantsAllowedForRequest:(id)a0;
- (void)requestAddParticipantsAllowedForRequest:(id)a0 completion:(id /* block */)a1;
- (void)deleteSharingURL:(id)a0 containerSetupInfo:(id)a1 completion:(id /* block */)a2;
- (void)requestIsShareOwnerOrAdminForFileURL:(id)a0 completion:(id /* block */)a1;
- (void)requestShareStatusForURL:(id)a0 completion:(id /* block */)a1;
- (void)startSessionWithContext:(id)a0 completion:(id /* block */)a1;
- (void)finishSessionWithResult:(id)a0;
- (void)_ensureConnectionEstablished;
- (id)_synchronousRemoteObjectProxy;
- (id)_remoteObjectProxy;

@end
