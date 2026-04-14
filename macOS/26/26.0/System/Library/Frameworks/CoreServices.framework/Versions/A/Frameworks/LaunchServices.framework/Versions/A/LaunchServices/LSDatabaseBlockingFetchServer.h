@class NSXPCListener, NSObject;
@protocol OS_dispatch_queue;

@interface LSDatabaseBlockingFetchServer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
    BOOL _running;
    _Atomic BOOL _forManualRebuild;
}

+ (id)sharedInstance;

- (id)_init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)setBlockingIsForManualRebuild:(BOOL)a0;
- (void)startRunningIfNecessary;
- (id)getEndpoint;
- (BOOL)isForManualRebuild;
- (void).cxx_destruct;

@end
