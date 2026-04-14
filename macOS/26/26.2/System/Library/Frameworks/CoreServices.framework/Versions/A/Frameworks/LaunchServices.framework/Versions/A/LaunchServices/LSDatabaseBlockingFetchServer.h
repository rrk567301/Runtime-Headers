@class NSXPCListener, NSObject;
@protocol OS_dispatch_queue;

@interface LSDatabaseBlockingFetchServer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
    BOOL _running;
    _Atomic BOOL _forManualRebuild;
}

+ (id)sharedInstance;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (BOOL)isForManualRebuild;
- (void)startRunningIfNecessary;
- (id)_init;
- (void).cxx_destruct;
- (id)getEndpoint;
- (void)setBlockingIsForManualRebuild:(BOOL)a0;

@end
