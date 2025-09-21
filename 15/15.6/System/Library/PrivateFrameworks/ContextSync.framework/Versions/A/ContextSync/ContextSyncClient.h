@class NSString, NSXPCConnection;

@interface ContextSyncClient : NSObject <BMDistributedContextClientProtocol>

@property (retain, nonatomic) NSString *clientName;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithClientName:(id)a0;
- (char)registerForUpdates:(id)a0 withIdentifier:(id)a1 forUseCase:(id)a2 shouldWake:(char)a3 forDeviceTypes:(long long)a4;
- (char)registerForUpdates:(id)a0 withIdentifier:(id)a1 forUseCase:(id)a2 shouldWake:(char)a3 forDeviceTypes:(long long)a4 withError:(id *)a5;
- (char)registerForUpdates:(id)a0 withIdentifier:(id)a1 forUseCase:(id)a2 shouldWake:(char)a3 forDevices:(id)a4 withError:(id *)a5;
- (char)registerForUpdates:(id)a0 withIdentifier:(id)a1 forUseCase:(id)a2 withOptions:(unsigned long long)a3 forDeviceTypes:(long long)a4 withError:(id *)a5;
- (char)registerForUpdates:(id)a0 withIdentifier:(id)a1 forUseCase:(id)a2 withOptions:(unsigned long long)a3 forDevices:(id)a4 withError:(id *)a5;
- (char)registerForUpdates:(id)a0 withIdentifier:(id)a1 shouldWake:(char)a2 forDeviceTypes:(long long)a3;
- (char)registerForUpdates:(id)a0 withIdentifier:(id)a1 shouldWake:(char)a2 forDeviceTypes:(long long)a3 withError:(id *)a4;
- (char)unregisterForUpdates:(id)a0 withIdentifier:(id)a1 forDeviceTypes:(long long)a2;
- (char)unregisterForUpdates:(id)a0 withIdentifier:(id)a1 forDeviceTypes:(long long)a2 withError:(id *)a3;
- (char)unregisterForUpdates:(id)a0 withIdentifier:(id)a1 forUseCase:(id)a2 forDeviceTypes:(long long)a3;
- (char)unregisterForUpdates:(id)a0 withIdentifier:(id)a1 forUseCase:(id)a2 forDeviceTypes:(long long)a3 withError:(id *)a4;
- (char)unregisterForUpdates:(id)a0 withIdentifier:(id)a1 forUseCase:(id)a2 forDevices:(id)a3 withError:(id *)a4;

@end
