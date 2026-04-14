@interface WLKReachabilityMonitor : NSObject

@property (nonatomic) BOOL isNetworkReachable;
@property (nonatomic) BOOL isWifiEnabled;

+ (id)sharedInstance;

- (id)_init;
- (void)dealloc;
- (void)_reachabilityDidChange:(id)a0;
- (void)_wifiDidChange:(id)a0;
- (id)init;

@end
