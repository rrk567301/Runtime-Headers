@class NSXPCListener, NSXPCListenerEndpoint, NSString, NSArray, EDDaemonInterfaceFactory, NSObject, EFLocked;
@protocol OS_os_log;

@interface EDServer : NSObject <NSXPCListenerDelegate, EDServerRemoteClientsProvider, EFLoggable, EDReconciliationQueryProvider>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) NSXPCListener *listener;
@property (readonly, nonatomic) EFLocked *connectedClients;
@property (retain, nonatomic) EDDaemonInterfaceFactory *daemonInterfaceFactory;
@property (readonly, nonatomic) NSXPCListenerEndpoint *serverXPCEndpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *remoteClients;

- (id)messageReconciliationQueries;
- (id)initWithDaemonInterfaceFactory:(id)a0;
- (void)addRemoteClient:(id)a0;
- (void).cxx_destruct;
- (void)test_tearDown;
- (void)start;
- (id)initWithDaemonInterfaceFactory:(id)a0 listener:(id)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)threadReconciliationQueries;
- (void)removeRemoteClient:(id)a0;

@end
