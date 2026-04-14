@interface VUINetworkLauncher : NSObject {
    void /* unknown type, empty encoding */ didStartPrewarmImageConnection;
}

@property (class, nonatomic, readonly) VUINetworkLauncher *shared;

- (id)init;
- (void).cxx_destruct;
- (void)preWarmImageConnection;

@end
