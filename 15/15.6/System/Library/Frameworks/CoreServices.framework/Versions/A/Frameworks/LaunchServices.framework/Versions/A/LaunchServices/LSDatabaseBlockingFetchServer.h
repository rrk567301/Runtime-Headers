@class NSXPCListener, NSObject;
@protocol OS_dispatch_queue;

@interface LSDatabaseBlockingFetchServer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
    char _running;
    _Atomic BOOL _forManualRebuild;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (char)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)_init;
- (id)getEndpoint;
- (char)isForManualRebuild;
- (void)setBlockingIsForManualRebuild:(char)a0;
- (void)startRunningIfNecessary;

@end
