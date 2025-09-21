@class NSXPCConnection;

@interface DMFEmergencyModeMonitor : NSObject

@property (class, readonly) DMFEmergencyModeMonitor *sharedMonitor;

@property (readonly, nonatomic) NSXPCConnection *xpcConnection;

+ (id)remoteInterface;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithXPCConnection:(id)a0;
- (char)disableEmergencyModeWithError:(id *)a0;
- (void)emergencyModeStatusWithCompletionHandler:(id /* block */)a0;
- (id)emergencyModeStatusWithError:(id *)a0;
- (char)enableEmergencyModeForDuration:(double)a0 withError:(id *)a1;
- (char)enableEmergencyModeWithError:(id *)a0;

@end
