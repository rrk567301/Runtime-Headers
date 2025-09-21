@interface WLKReachabilityMonitor : NSObject

@property (readonly, nonatomic) char isNetworkReachable;
@property (readonly, nonatomic) char isWifiEnabled;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (id)_init;
- (void)_wifiDidChange:(id)a0;
- (void)_reachabilityDidChange:(id)a0;

@end
