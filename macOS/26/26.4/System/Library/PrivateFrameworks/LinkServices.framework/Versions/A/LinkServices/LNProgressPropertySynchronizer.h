@interface LNProgressPropertySynchronizer : NSObject {
    void /* unknown type, empty encoding */ sourceProgress;
    void /* unknown type, empty encoding */ destinationProgress;
    void /* unknown type, empty encoding */ observationBag;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)stopSynchronization;
- (id)initWithSourceProgress:(id)a0 destinationProgress:(id)a1;
- (void)startSynchronization;

@end
