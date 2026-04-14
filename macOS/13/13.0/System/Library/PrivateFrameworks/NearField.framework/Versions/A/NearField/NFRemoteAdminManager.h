@class NSString, NSMutableSet, NSXPCConnection;

@interface NFRemoteAdminManager : NSObject <NSXPCConnectionDelegate, NFRemoteAdminManagerCallbacks> {
    NSXPCConnection *_connection;
    BOOL _hasEventListener;
    NSMutableSet *_eventListeners;
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
- (BOOL)queueServerConnectionForApplets:(id)a0;
- (BOOL)queueServerConnection:(id)a0;
- (BOOL)cancelCardIngestion;
- (BOOL)setRegistrationInfo:(id)a0 primaryRegionTopic:(id)a1;
- (void)getSELDInfoForBroker:(id /* block */)a0;
- (void)connectToServer:(id)a0 callback:(id /* block */)a1;
- (void)ingestCard:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)unregisterEventListener:(id)a0;
- (void)remoteAdminCleanupProgress:(double)a0;
- (void)readerModeCardSessionToken:(id)a0;
- (void)readerModeCardIngestionStatus:(unsigned long long)a0;
- (void)appletStateChange:(id)a0;
- (id)primaryRegionTopic;
- (void)didInvalidateXPCConnection:(id)a0;
- (void)didInterruptXPCConnection:(id)a0;
- (id)nextRequestForServer:(id)a0;
- (id)getAPNPublicToken;
- (id)deleteAllAppletsAndCleanupWithTSM;

@end
