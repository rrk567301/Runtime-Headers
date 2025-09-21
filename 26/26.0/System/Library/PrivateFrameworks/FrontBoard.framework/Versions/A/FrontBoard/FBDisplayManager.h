@class FBSDisplayConfiguration, FBSDisplayIdentity;

@interface FBDisplayManager : FBSDisplayMonitor

@property (class, readonly, copy, nonatomic) FBSDisplayIdentity *mainIdentity;
@property (class, readonly, copy, nonatomic) FBSDisplayConfiguration *mainConfiguration;

+ (id)sharedInstance;

- (void)dealloc;
- (void)invalidate;
- (void)postBookendConnections;
- (id)initWithInitializationCompletion:(id /* block */)a0;
- (id)init;
- (id)initWithTransformer:(id)a0;

@end
