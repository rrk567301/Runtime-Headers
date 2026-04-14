@protocol GTXPCConnection;

@interface GTTransportClient : NSObject {
    id<GTXPCConnection> _connection;
}

- (id)allServices;
- (id)capture;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (id)serviceProvider;
- (id)replayer;
- (id)loopback;
- (id)launcher;

@end
