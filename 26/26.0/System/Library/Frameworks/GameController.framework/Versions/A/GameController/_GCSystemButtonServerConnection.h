@protocol _GCSystemButtonClientInterface;

@interface _GCSystemButtonServerConnection : GCIPCRemoteOutgoingConnection

@property (retain, nonatomic) id<_GCSystemButtonClientInterface> client;

- (id)initWithMachServiceName:(id)a0;
- (id)init;

@end
