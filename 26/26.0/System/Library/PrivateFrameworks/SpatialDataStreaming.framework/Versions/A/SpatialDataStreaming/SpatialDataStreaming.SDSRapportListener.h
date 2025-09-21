@interface SpatialDataStreaming.SDSRapportListener : _TtCs12_SwiftObject <SDSActivatable> {
    void /* unknown type, empty encoding */ serviceID;
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ _state;
    void /* unknown type, empty encoding */ targetQueue;
    void /* function */ stateUpdateHandler;
    void /* unknown type, empty encoding */ connectionHandler;
    void /* unknown type, empty encoding */ connection;
}

@property (nonatomic, copy) id /* block */ stateUpdateHandler;

- (void)cancel;
- (void)activate;
- (void)setTargetQueue:(id)a0;

@end
