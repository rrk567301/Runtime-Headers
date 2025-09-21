@class NFLazy, NSString;
@protocol FCNetworkBehaviorMonitor, FCNetworkReachabilityType;

@interface FCEndpointConnection : NSObject <NSURLSessionDelegate, FCCoreConfigurationObserving, FCEndpointConnectionType>

@property (retain, nonatomic) NFLazy *lazySession;
@property (readonly, nonatomic) id<FCNetworkBehaviorMonitor> networkBehaviorMonitor;
@property (readonly, nonatomic) id<FCNetworkReachabilityType> networkReachability;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)URLSessionWithSourceApplicationBundleIdentifier:(id)a0;
+ (id)errorForStatus:(long long)a0 url:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)session;
- (id)initWithNetworkBehaviorMonitor:(id)a0;
- (id)initWithSourceApplicationBundleIdentifier:(id)a0;
- (id)initWithSourceApplicationBundleIdentifier:(id)a0 networkBehaviorMonitor:(id)a1;
- (void)performAuthenticatedHTTPRequestWithURL:(id)a0 valuesByHTTPHeaderField:(id)a1 method:(id)a2 data:(id)a3 contentType:(id)a4 priority:(float)a5 reauthenticateIfNeeded:(char)a6 callbackQueue:(id)a7 completion:(id /* block */)a8;
- (void)performAuthenticatedHTTPRequestWithURL:(id)a0 valuesByHTTPHeaderField:(id)a1 method:(id)a2 data:(id)a3 contentType:(id)a4 priority:(float)a5 reauthenticateIfNeeded:(char)a6 networkEventType:(int)a7 callbackQueue:(id)a8 completion:(id /* block */)a9;
- (void)performHTTPRequestWithURL:(id)a0 method:(id)a1 data:(id)a2 contentType:(id)a3 priority:(float)a4 requiresMescalSigning:(char)a5 callbackQueue:(id)a6 completion:(id /* block */)a7;
- (void)performHTTPRequestWithURL:(id)a0 method:(id)a1 data:(id)a2 contentType:(id)a3 priority:(float)a4 requiresMescalSigning:(char)a5 networkEventType:(int)a6 callbackQueue:(id)a7 completion:(id /* block */)a8;
- (void)performHTTPRequestWithURL:(id)a0 valuesByHTTPHeaderField:(id)a1 method:(id)a2 data:(id)a3 contentType:(id)a4 priority:(float)a5 requiresMescalSigning:(char)a6 callbackQueue:(id)a7 completion:(id /* block */)a8;
- (void)performHTTPRequestWithURL:(id)a0 valuesByHTTPHeaderField:(id)a1 method:(id)a2 data:(id)a3 contentType:(id)a4 priority:(float)a5 requiresMescalSigning:(char)a6 networkEventType:(int)a7 callbackQueue:(id)a8 completion:(id /* block */)a9;
- (void)performHTTPRequestWithURL:(id)a0 valuesByHTTPHeaderField:(id)a1 method:(id)a2 data:(id)a3 contentType:(id)a4 priority:(float)a5 requiresMescalSigning:(char)a6 requiresAuthKitHeaders:(char)a7 networkEventType:(int)a8 callbackQueue:(id)a9 completion:(id /* block */)a10;

@end
