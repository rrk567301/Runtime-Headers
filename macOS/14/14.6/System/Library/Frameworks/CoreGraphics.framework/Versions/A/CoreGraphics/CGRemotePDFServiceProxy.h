@class NSXPCConnection;
@protocol CGRemotePDFServiceProtocol, NSXPCProxyCreating;

@interface CGRemotePDFServiceProxy : NSObject {
    NSXPCConnection *_connection;
    id<CGRemotePDFServiceProtocol, NSXPCProxyCreating> _proxy;
}

+ (id)sharedInstance;
+ (id)interface;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithError:(id *)a0;
- (void)newRemotePDFDocumentProxyWithData:(id)a0 withReply:(id /* block */)a1;
- (void)newRemotePDFDocumentWithData:(id)a0 completion:(id /* block */)a1;

@end
