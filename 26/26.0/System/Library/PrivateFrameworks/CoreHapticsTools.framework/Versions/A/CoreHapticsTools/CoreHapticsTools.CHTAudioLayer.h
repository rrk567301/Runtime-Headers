@interface CoreHapticsTools.CHTAudioLayer : CoreHapticsTools.CHTLayer {
    void /* unknown type, empty encoding */ timeDomainParameterPointsForAudioEvents;
    void /* unknown type, empty encoding */ contextSizedPathsForAudioEvents;
    void /* unknown type, empty encoding */ timeAudioEventsProcessingQueue;
    void /* unknown type, empty encoding */ audioEventPathProcessingQueue;
    void /* unknown type, empty encoding */ containerPathLookup;
    void /* unknown type, empty encoding */ paramTypeForLayer;
    void /* unknown type, empty encoding */ pathDrawingMode;
    void /* unknown type, empty encoding */ audioDrawingMode;
    void /* unknown type, empty encoding */ drawingSampleWidth;
    void /* unknown type, empty encoding */ binFill;
    void /* unknown type, empty encoding */ minAudioHeight;
    void /* unknown type, empty encoding */ eventHitTolerance;
}

- (void)drawInContext:(struct CGContext { } *)a0;
- (id)initWithLayer:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
