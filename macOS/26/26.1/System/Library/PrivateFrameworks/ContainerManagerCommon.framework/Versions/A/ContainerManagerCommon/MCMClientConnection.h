@protocol MCMCommandContext;

@interface MCMClientConnection : NSObject

@property (readonly, nonatomic) id<MCMCommandContext> context;

+ (id)privilegedClientConnectionWithUserIdentity:(id)a0;
+ (id)sharedClientConnection;
+ (id)privilegedClientConnectionWithUserIdentity:(id)a0 kernel:(BOOL)a1;

- (id)clientBundleIdentifier;
- (void)_regenerateContainerPaths;
- (void)_cleanTransientContainersWithContainerConfig:(id)a0;
- (id)initWithContext:(id)a0;
- (void)_cleanupOrphanedDataForDirectories:(id)a0 containerClass:(unsigned long long)a1 forUserIdentity:(id)a2;
- (void)rebootContainerManagerCleanupWithCompletion:(id /* block */)a0;
- (void)_cleanTransientUserContainersWithContainerConfig:(id)a0;
- (BOOL)_containerURL:(id)a0 isValidForContainerClass:(unsigned long long)a1;
- (void)containerManagerSetup;
- (void)containerManagerCleanupWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)rebootContainerManagerSetup;
- (id)init;

@end
