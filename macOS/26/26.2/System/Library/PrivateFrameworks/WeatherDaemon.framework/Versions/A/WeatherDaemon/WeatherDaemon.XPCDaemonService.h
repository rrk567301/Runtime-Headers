@interface WeatherDaemon.XPCDaemonService : NSObject <NSXPCListenerDelegate, WeatherDaemon.DaemonServiceType> {
    void /* unknown type, empty encoding */ machService;
    void /* unknown type, empty encoding */ targetQueue;
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ state;
}

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)stop;
- (void).cxx_destruct;
- (void)start;
- (id)init;

@end
