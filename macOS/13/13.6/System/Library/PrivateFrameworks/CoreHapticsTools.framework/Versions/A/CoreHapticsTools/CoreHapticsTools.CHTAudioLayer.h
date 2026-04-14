@interface CoreHapticsTools.CHTAudioLayer : CoreHapticsTools.CHTLayer {
    void /* unknown type, empty encoding */ timeDomainParameterPointsForAudioEvents;
    void /* unknown type, empty encoding */ contextSizedPathsForAudioEvents;
    void /* unknown type, empty encoding */ timeAudioEventsProcessingQueue;
    void /* unknown type, empty encoding */ audioEventPathProcessingQueue;
    void /* unknown type, empty encoding */ paramTypeForLayer;
    void /* unknown type, empty encoding */ pathDrawingMode;
    void /* unknown type, empty encoding */ drawingMode;
    void /* unknown type, empty encoding */ binFill;
    void /* unknown type, empty encoding */ minBinHeight;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)drawInContext:(struct CGContext { } *)a0;
- (id)initWithLayer:(id)a0;

@end
