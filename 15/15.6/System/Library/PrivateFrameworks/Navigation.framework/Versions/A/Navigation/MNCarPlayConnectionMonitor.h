@interface MNCarPlayConnectionMonitor : NSObject {
    char _shouldWait;
}

@property (class, readonly, nonatomic) MNCarPlayConnectionMonitor *sharedInstance;

@property (readonly, nonatomic) char isConnected;
@property (readonly, nonatomic) char isConnectedSynchronous;

- (void)dealloc;
- (id)init;

@end
