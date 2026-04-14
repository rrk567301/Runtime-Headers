@class NSXPCConnection;

@interface DMFEmergencyModeMonitor : NSObject

@property (class, readonly) DMFEmergencyModeMonitor *sharedMonitor;

@property (readonly, nonatomic) NSXPCConnection *xpcConnection;

+ (id)remoteInterface;

- (void)emergencyModeStatusWithCompletionHandler:(id /* block */)a0;
- (BOOL)disableEmergencyModeWithError:(id *)a0;
- (id)initWithXPCConnection:(id)a0;
- (BOOL)enableEmergencyModeWithError:(id *)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)enableEmergencyModeForDuration:(double)a0 withError:(id *)a1;
- (id)emergencyModeStatusWithError:(id *)a0;
- (id)init;

@end
