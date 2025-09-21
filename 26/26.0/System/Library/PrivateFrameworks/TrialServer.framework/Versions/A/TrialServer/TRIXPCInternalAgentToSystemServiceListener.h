@class NSString, NSXPCInterface, TRIXPCInternalAgentToSystemServiceWrapper;

@interface TRIXPCInternalAgentToSystemServiceListener : NSObject <NSXPCListenerDelegate> {
    TRIXPCInternalAgentToSystemServiceWrapper *_wrapper;
    NSXPCInterface *_interface;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
