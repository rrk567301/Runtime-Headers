@class NSString, NSUserActivity, SLDWorkspaceObserver, NSObject;
@protocol OS_dispatch_queue;

@interface SLDShareableContentService : NSObject <SLDService, SLDShareableContentServiceProtocol>

@property (readonly, nonatomic) SLDWorkspaceObserver *workspaceObserver;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSUserActivity *activity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedService;
+ (id)remoteObjectProtocol;
+ (void)setupInterface:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)loadRepresentationFromSourceIdentifier:(id)a0 requestedTypeIdentifier:(id)a1 requestedItemProviderIndex:(long long)a2 completionHandler:(id /* block */)a3;
- (void)presentMessageComposeSheetForSourceIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)retrieveShareableContentMetadataMatchingBundleIdentifier:(id)a0 sceneIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)shareCollaborationData:(id)a0 faceTimeConversationUUID:(id)a1 completionHandler:(id /* block */)a2;
- (id)_applicationIdentifierForConnection:(id)a0;
- (BOOL)_connShouldAllowBackgroundCollaboration:(id)a0;
- (BOOL)allowsConnection:(id)a0;
- (void)fetchShareableContentFromSourceIdentifier:(id)a0 requestedTypeIdentifier:(id)a1 requestedItemProviderIndex:(long long)a2 responseHandler:(id /* block */)a3;
- (void)fetchShareableContentMetadataFromBundleIdentifier:(id)a0 sceneIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)performAction:(id)a0 onApplicationWithBundleIdentifier:(id)a1;
- (BOOL)populateInitiatorMetadata:(id)a0 name:(id)a1 email:(id)a2;
- (void)populateInitiatorMetadata:(id)a0 request:(id)a1 completionHandler:(id /* block */)a2;
- (int)processIdentifierForBundleIdentifier:(id)a0;
- (id)sendAppleEventToProcessWithIdentifier:(int)a0 forAction:(id)a1 error:(id *)a2;

@end
