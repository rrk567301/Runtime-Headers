@interface WLKReachabilityMonitor : NSObject

@property (nonatomic) BOOL isNetworkReachable;
@property (nonatomic) BOOL isWifiEnabled;

+ (id)sharedInstance;

- (void)_wifiDidChange:(id)a0;
- (id)_init;
- (void)dealloc;
- (void)_reachabilityDidChange:(id)a0;
- (id)init;

@end
