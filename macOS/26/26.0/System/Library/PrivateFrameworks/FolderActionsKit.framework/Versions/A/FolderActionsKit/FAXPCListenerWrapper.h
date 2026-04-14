@class NSXPCListener, FAXPCDelegate, NSXPCInterface;

@interface FAXPCListenerWrapper : NSObject

@property (retain) NSXPCListener *listener;
@property (retain) FAXPCDelegate *delegate;
@property (readonly, nonatomic) NSXPCInterface *exportedInterface;

+ (id)wrapperForMachService:(id)a0 exportedProtocol:(id)a1 exportedObject:(id)a2;

- (void)invalidate;
- (void)suspend;
- (void)resume;
- (void).cxx_destruct;

@end
