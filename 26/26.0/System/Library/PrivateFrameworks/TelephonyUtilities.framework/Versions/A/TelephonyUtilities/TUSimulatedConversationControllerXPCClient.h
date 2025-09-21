@class NSString, NSXPCConnection, NSXPCInterface, NSObject;
@protocol OS_dispatch_queue;

@interface TUSimulatedConversationControllerXPCClient : NSObject <TUSimulatedConversationControllerXPCClient, TUSimulatedConversationControllerDataSource>

@property (class, readonly, nonatomic) NSXPCInterface *simulatedConversationControllerClientXPCInterface;
@property (class, readonly, nonatomic) NSXPCInterface *simulatedConversationControllerServerXPCInterface;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)simulatedConversationControllerAllowedClasses;

- (id)synchronousServerWithErrorHandler:(id /* block */)a0;
- (id)asynchronousServerWithErrorHandler:(id /* block */)a0;
- (void)dealloc;
- (void)invalidate;
- (id)init;
- (void).cxx_destruct;
- (void)addRemoteParticipantWithHandle:(id)a0 update:(id)a1 toConversation:(id)a2;
- (void)createIncomingConversationWithHandles:(id)a0;
- (void)removeRemoteParticipant:(id)a0 fromConversation:(id)a1;
- (void)updateParticipant:(id)a0 withUpdate:(id)a1 onConversation:(id)a2;

@end
