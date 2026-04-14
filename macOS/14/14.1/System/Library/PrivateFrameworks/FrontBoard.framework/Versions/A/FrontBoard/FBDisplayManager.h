@class FBSDisplayConfiguration, FBSDisplayIdentity;

@interface FBDisplayManager : FBSDisplayMonitor

@property (class, readonly, copy, nonatomic) FBSDisplayIdentity *mainIdentity;
@property (class, readonly, copy, nonatomic) FBSDisplayConfiguration *mainConfiguration;
@property (class, readonly, copy, nonatomic) FBSDisplayConfiguration *mainDisplay;

@property (readonly, copy, nonatomic) FBSDisplayConfiguration *mainDisplay;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)updateTransformsWithCompletion:(id /* block */)a0;
- (void)postBookendConnections;

@end
