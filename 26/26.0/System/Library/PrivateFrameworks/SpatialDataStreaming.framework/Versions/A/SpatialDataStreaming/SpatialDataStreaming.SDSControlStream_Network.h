@interface SpatialDataStreaming.SDSControlStream_Network : _TtCs12_SwiftObject <SDSActivatable> {
    void /* unknown type, empty encoding */ controlStreamState;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ delegate;
}

@property (nonatomic, copy) id /* block */ stateUpdateHandler;

- (void)cancel;
- (void)activate;
- (void)setTargetQueue:(id)a0;

@end
