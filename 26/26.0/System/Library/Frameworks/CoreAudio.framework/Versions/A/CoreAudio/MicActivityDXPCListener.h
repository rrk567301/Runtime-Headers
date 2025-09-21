@class NSString, NSXPCListener, NSXPCListenerEndpoint;

@interface MicActivityDXPCListener : NSObject <NSXPCListenerDelegate, MicActivityReverseClientProtocol, MicActivityDXPCReverseConnection> {
    NSXPCListenerEndpoint *endpoint;
    NSXPCListener *listener;
    struct function<void (bool)> { struct __value_func<void (bool)> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } mtdListenerCallback;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)dealloc;
- (id)init;
- (id).cxx_construct;
- (id)getEndpoint;
- (void).cxx_destruct;
- (void)destroyEndpoint;
- (void)createEndpoint;
- (void)microphoneActivityStateChanged:(BOOL)a0 reply:(id /* block */)a1;
- (void)setMADListenerCallback:(struct function<void (bool)> { struct __value_func<void (bool)> { union type { unsigned char x0[24]; } x0; void *x1; } x0; })a0;

@end
