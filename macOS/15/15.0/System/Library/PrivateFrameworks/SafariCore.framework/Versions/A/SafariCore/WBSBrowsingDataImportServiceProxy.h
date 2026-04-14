@class NSString, NSXPCConnection;
@protocol NSXPCProxyCreating;

@interface WBSBrowsingDataImportServiceProxy : NSObject <WBSBrowsingDataImportServiceProtocol> {
    NSXPCConnection *_connection;
    id<NSXPCProxyCreating> _proxy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithInterface:(id)a0;
- (id /* block */)_defaultProxyErrorHandlerWithSimpleReplyHandler:(id /* block */)a0;
- (id /* block */)_defaultProxyErrorHandlerWithReplyHandler:(id /* block */)a0;
- (id)initWithConnection:(id)a0 proxy:(id)a1;

@end
