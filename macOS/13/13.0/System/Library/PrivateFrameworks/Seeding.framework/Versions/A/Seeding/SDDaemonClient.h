@class NSString, NSXPCConnection;

@interface SDDaemonClient : NSObject <SDDaemonXPCClient>

@property (retain) NSXPCConnection *daemonConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)getCurrentDevice:(id /* block */)a0;
- (void)enrollDevice:(id)a0 inProgram:(id)a1 completion:(id /* block */)a2;
- (void)getDevicesForPlatforms:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)queryProgramsForSystemAccountsWithPlatforms:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)isDeviceEnrolledInBetaProgram:(id)a0 completion:(id /* block */)a1;
- (void)unenrollDevice:(id)a0 completion:(id /* block */)a1;
- (void)initializeDaemonConnection;
- (id)daemonRemoteObjectProxy;

@end
