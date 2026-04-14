@interface PKGSystemStatusIndicatorsShim : NSObject {
    void /* unknown type, empty encoding */ ccFrameMetadata;
    void /* unknown type, empty encoding */ displayItemGenerator;
    void /* unknown type, empty encoding */ windowSize;
    void /* unknown type, empty encoding */ suppressIndicatorsOnExternalDisplays;
    void /* unknown type, empty encoding */ displaysNeedingSecureIndicatorFlush;
    void /* unknown type, empty encoding */ lastRebuiltIndicators;
    void /* unknown type, empty encoding */ containers;
    void /* unknown type, empty encoding */ hasBuiltInDisplay;
    void /* unknown type, empty encoding */ needsLayerRebuild;
}

@property (nonatomic) BOOL suspendUpdates;
@property (nonatomic) BOOL globalEnableSecureIndicators;

+ (double)additionalBarInsetForModePixelWidth:(double)a0 pixelHeight:(double)a1 pointWidth:(double)a2 pointHeight:(double)a3 scale:(double)a4 physicalSize:(struct CGSize { double x0; double x1; })a5;

- (void).cxx_destruct;
- (id)init;
- (id)initWithWindowSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)displayNeedsSecureIndicatorFlush:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; })a0;
- (BOOL)hasIndicatorWindows;
- (void)overrideIndicatorSize:(float)a0;
- (void)rebuildDisplays:(BOOL)a0;
- (void)rebuildLayers;
- (unsigned int)rebuildOcclusionMetadata;
- (void)setDisplay:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; })a0 needsSecureIndicatorFlush:(BOOL)a1;
- (void)updateForIndicators:(unsigned int)a0;

@end
