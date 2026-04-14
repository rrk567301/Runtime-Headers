@class NSXPCListener, DiagCollectionServiceImpl, NSObject;
@protocol OS_dispatch_queue;

@interface DiagCollectionTransport : NSObject {
    NSXPCListener *listener;
    DiagCollectionServiceImpl *service;
    NSObject<OS_dispatch_queue> *transport_queue;
}

- (void)shutdown;
- (id)init;
- (void)setListeningPort:(const char *)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
