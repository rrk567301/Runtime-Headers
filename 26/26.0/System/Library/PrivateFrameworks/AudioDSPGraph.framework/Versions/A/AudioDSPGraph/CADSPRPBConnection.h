@class RPBHost, NSString, RPBServer;

@interface CADSPRPBConnection : NSObject <RPBServerListener> {
    BOOL _connectionIsEnabled;
    RPBServer *_server;
    BOOL _serverIsRunning;
    id /* block */ _hostFactory;
    RPBHost *_host;
}

@property (readonly, nonatomic) RPBHost *host;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)disconnect;
- (void)disable;
- (void)enable;
- (void)dealloc;
- (id)host;
- (void)connect;
- (void).cxx_destruct;
- (void)remoteProcessingBlockServerWillStartRunning:(id)a0;
- (void)remoteProcessingBlockServerWillStopRunning:(id)a0;
- (void)createHost;
- (void)createOrDestroyHost;
- (void)destroyHost;
- (id)initWithServer:(id)a0 hostFactory:(id /* block */)a1;

@end
