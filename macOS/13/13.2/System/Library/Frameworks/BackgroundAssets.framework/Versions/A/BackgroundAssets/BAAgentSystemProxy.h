@class NSXPCConnection;

@interface BAAgentSystemProxy : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _connectionLock;
    NSXPCConnection *_connection;
}

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)grantedInitialBackgroundActivityWithDescriptor:(id)a0 error:(id *)a1;
- (BOOL)applicationWasInstalledWithIdentifier:(id)a0 bundleURLPath:(id)a1 error:(id *)a2;
- (BOOL)applicationWasUpdatedWithIdentifier:(id)a0 bundleURLPath:(id)a1 error:(id *)a2;
- (BOOL)applicationShouldTriggerPeriodicWithIdentifier:(id)a0 bundleURLPath:(id)a1 error:(id *)a2;
- (void)runDebugCommand:(id)a0;

@end
