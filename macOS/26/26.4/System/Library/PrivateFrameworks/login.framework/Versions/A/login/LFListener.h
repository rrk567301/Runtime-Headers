@class NSXPCListener, NSString, NSXPCListenerEndpoint, NSXPCInterface;
@protocol NSXPCListenerDelegate;

@interface LFListener : NSObject

@property (retain) NSString *serviceName;
@property (retain) NSXPCListener *listener;
@property (retain) id messageHandler;
@property (retain) NSXPCInterface *interface;
@property (readonly) NSXPCListenerEndpoint *endpoint;
@property (retain) id<NSXPCListenerDelegate> listenerDelegate;

- (void)resume;
- (id)initWithMachServiceName:(id)a0;
- (void)suspend;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initAnonymousListener;
- (void)dealloc;

@end
