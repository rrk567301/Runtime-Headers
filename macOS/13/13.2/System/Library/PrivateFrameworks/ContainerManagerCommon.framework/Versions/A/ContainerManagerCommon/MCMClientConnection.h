@protocol MCMContext;

@interface MCMClientConnection : NSObject

@property (readonly, nonatomic) id<MCMContext> context;

+ (id)sharedClientConnection;
+ (id)privilegedClientConnectionWithUserIdentity:(id)a0 kernel:(BOOL)a1;
+ (id)privilegedClientConnectionWithUserIdentity:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)clientBundleIdentifier;
- (void)containerManagerSetup;
- (void)containerManagerCleanupWithCompletion:(id /* block */)a0;
- (void)_cleanupOrphanedDataForDirectories:(id)a0 containerClass:(unsigned long long)a1;
- (BOOL)_containerURL:(id)a0 isValidForContainerClass:(unsigned long long)a1;
- (void)rebootContainerManagerSetup;
- (void)rebootContainerManagerCleanupWithCompletion:(id /* block */)a0;
- (void)_regenerateAllSystemContainerPaths;

@end
