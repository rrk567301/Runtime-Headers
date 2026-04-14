@protocol MCMContext;

@interface MCMClientConnection : NSObject

@property (readonly, nonatomic) id<MCMContext> context;

+ (id)privilegedClientConnectionWithUserIdentity:(id)a0;
+ (id)privilegedClientConnectionWithUserIdentity:(id)a0 kernel:(BOOL)a1;
+ (id)sharedClientConnection;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)clientBundleIdentifier;
- (void)_cleanupOrphanedDataForDirectories:(id)a0 containerClass:(unsigned long long)a1;
- (BOOL)_containerURL:(id)a0 isValidForContainerClass:(unsigned long long)a1;
- (void)_regenerateAllSystemContainerPaths;
- (void)containerManagerCleanupWithCompletion:(id /* block */)a0;
- (void)containerManagerSetup;
- (void)rebootContainerManagerCleanupWithCompletion:(id /* block */)a0;
- (void)rebootContainerManagerSetup;

@end
