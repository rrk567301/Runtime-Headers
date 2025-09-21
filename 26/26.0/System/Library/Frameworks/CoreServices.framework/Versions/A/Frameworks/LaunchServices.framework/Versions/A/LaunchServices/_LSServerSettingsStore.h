@class NSXPCListener, NSString;

@interface _LSServerSettingsStore : _LSInProcessSettingsStore <NSXPCListenerDelegate>

@property (readonly) NSXPCListener *listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (BOOL)setUserElection:(unsigned char)a0 forExtensionKey:(id)a1 error:(id *)a2;
- (BOOL)resetUserElectionsWithError:(id *)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)settingsStoreConfigurationForProcessWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (void)resetUserElectionsWithReply:(id /* block */)a0;
- (void)_internalQueue_loadDatabase;
- (void)_internalQueue_insertIdentifier:(id)a0 userElection:(unsigned char)a1;
- (void)postSettingsChangeNotification;
- (void)_internalQueue_insertIdentifier:(id)a0 userElection:(unsigned char)a1 timestamp:(double)a2;
- (id)init;
- (void)_internalQueue_resetUserElection;
- (void)_internalQueue_loadPluginKitDatabase;
- (void)setUserElection:(unsigned char)a0 forExtensionKey:(id)a1 reply:(id /* block */)a2;
- (void)_internalQueue_initializeDatabase;
- (void)userElectionForExtensionKey:(id)a0 reply:(id /* block */)a1;
- (void).cxx_destruct;

@end
