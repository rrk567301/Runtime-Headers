@interface SpatialDataStreaming.SDSRapportBrowser : _TtCs12_SwiftObject <SDSActivatable> {
    void /* unknown type, empty encoding */ serviceID;
    void /* unknown type, empty encoding */ browser;
    void /* unknown type, empty encoding */ _state;
    void /* unknown type, empty encoding */ targetQueue;
    void /* unknown type, empty encoding */ cachedResults;
    void /* unknown type, empty encoding */ matchEndpoint;
    void /* unknown type, empty encoding */ connectionEndpoint;
    void /* unknown type, empty encoding */ maxConnectionRetries;
    void /* unknown type, empty encoding */ numConnectionRetries;
    void /* unknown type, empty encoding */ receivedNewEndpoint;
    void /* unknown type, empty encoding */ connectionStarted;
    void /* unknown type, empty encoding */ serverBundleID;
    void /* unknown type, empty encoding */ migrationID;
    void /* unknown type, empty encoding */ connectionHandler;
    void /* function */ stateUpdateHandler;
}

@property (nonatomic, copy) id /* block */ stateUpdateHandler;

- (void)cancel;
- (void)activate;
- (void)setTargetQueue:(id)a0;

@end
