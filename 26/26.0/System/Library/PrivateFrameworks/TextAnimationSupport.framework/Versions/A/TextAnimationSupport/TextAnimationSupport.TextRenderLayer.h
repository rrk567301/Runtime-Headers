@interface TextAnimationSupport.TextRenderLayer : CALayer <CALayerDelegate> {
    void /* unknown type, empty encoding */ animationController;
    void /* unknown type, empty encoding */ geometryObserver;
    void /* unknown type, empty encoding */ fragment;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ rawLayout;
    void /* unknown type, empty encoding */ markers;
    void /* unknown type, empty encoding */ updateFlags;
    void /* unknown type, empty encoding */ interactionMetrics;
    void /* unknown type, empty encoding */ segmentLayers;
    void /* unknown type, empty encoding */ effectToSegmentsIndices;
    void /* unknown type, empty encoding */ effectIdentifiers;
    void /* unknown type, empty encoding */ baseFragmentIdentifierMap;
    void /* unknown type, empty encoding */ version;
    void /* unknown type, empty encoding */ sharedDrawingSegments;
    void /* unknown type, empty encoding */ sharedDrawingLayer;
    void /* unknown type, empty encoding */ displacements;
    void /* unknown type, empty encoding */ layoutBounds;
    void /* unknown type, empty encoding */ layoutBoundsNaturalOutsets;
    void /* unknown type, empty encoding */ layoutLineFragmentPadding;
    void /* unknown type, empty encoding */ currentDisplacement;
    void /* unknown type, empty encoding */ activeIdentifiers;
    void /* unknown type, empty encoding */ time;
}

- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)setNeedsDisplay;
- (void)layoutSublayers;
- (id)initWithLayer:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
