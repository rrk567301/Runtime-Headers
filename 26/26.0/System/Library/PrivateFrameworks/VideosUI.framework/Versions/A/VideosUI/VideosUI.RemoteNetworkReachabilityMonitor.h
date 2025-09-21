@class _TtC8VideosUI32RemoteNetworkReachabilityMonitor;

@interface VideosUI.RemoteNetworkReachabilityMonitor : NSObject {
    void /* unknown type, empty encoding */ status;
    void /* unknown type, empty encoding */ networkActor;
}

@property (class, nonatomic, readonly) _TtC8VideosUI32RemoteNetworkReachabilityMonitor *shared;

- (BOOL)isReachable;
- (id)init;
- (void).cxx_destruct;
- (void)checkRemoteServerReachabilityWithCompletionHandler:(void (^)(void))a0;
- (BOOL)isLikelyReachable;

@end
