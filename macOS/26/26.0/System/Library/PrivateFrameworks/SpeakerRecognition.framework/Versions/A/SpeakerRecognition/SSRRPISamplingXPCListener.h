@class NSString, NSXPCListener, SSRRPISampler;

@interface SSRRPISamplingXPCListener : NSObject <NSXPCListenerDelegate> {
    NSXPCListener *_listener;
    SSRRPISampler *_exportedObject;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)initWithListener:(id)a0;
- (void)listen;

@end
