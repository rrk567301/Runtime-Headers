@class NSString, NSXPCInterface, TRIXPCServerContextPromise;

@interface TRIXPCInternalServiceListener : NSObject <NSXPCListenerDelegate> {
    TRIXPCServerContextPromise *_promise;
    NSXPCInterface *_interface;
    NSString *_serviceName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithServerContextPromise:(id)a0 forSystem:(BOOL)a1;
- (void).cxx_destruct;

@end
