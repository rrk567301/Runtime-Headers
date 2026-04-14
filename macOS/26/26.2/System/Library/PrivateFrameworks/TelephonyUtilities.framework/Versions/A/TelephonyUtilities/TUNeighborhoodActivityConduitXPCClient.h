@class NSString, NSXPCConnection, NSXPCInterface, NSObject;
@protocol OS_dispatch_queue, TUNeighborhoodActivityConduitXPCClientDelegate;

@interface TUNeighborhoodActivityConduitXPCClient : NSObject <TUNeighborhoodActivityConduitXPCClient>

@property (class, readonly, nonatomic) NSXPCInterface *neighborhoodActivityClientXPCInterface;
@property (class, readonly, nonatomic) NSXPCInterface *neighborhoodActivityServerXPCInterface;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (nonatomic) int token;
@property (weak, nonatomic) id<TUNeighborhoodActivityConduitXPCClientDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allowedXPCClasses;

- (id)serverWithErrorHandler:(id /* block */)a0;
- (void)activeSplitSessionTVDeviceWithCompletion:(id /* block */)a0;
- (void)pullConversation:(id)a0 fromTVDevice:(id)a1 completion:(id /* block */)a2;
- (void)ensureConduitInitialized:(id /* block */)a0;
- (void)isRingingFaceTimeCallsOnConnectedTVDeviceWithCompletion:(id /* block */)a0;
- (oneway void)isRingingFaceTimeCallsOnConnectedTVDeviceChanged:(BOOL)a0;
- (void)approveSplitSessionForConversation:(id)a0 requestedFromDevice:(id)a1 pullContext:(long long)a2 completion:(id /* block */)a3;
- (void)ensureConnection;
- (id)server;
- (void)nearbyTVDevicesWithCompletion:(id /* block */)a0;
- (oneway void)splitSessionUpdated;
- (void).cxx_destruct;
- (void)setSuggestedTVDeviceName:(id)a0 completion:(id /* block */)a1;
- (void)suggestionWithCompletion:(id /* block */)a0;
- (void)disconnectTVDevice:(id)a0 completion:(id /* block */)a1;
- (void)handoffConversation:(id)a0 toTVDevice:(id)a1 completion:(id /* block */)a2;
- (oneway void)tvDeviceDisappeared:(id)a0;
- (oneway void)tvDeviceAppeared:(id)a0;
- (void)registerApprovalClientEnabled:(BOOL)a0;
- (void)cancelSplitSessionApproval;
- (id)init;
- (oneway void)suggestionUpdated:(id)a0;
- (void)inviteTVDevice:(id)a0 toConversationWithUUID:(id)a1 completion:(id /* block */)a2;
- (void)startConversationWith:(id)a0 on:(id)a1 completion:(id /* block */)a2;
- (void)dealloc;
- (void)respondToSuggestionWithResult:(id)a0 completion:(id /* block */)a1;

@end
