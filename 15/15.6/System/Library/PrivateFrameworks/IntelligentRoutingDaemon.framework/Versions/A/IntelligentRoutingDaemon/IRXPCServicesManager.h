@class NSString, NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface IRXPCServicesManager : NSObject <NSXPCListenerDelegate> {
    NSMutableDictionary *_machServices;
    NSMutableArray *_listeners;
    NSObject<OS_dispatch_queue> *_xpcQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (char)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)startServices;
- (void)_createServices;
- (void)_setupXPCListeners;

@end
