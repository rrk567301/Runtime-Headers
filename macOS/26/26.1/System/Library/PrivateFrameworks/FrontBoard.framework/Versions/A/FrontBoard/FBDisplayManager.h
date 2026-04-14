@class FBSDisplayConfiguration, FBSDisplayIdentity;

@interface FBDisplayManager : FBSDisplayMonitor

@property (class, readonly, copy, nonatomic) FBSDisplayIdentity *mainIdentity;
@property (class, readonly, copy, nonatomic) FBSDisplayConfiguration *mainConfiguration;

+ (id)sharedInstance;

- (void)invalidate;
- (id)initWithInitializationCompletion:(id /* block */)a0;
- (void)dealloc;
- (id)initWithTransformer:(id)a0;
- (void)postBookendConnections;
- (id)init;

@end
