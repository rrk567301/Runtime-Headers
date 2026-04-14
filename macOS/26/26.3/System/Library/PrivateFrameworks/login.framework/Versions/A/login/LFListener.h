@class NSXPCListener, NSString, NSXPCListenerEndpoint, NSXPCInterface;
@protocol NSXPCListenerDelegate;

@interface LFListener : NSObject

@property (retain) NSString *serviceName;
@property (retain) NSXPCListener *listener;
@property (retain) id messageHandler;
@property (retain) NSXPCInterface *interface;
@property (readonly) NSXPCListenerEndpoint *endpoint;
@property (retain) id<NSXPCListenerDelegate> listenerDelegate;

- (void)invalidate;
- (id)initWithMachServiceName:(id)a0;
- (void)suspend;
- (void)resume;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initAnonymousListener;

@end
