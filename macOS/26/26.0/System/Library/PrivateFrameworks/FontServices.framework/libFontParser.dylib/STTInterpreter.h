@interface STTInterpreter : NSObject {
    void /* unknown type, empty encoding */ maxp;
    void /* unknown type, empty encoding */ parameters;
    void /* unknown type, empty encoding */ _gs;
    void /* unknown type, empty encoding */ _idefs;
    void /* unknown type, empty encoding */ _fdefs;
    void /* unknown type, empty encoding */ _storageArea;
    void /* unknown type, empty encoding */ _cvt;
    void /* unknown type, empty encoding */ variationCoord;
    void /* unknown type, empty encoding */ _scaleFactors;
    void /* unknown type, empty encoding */ ranFpgm;
    void /* unknown type, empty encoding */ ranPrep;
    void /* unknown type, empty encoding */ haveSetScaleFactors;
    void /* unknown type, empty encoding */ _twilightZone;
    void /* unknown type, empty encoding */ _glyphZone;
    void /* unknown type, empty encoding */ running;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)exportToParBlock:(struct fnt_ParameterBlock { int x0; int x1; int x2; int x3; int x4; int x5; void /* function */ *x6; int x7; int x8; short x9; short x10; short x11; short x12; short x13; short x14; char x15; unsigned char x16; } *)a0;
- (id)initWithMaxp:(struct sfntMaxProfileTable { int x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11; unsigned short x12; unsigned short x13; unsigned short x14; })a0 cvtCount:(unsigned short)a1;
- (BOOL)runFpgmWithInstructions:(const char *)a0 count:(int)a1 error:(id *)a2;
- (BOOL)runGlyphProgramWithInstructions:(const char *)a0 count:(int)a1 glyph:(const struct fnt_ElementType { int x0; int x1; int *x2; int *x3; unsigned short *x4; unsigned short *x5; char *x6; char *x7; int *x8; int *x9; short *x10; short *x11; int x12; struct unscaledBounds { short x0; short x1; short x2; short x3; } x13; struct unscaledMetrics { short x0; short x1; } x14; struct unscaledMetrics { short x0; short x1; } x15; int x16; int x17; short *x18; } *)a2 unscaledOutlineIsWrong:(BOOL)a3 parBlock:(struct fnt_ParameterBlock { int x0; int x1; int x2; int x3; int x4; int x5; void /* function */ *x6; int x7; int x8; short x9; short x10; short x11; short x12; short x13; short x14; char x15; unsigned char x16; } *)a4;
- (BOOL)runPrepWithInstructions:(const char *)a0 count:(int)a1 error:(id *)a2;
- (void)setCVT:(const int *)a0 count:(long long)a1;
- (void)setScaleFactorsWithXStretch:(int)a0 yStretch:(int)a1 unitsPerEm:(short)a2 pointSize:(int)a3 cvtScale:(int)a4 isRotated:(BOOL)a5 isStretched:(BOOL)a6;
- (void)setVariationCoord:(const short *)a0 count:(long long)a1;

@end
