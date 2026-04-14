@class FBSDisplayConfiguration, FBSDisplayIdentity;

@interface FBDisplayManager : FBSDisplayMonitor

@property (class, readonly, copy, nonatomic) FBSDisplayIdentity *mainIdentity;
@property (class, readonly, copy, nonatomic) FBSDisplayConfiguration *mainConfiguration;

+ (id)sharedInstance;

- (void)invalidate;
- (id)initWithInitializationCompletion:(id /* block */)a0;
- (id)init;
- (void)dealloc;
- (void)postBookendConnections;
- (id)initWithTransformer:(id)a0;

@end
