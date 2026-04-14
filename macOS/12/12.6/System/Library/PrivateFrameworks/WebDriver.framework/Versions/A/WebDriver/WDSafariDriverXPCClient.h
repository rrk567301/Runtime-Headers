@class NSXPCConnection;

@interface WDSafariDriverXPCClient : NSObject <WDXPCServiceClient>

@property (retain, nonatomic) NSXPCConnection *webDriverServiceConnection;

- (void).cxx_destruct;
- (id /* block */)_defaultErrorHandler;
- (void)serverStarted;
- (void)serverStopped;
- (void)launchApplication:(id)a0 withArguments:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchAttributesOfFiles:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchContentsOfFiles:(id)a0 completionHandler:(id /* block */)a1;
- (void)runServerOnPort:(long long)a0 captureDiagnostics:(BOOL)a1;
- (void)stopServerForTermination;
- (void)_didLaunchApplication:(id)a0 withBundle:(id)a1 atURL:(id)a2 completionHandler:(id /* block */)a3;

@end
