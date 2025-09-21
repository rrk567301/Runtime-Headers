@class NSString, NSXPCConnection;

@interface DIDocUploadSessionClient : NSObject <DIDocUploadSessionXPCProtocol>

@property (retain, nonatomic) NSXPCConnection *serverConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)createDaemonDisconnectedError;
- (void)cancelUploads;
- (void)uploadDocData:(id)a0 uploadSettings:(id)a1 completion:(id /* block */)a2;

@end
