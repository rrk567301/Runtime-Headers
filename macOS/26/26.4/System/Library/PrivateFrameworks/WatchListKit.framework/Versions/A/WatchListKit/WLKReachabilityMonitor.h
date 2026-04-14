@interface WLKReachabilityMonitor : NSObject

@property (nonatomic) BOOL isNetworkReachable;
@property (nonatomic) BOOL isWifiEnabled;

+ (id)sharedInstance;

- (id)_init;
- (void)_reachabilityDidChange:(id)a0;
- (id)init;
- (void)_wifiDidChange:(id)a0;
- (void)dealloc;

@end
