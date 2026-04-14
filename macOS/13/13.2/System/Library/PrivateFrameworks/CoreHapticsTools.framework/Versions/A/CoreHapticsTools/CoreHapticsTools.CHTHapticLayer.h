@interface CoreHapticsTools.CHTHapticLayer : CoreHapticsTools.CHTLayer {
    void /* unknown type, empty encoding */ timeDomainParameterPointsForTransientEvents;
    void /* unknown type, empty encoding */ contextSizedPathsForTransientEvents;
    void /* unknown type, empty encoding */ timeTransientEventsProcessingQueue;
    void /* unknown type, empty encoding */ transientEventPathProcessingQueue;
    void /* unknown type, empty encoding */ timeDomainParameterPointsForContinuousEvents;
    void /* unknown type, empty encoding */ contextSizedPathsForContinuousEvents;
    void /* unknown type, empty encoding */ timeContinuousEventsProcessingQueue;
    void /* unknown type, empty encoding */ continuousEventPathProcessingQueue;
    void /* unknown type, empty encoding */ paramTypeForLayer;
    void /* unknown type, empty encoding */ topBarMultiplier;
    void /* unknown type, empty encoding */ transientColor;
    void /* unknown type, empty encoding */ continuousColor;
    void /* unknown type, empty encoding */ pathDrawingMode;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithLayer:(id)a0;
- (void)drawInContext:(struct CGContext { } *)a0;

@end
