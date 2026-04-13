@interface CoreHapticsTools.CHTAudioLayer : CoreHapticsTools.CHTLayer {
    void /* unknown type, empty encoding */ highlightLayer;
    void /* unknown type, empty encoding */ backgroundLayer;
    void /* unknown type, empty encoding */ eventShapeLayers;
    void /* unknown type, empty encoding */ solidBorderLayer;
    void /* unknown type, empty encoding */ dashedBorderLayer;
}

- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (id)initWithLayer:(id)a0;

@end
