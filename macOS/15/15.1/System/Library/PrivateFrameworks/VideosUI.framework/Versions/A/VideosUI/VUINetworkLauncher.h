@interface VUINetworkLauncher : NSObject

@property (class, nonatomic, readonly) VUINetworkLauncher *shared;

- (id)init;
- (void).cxx_destruct;
- (void)preWarmImageConnection;

@end
