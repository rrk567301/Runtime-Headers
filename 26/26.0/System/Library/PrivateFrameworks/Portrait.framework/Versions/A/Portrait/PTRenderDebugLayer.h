@interface PTRenderDebugLayer : NSObject

- (id)initWithMetalContext:(id)a0;
- (void)renderTurboMix:(id)a0 inTex:(SEL)a1 inRGBA:(id)a2 outRGBA:(id)a3 valueOffset:(id)a4 valueMinMax:(id)a5 valueAbs:(float)a6 colorRangeMax:(BOOL)a7 channelMultiplier:(float)a8 mixWithRGBFraction:(float)a9 region:(struct PTRegion { struct PTSize { unsigned short x0; unsigned short x1; } x0; })a10;
- (void)dumpDebug:(id)a0 renderRequest:(id)a1 debugTextures:(id)a2;
- (void /* unknown type, empty encoding */)getBiasedDisparityVisualizationRange:(id)a0;
- (void)renderDebugLayer:(id)a0 renderRequest:(id)a1 inDisparityDiff:(id)a2 focusObject:(struct PTFocus { float x0; float x1; float x2; float x3; float x4; float x5; })a3 quality:(int)a4 edgeTolerance:(float)a5 debugTextures:(id)a6 debugRendering:(long long)a7;
- (void)renderTurbo:(id)a0 inTex:(SEL)a1 outRGBA:(id)a2 valueOffset:(id)a3 valueMinMax:(id)a4 valueAbs:(float)a5 colorRangeMax:(BOOL)a6 channelMultiplier:(float)a7 region:(struct PTRegion { struct PTSize { unsigned short x0; unsigned short x1; } x0; })a8;

@end
