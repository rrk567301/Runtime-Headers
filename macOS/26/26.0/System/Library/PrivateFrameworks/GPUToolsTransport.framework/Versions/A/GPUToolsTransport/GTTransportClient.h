@protocol GTXPCConnection;

@interface GTTransportClient : NSObject {
    id<GTXPCConnection> _connection;
}

- (id)initWithConnection:(id)a0;
- (id)allServices;
- (id)capture;
- (void).cxx_destruct;
- (id)serviceProvider;
- (id)replayer;
- (id)loopback;
- (id)launcher;

@end
