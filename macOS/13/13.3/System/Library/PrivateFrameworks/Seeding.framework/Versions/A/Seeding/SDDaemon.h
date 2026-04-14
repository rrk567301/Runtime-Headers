@class NSXPCListener, NSMutableDictionary, NSString;

@interface SDDaemon : NSObject <NSXPCListenerDelegate, SDDaemonXPCServer>

@property (retain) NSXPCListener *listener;
@property (retain) NSMutableDictionary *appConnections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)start;
- (void)checkIn;
- (id)_connectionForPid:(id)a0;
- (void)_releaseAppConnectionWithPid:(int)a0;
- (void)_storeAppConnection:(id)a0;
- (void)_verifyCurrentDevice;
- (void)enrollDevice:(id)a0 inProgram:(id)a1 completion:(id /* block */)a2;
- (void)getCurrentDevice:(id /* block */)a0;
- (void)getDevicesForPlatforms:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)isDeviceEnrolledInBetaProgram:(id)a0 completion:(id /* block */)a1;
- (void)queryProgramsForSystemAccountsWithPlatforms:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)remoteObjectProxyForPID:(id)a0;
- (void)unenrollDevice:(id)a0 completion:(id /* block */)a1;

@end
