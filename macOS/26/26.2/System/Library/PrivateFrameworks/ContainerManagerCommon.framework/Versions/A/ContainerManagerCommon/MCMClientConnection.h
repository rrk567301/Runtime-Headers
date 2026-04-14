@protocol MCMCommandContext;

@interface MCMClientConnection : NSObject

@property (readonly, nonatomic) id<MCMCommandContext> context;

+ (id)privilegedClientConnectionWithUserIdentity:(id)a0 kernel:(BOOL)a1;
+ (id)privilegedClientConnectionWithUserIdentity:(id)a0;
+ (id)sharedClientConnection;

- (id)clientBundleIdentifier;
- (BOOL)_containerURL:(id)a0 isValidForContainerClass:(unsigned long long)a1;
- (void)_cleanupOrphanedDataForDirectories:(id)a0 containerClass:(unsigned long long)a1 forUserIdentity:(id)a2;
- (void)_cleanTransientUserContainersWithContainerConfig:(id)a0;
- (id)initWithContext:(id)a0;
- (void)rebootContainerManagerCleanupWithCompletion:(id /* block */)a0;
- (void)containerManagerSetup;
- (void).cxx_destruct;
- (void)_cleanTransientContainersWithContainerConfig:(id)a0;
- (void)rebootContainerManagerSetup;
- (void)containerManagerCleanupWithCompletion:(id /* block */)a0;
- (id)init;
- (void)_regenerateContainerPaths;

@end
