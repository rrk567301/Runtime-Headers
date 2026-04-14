@interface MicroLocationDaemon.ULAnchorSmoother : NSObject <MicroLocationDaemon.ULAnchorSmoothing> {
    void /* unknown type, empty encoding */ anchorsDict;
}

- (void).cxx_destruct;
- (id)init;
- (id)addAnchors:(id)a0;
- (id)getSupportedContextLayers;
- (double)getYawDifferenceThreshold;
- (void)setCurrentAnchors:(id)a0;

@end
