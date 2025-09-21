@class NSString, NSXPCConnection, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface NFRemoteAdminManager : NSObject <NSXPCConnectionDelegate, NFRemoteAdminManagerCallbacks> {
    NSXPCConnection *_connection;
    char _hasEventListener;
    NSMutableSet *_eventListeners;
    NSObject<OS_dispatch_queue> *_xpcQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedRemoteAdminManager;

- (id)init;
- (void).cxx_destruct;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)registrationInfo;
- (void)_connectIfNeeded;
- (void)registerEventListener:(id)a0;
- (void)appletsDeleted:(id)a0;
- (void)appletStateChange:(id)a0;
- (char)cancelCardIngestion;
- (void)connectToServer:(id)a0 initialClientRequestInfo:(id)a1 callback:(id /* block */)a2;
- (void)getSELDInfoForBroker:(id /* block */)a0;
- (void)ingestCard:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)primaryRegionTopic;
- (char)queueServerConnection:(id)a0;
- (char)queueServerConnectionForApplets:(id)a0;
- (void)readerModeCardIngestionStatus:(unsigned long long)a0;
- (void)readerModeCardSessionToken:(id)a0;
- (char)setRegistrationInfo:(id)a0 primaryRegionTopic:(id)a1;
- (void)unregisterEventListener:(id)a0;
- (void)connectToServer:(id)a0 callback:(id /* block */)a1;
- (id)deleteAllAppletsAndCleanupWithTSM;
- (id)deleteAllSPAppletsAndCleanupWithTSM;
- (id)deleteAllWalletAppletsAndCleanupWithTSM;
- (void)didInterruptXPCConnection:(id)a0;
- (void)didInvalidateXPCConnection:(id)a0;
- (id)getAPNPublicToken;
- (id)nextRequestForServer:(id)a0;

@end
