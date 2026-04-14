@class NSXPCConnection;

@interface ACCHWComponentAuth : NSObject

@property (retain, nonatomic) NSXPCConnection *xpcConnection;

+ (id)sharedManager;

- (id)init;
- (id)_init;
- (void).cxx_destruct;
- (void)authenticateBatteryWithChallenge:(id)a0 completionHandler:(id /* block */)a1;
- (void)authenticateLASWithChallenge:(id)a0 completionHandler:(id /* block */)a1 updateRegistry:(BOOL)a2;
- (void)authenticateTouchControllerWithChallenge:(id)a0 completionHandler:(id /* block */)a1;
- (void)authenticateTouchControllerWithChallenge:(id)a0 completionHandler:(id /* block */)a1 updateRegistry:(BOOL)a2;
- (void)authenticateVeridianWithChallenge:(id)a0 completionHandler:(id /* block */)a1;
- (void)authenticateVeridianWithChallenge:(id)a0 completionHandler:(id /* block */)a1 updateRegistry:(BOOL)a2 updateUIProperty:(BOOL)a3 logToAnalytics:(BOOL)a4;
- (void)signVeridianChallenge:(id)a0 completionHandler:(id /* block */)a1;
- (void)verifyBatteryMatch:(id)a0 completionHandler:(id /* block */)a1;

@end
