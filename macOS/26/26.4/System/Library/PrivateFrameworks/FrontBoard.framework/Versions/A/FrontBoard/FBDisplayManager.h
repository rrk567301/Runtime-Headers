@class FBSDisplayConfiguration, FBSDisplayIdentity;

@interface FBDisplayManager : FBSDisplayMonitor

@property (class, readonly, copy, nonatomic) FBSDisplayIdentity *mainIdentity;
@property (class, readonly, copy, nonatomic) FBSDisplayConfiguration *mainConfiguration;

+ (id)sharedInstance;

- (void)postBookendConnections;
- (void)invalidate;
- (id)init;
- (id)initWithTransformer:(id)a0;
- (id)initWithInitializationCompletion:(id /* block */)a0;
- (void)dealloc;

@end
