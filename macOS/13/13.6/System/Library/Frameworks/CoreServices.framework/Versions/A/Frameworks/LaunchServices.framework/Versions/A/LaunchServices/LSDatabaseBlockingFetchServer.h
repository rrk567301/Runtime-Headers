@class NSXPCListener, NSObject;
@protocol OS_dispatch_queue;

@interface LSDatabaseBlockingFetchServer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
    BOOL _running;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)getEndpoint;
- (void)startRunningIfNecessary;

@end
