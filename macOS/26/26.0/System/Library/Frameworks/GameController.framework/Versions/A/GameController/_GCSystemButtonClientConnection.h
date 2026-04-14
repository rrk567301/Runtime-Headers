@protocol _GCSystemButtonServerInterface;

@interface _GCSystemButtonClientConnection : GCIPCRemoteIncomingConnection

@property (retain, nonatomic) id<_GCSystemButtonServerInterface> exportedObject;

- (id)initWithConnection:(id)a0;

@end
