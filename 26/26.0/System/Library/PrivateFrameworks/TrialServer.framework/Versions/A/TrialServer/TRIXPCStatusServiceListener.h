@class NSString, TRIXPCServerContextPromise, NSXPCInterface;

@interface TRIXPCStatusServiceListener : NSObject <NSXPCListenerDelegate> {
    NSXPCInterface *_interface;
    TRIXPCServerContextPromise *_promise;
    NSString *_serviceName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithPromise:(id)a0 forSystem:(BOOL)a1;
- (void).cxx_destruct;

@end
