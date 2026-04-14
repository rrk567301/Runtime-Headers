@interface MNCarPlayConnectionMonitor : NSObject {
    BOOL _shouldWait;
}

@property (class, readonly, nonatomic) MNCarPlayConnectionMonitor *sharedInstance;

@property (readonly, nonatomic) BOOL isConnected;
@property (readonly, nonatomic) BOOL isConnectedSynchronous;

- (id)init;
- (void)dealloc;

@end
