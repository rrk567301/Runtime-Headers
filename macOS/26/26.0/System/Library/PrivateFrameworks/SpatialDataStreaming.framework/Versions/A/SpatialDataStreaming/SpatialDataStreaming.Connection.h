@interface SpatialDataStreaming.Connection : _TtCs12_SwiftObject <SDSActivatable> {
    void /* function */ stateUpdateHandler;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ lastTimeUsed;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ keepAliveInterval;
    void /* unknown type, empty encoding */ isCanceled;
    void /* unknown type, empty encoding */ _state;
    void /* unknown type, empty encoding */ onNetworkDataReceived;
    void /* unknown type, empty encoding */ networkMonitor;
}

@property (nonatomic, copy) id /* block */ stateUpdateHandler;

- (void)cancel;
- (void)activate;
- (void)setTargetQueue:(id)a0;

@end
