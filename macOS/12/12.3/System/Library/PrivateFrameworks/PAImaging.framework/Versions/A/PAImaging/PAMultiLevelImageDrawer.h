@class PAOpenGLContext, PADisplay, PAContentTransform, PAImageDrawStatistics;

@interface PAMultiLevelImageDrawer : NSObject {
    BOOL _debugImageLevels;
}

@property (readonly, nonatomic) PAOpenGLContext *context;
@property (retain, nonatomic) PADisplay *display;
@property (retain, nonatomic) PAContentTransform *transform;
@property (nonatomic) BOOL recordStatistics;
@property (readonly, nonatomic) PAImageDrawStatistics *statistics;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)drawImage:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)drawImage:(id)a0 inRegion:(id)a1;
- (id)_drawImage:(id)a0 region:(id)a1;
- (BOOL)_debugImageLevels;
- (BOOL)_debugShouldHideImageLevel:(unsigned long long)a0;
- (id)_drawImage:(id)a0 fromLevel:(unsigned long long)a1 region:(id)a2;
- (id)_drawMultiImage:(id)a0 foregroundLevel:(unsigned long long)a1 backgroundLevel:(unsigned long long)a2 region:(id)a3;
- (id)_drawImage:(id)a0 atLevel:(unsigned long long)a1 withInitLevel:(unsigned long long)a2 region:(id)a3;
- (void)_recordDrawImage:(id)a0 level:(unsigned long long)a1 region:(id)a2;
- (id)_drawMultiImage:(id)a0 foregroundLevel:(unsigned long long)a1 region:(id)a2 backgroundLevel:(unsigned long long)a3;
- (void)_recordDrawMultiImage:(id)a0 foregroundLevel:(unsigned long long)a1 backgroundLevel:(unsigned long long)a2 region:(id)a3;
- (id)_clipRegion:(id)a0 toValidImageRegionToDraw:(id)a1;
- (void)_drawTexture:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 orientation:(long long)a3;
- (void)_iterateTextureTileToDrawImage:(id)a0 level:(unsigned long long)a1 inRegion:(id)a2 withProgram:(id)a3 withBlock:(id /* block */)a4;
- (void)_runTileDrawingProgramWithImage:(id)a0 level:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (BOOL)_debugShouldDisplayTileTextureInfo;
- (void)_drawTileTextureDebugInfo:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 orientation:(long long)a3;
- (struct { union { struct { float x0; float x1; float x2; float x3; } x0; struct { float x0; float x1; float x2; float x3; } x1; } x0; })_glVecFromCGRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_drawForegroundTexture:(id)a0 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 orientation:(long long)a2 backgroundTexture:(id)a3 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 orientation:(long long)a5 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6;
- (void)_runMultiTileDrawingProgramWithImage:(id)a0 foregroundLevel:(unsigned long long)a1 backgroundLevel:(unsigned long long)a2 usingBlock:(id /* block */)a3;
- (id)_colorCubeFromImage:(id)a0;
- (id)_instantiateTileDrawingShaderProgramWithColorMatch;
- (id)_instantiateTileDrawingShaderProgramWithNoColorMatch;
- (struct CGSize { double x0; double x1; })_scaleInvForImage:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_modelViewTransformForImage:(id)a0 atLevel:(unsigned long long)a1;
- (BOOL)_debugShouldDisplayLevelColor;
- (struct { union { struct { float x0; float x1; float x2; float x3; } x0; struct { float x0; float x1; float x2; float x3; } x1; } x0; })_channelMask;
- (id)_instantiateMultiTileDrawingShaderProgramWithColorMatch;
- (id)_instantiateMultiTileDrawingShaderProgramWithNoColorMatch;
- (BOOL)_debugShouldDisplayImageTiles;
- (id)_tileDrawingShaderProgramWithColorMatch;
- (id)_tileDrawingShaderProgramWithNoColorMatch;
- (id)_multiTileDrawingShaderProgramWithColorMatch;
- (id)_multiTileDrawingShaderProgramWithNoColorMatch;

@end
