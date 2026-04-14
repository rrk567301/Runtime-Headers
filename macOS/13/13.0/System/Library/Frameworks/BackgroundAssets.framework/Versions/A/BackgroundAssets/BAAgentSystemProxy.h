@class NSXPCConnection;

@interface BAAgentSystemProxy : NSObject {
    NSXPCConnection *_connection;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)grantedInitialBackgroundActivityWithDescriptor:(id)a0 error:(id *)a1;
- (BOOL)applicationWasInstalledWithIdentifier:(id)a0 bundleURLPath:(id)a1 error:(id *)a2;
- (BOOL)applicationWasUpdatedWithIdentifier:(id)a0 bundleURLPath:(id)a1 error:(id *)a2;
- (BOOL)applicationShouldTriggerPeriodicWithIdentifier:(id)a0 bundleURLPath:(id)a1 error:(id *)a2;
- (void)runDebugCommand:(id)a0;

@end
