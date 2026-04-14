@class BAAgentSystemProxy;

@interface BAAppStoreClient : NSObject {
    BAAgentSystemProxy *_systemProxy;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)grantInitialBackgroundActivityWithApplicationIdentifier:(id)a0 appStoreMetadata:(id)a1 error:(id *)a2;
- (BOOL)grantInitialBackgroundActivityWithDescriptor:(id)a0 error:(id *)a1;
- (BOOL)applicationWasInstalledWithApplicationIdentifier:(id)a0 appFileURL:(id)a1 error:(id *)a2;
- (BOOL)applicationWasUpdatedWithApplicationIdentifier:(id)a0 appFileURL:(id)a1 error:(id *)a2;

@end
