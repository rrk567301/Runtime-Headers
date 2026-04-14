@interface SiriSharedUI.AppleIntelligenceRenderer : NSObject <MTKViewDelegate> {
    void /* unknown type, empty encoding */ device;
    void /* unknown type, empty encoding */ commandQueue;
    void /* unknown type, empty encoding */ pipelineState;
    void /* unknown type, empty encoding */ shaderLibrary;
    void /* unknown type, empty encoding */ view;
    void /* unknown type, empty encoding */ startTime;
    void /* unknown type, empty encoding */ rotationPeriod;
    void /* unknown type, empty encoding */ chasePeriod;
    void /* unknown type, empty encoding */ colorPeriod;
    void /* unknown type, empty encoding */ vertexBuffer;
    void /* unknown type, empty encoding */ indexBuffer;
}

- (void).cxx_destruct;
- (id)init;
- (void)mtkView:(id)a0 drawableSizeWillChange:(struct CGSize { double x0; double x1; })a1;
- (void)drawInMTKView:(id)a0;
- (void)setColorPeriod:(float)a0;
- (void)setChasePeriod:(float)a0;
- (void)setRotationPeriod:(float)a0;

@end
