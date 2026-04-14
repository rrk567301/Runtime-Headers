@interface WLKReachabilityMonitor : NSObject

@property (nonatomic) BOOL isNetworkReachable;
@property (nonatomic) BOOL isWifiEnabled;

+ (id)sharedInstance;

- (id)init;
- (id)_init;
- (void)dealloc;
- (void)_wifiDidChange:(id)a0;
- (void)_reachabilityDidChange:(id)a0;

@end
