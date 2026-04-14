@interface SpatialDataStreaming.SDSLoopbackBrowser : _TtCs12_SwiftObject <SDSActivatable> {
    void /* unknown type, empty encoding */ serviceID;
    void /* unknown type, empty encoding */ _state;
    void /* unknown type, empty encoding */ targetQueue;
    void /* unknown type, empty encoding */ loopbackPort;
    void /* unknown type, empty encoding */ maxConnectionRetries;
    void /* unknown type, empty encoding */ numConnectionRetries;
    void /* unknown type, empty encoding */ connectionHandler;
    void /* function */ stateUpdateHandler;
}

@property (nonatomic, copy) id /* block */ stateUpdateHandler;

- (void)setTargetQueue:(id)a0;
- (void)activate;
- (void)cancel;

@end
