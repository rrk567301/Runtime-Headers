@class NSXPCListenerEndpoint, NSString, NSXPCListener, NSObject;
@protocol OS_xpc_object;

@interface _LSTemplateApplicationActionsManagerListener : NSObject <NSXPCListenerDelegate> {
    NSXPCListener *_listener;
}

@property (readonly) NSXPCListenerEndpoint *endpoint;
@property (readonly) NSObject<OS_xpc_object> *xpcendpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedListener;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)invalidate;
- (id)init;
- (id)endpoint;
- (void).cxx_destruct;
- (id)xpcendpoint;

@end
