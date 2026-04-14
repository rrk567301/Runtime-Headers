@class NSString, SFShareSheetServiceClient, SFShareSheetConnectionContext;
@protocol SFShareSheetSessionManagerDelegate;

@interface SFShareSheetSessionManager : NSObject <SFShareSheetServiceClientDelegate>

@property (retain, nonatomic) SFShareSheetServiceClient *xpcManager;
@property (nonatomic) NSString *connectionState;
@property (retain, nonatomic) SFShareSheetConnectionContext *connectionContext;
@property (weak, nonatomic) id<SFShareSheetSessionManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)_connect;
- (void)sessionDidUpdate:(id)a0 withChangeDetails:(id)a1;
- (void)performActivity:(id)a0;
- (void)didFinishSessionWithError:(id)a0;
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
- (void)requestIsShareOwnerForFileURL:(id)a0 share:(id)a1 completion:(id /* block */)a2;
- (void)requestShareStatusForURL:(id)a0 completion:(id /* block */)a1;
- (void)performPeopleSuggestion:(id)a0;
- (void)_reconnect;
- (void)_handleConnectionCompletion;

@end
