@interface DaemonController : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ requestHandler;
    void /* unknown type, empty encoding */ taskLimiters;
    void /* unknown type, empty encoding */ urlSession;
    void /* unknown type, empty encoding */ geoCache;
    void /* unknown type, empty encoding */ configStore;
    void /* unknown type, empty encoding */ accountStore;
    void /* unknown type, empty encoding */ telemetryProvider;
    void /* unknown type, empty encoding */ minimumActivityInterval;
    void /* unknown type, empty encoding */ maximumActivityInterval;
    void /* unknown type, empty encoding */ failureActivityInterval;
}

- (void).cxx_destruct;
- (id)init;
- (void)start;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;

@end
