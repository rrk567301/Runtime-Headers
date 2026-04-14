@class NSXPCListener, NSString;

@interface _LSServerSettingsStore : _LSInProcessSettingsStore <NSXPCListenerDelegate>

@property (readonly) NSXPCListener *listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)_internalQueue_insertIdentifier:(id)a0 userElection:(unsigned char)a1 timestamp:(double)a2;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)_internalQueue_loadPluginKitDatabase;
- (void)_internalQueue_initializeDatabase;
- (BOOL)resetUserElectionsWithError:(id *)a0;
- (void)_internalQueue_resetUserElection;
- (id)settingsStoreConfigurationForProcessWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (void).cxx_destruct;
- (void)postSettingsChangeNotification;
- (void)setUserElection:(unsigned char)a0 forExtensionKey:(id)a1 reply:(id /* block */)a2;
- (void)resetUserElectionsWithReply:(id /* block */)a0;
- (void)_internalQueue_loadDatabase;
- (BOOL)setUserElection:(unsigned char)a0 forExtensionKey:(id)a1 error:(id *)a2;
- (void)userElectionForExtensionKey:(id)a0 reply:(id /* block */)a1;
- (id)init;
- (void)_internalQueue_insertIdentifier:(id)a0 userElection:(unsigned char)a1;

@end
