@interface APNetworkClientConfig : NSObject

@property (nonatomic) char useFixedHttpSessionManager;
@property (nonatomic) long long httpMaximumConnectionsPerHost;
@property (nonatomic) long long httpMaximumConnectionsPerHostTempSession;
@property (nonatomic) double lookBackWindow;

@end
