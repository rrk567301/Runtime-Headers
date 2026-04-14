@class NSXPCConnection;

@interface DMFEmergencyModeMonitor : NSObject

@property (class, readonly) DMFEmergencyModeMonitor *sharedMonitor;

@property (readonly, nonatomic) NSXPCConnection *xpcConnection;

+ (id)remoteInterface;

- (void)dealloc;
- (BOOL)enableEmergencyModeForDuration:(double)a0 withError:(id *)a1;
- (id)initWithXPCConnection:(id)a0;
- (id)init;
- (BOOL)enableEmergencyModeWithError:(id *)a0;
- (void)emergencyModeStatusWithCompletionHandler:(id /* block */)a0;
- (BOOL)disableEmergencyModeWithError:(id *)a0;
- (id)emergencyModeStatusWithError:(id *)a0;
- (void).cxx_destruct;

@end
