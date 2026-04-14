@class NSXPCListenerEndpoint, NSString, NSXPCConnection, NSXPCInterface, NSUUID;

@interface LFConnection : NSObject

@property (retain) NSXPCConnection *nsxpcConnection;
@property (retain) NSString *serviceName;
@property (retain) NSXPCListenerEndpoint *listenerEndpoint;
@property (readonly) NSXPCConnection *connection;
@property (retain) NSXPCInterface *remoteInterface;
@property (retain) NSXPCInterface *exportedInterface;
@property (retain) id exportedObject;
@property unsigned long long options;
@property (retain, setter=setUUID:) NSUUID *uuid;

- (void)dealloc;
- (void)invalidate;
- (id)initWithMachServiceName:(id)a0;
- (void)resume;
- (void)suspend;
- (id)initWithListenerEndpoint:(id)a0;

@end
