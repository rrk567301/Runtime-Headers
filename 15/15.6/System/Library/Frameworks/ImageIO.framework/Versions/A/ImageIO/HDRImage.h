@class NSDictionary, HDRFlexRangeParameters;

@interface HDRImage : NSObject {
    struct CGColorSpace { } *_imageSpace;
    struct CGColorSpace { } *_gainMapSpace;
}

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) unsigned long long width;
@property (readonly, nonatomic) unsigned long long height;
@property (nonatomic) int orientation;
@property (nonatomic) float headroom;
@property (readonly, nonatomic) struct __CVBuffer { } *imageBuffer;
@property (readonly, nonatomic) struct __CVBuffer { } *gainMapBuffer;
@property (nonatomic) int gainMapOrientation;
@property (readonly, nonatomic) struct CGColorSpace { } *colorSpace;
@property (readonly, nonatomic) char hasGainMap;
@property (copy, nonatomic) HDRFlexRangeParameters *flexRangeParams;
@property (readonly, copy, nonatomic) NSDictionary *flexGTCInfo;
@property (nonatomic) int toneMappingMode;

+ (id)tableDataWithFloatValues:(const float *)a0 count:(unsigned long long)a1;
+ (id)gainMapHeadroomFromFlexGTCInfo:(id)a0;
+ (char)getOutputPixelType:(int *)a0 range:(struct { } *)a1 YCCMatrix:(struct { void /* unknown type, empty encoding */ x0[3]; } *)a2 chromaSubsampling:(void *)a3 forBuffer:(struct __CVBuffer { } *)a4;
+ (struct CGImageMetadata { } *)createGainMapMetadataWithHeadroom:(float)a0;
+ (id)curveDataFromFlexGTCInfo:(id)a0;
+ (id)flexRangeParametersWithHeadroom:(float)a0 options:(id)a1;
+ (float)gainMapHeadroomForHDRGain:(float)a0 gainMapValue:(float)a1;
+ (char)getColorTRC:(struct { int x0; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x1; void *x2; } *)a0 matrix:(struct { struct { void /* unknown type, empty encoding */ x0[3]; } x0; BOOL x1; } *)a1 toneMapping:(struct { int x0; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x1; void *x2; struct { struct { void /* unknown type, empty encoding */ x0[3]; } x0; BOOL x1; } x3; struct { int x0; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x1; void *x2; } x4; } *)a2 fromEDR:(float)a3 toTargetSpace:(struct CGColorSpace { } *)a4;
+ (char)getColorTRC:(struct { int x0; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x1; void *x2; } *)a0 matrix:(struct { struct { void /* unknown type, empty encoding */ x0[3]; } x0; BOOL x1; } *)a1 toneMapping:(struct { int x0; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x1; void *x2; struct { struct { void /* unknown type, empty encoding */ x0[3]; } x0; BOOL x1; } x3; struct { int x0; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x1; void *x2; } x4; } *)a2 fromSourceSpace:(struct CGColorSpace { } *)a3 headroom:(float)a4 toEDR:(float)a5 toneMappingMode:(int)a6;
+ (char)getColorTRC:(struct { int x0; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x1; void *x2; } *)a0 matrix:(struct { struct { void /* unknown type, empty encoding */ x0[3]; } x0; BOOL x1; } *)a1 toneMapping:(struct { int x0; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x1; void *x2; struct { struct { void /* unknown type, empty encoding */ x0[3]; } x0; BOOL x1; } x3; struct { int x0; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x1; void *x2; } x4; } *)a2 fromSourceSpace:(struct CGColorSpace { } *)a3 toTargetSpace:(struct CGColorSpace { } *)a4 options:(id)a5;
+ (char)getComponentMin:(void *)a0 componentMax:(void *)a1 forPixelType:(int)a2 componentRange:(id)a3 bitDepth:(unsigned short)a4;
+ (char)getGainMapHeadroom:(float *)a0 fromFlexGTCInfo:(id)a1;
+ (char)getGainMapHeadroom:(float *)a0 fromMetadata:(struct CGImageMetadata { } *)a1;
+ (char)getGainMapHeadroom:(float *)a0 fromProperties:(id)a1;
+ (char)getGainMapMin:(float *)a0 max:(float *)a1 fromFlexGTCInfo:(id)a2;
+ (char)getGainMapVersionMajor:(unsigned long long *)a0 minor:(unsigned long long *)a1 fromMetadata:(struct CGImageMetadata { } *)a2;
+ (char)getInputPixelRange:(struct { } *)a0 forPixelType:(int)a1 componentRange:(id)a2 bitDepth:(unsigned short)a3 isFloat:(char)a4;
+ (char)getInputPixelType:(int *)a0 range:(struct { } *)a1 YCCMatrix:(struct { void /* unknown type, empty encoding */ x0[3]; } *)a2 forBuffer:(struct __CVBuffer { } *)a3;
+ (char)getInputYCCMatrix:(struct { void /* unknown type, empty encoding */ x0[3]; } *)a0 forYCCMatrixString:(id)a1;
+ (char)getOutputPixelRange:(struct { } *)a0 forPixelType:(int)a1 componentRange:(id)a2 bitDepth:(unsigned short)a3 isFloat:(char)a4;
+ (char)getOutputYCCMatrix:(struct { void /* unknown type, empty encoding */ x0[3]; } *)a0 forYCCMatrixString:(id)a1;
+ (char)getPixelType:(int *)a0 YCCMatrixString:(id *)a1 chromaSubsampling:(void *)a2 componentRange:(id *)a3 bitDepth:(unsigned short *)a4 isFloat:(char *)a5 forBuffer:(struct __CVBuffer { } *)a6;
+ (char)supportsSourceColorSpace:(struct CGColorSpace { } *)a0;
+ (char)supportsTargetColorSpace:(struct CGColorSpace { } *)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void /* unknown type, empty encoding */)imageSize;
- (char)getOutputGainMapPixelTransform:(struct { int x0; struct { } x1; struct { void /* unknown type, empty encoding */ x0[3]; } x2; } *)a0;
- (id)flexGTCInfoWithCurveData:(id)a0 headroom:(float)a1 identifier:(id)a2;
- (struct CGColorSpace { } *)gainMapColorSpace;
- (void /* unknown type, empty encoding */)gainMapSize;
- (char)getInputColorTransform:(struct { struct { int x0; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x1; void *x2; } x0; struct { int x0; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x1; void *x2; struct { struct { void /* unknown type, empty encoding */ x0[3]; } x0; BOOL x1; } x3; struct { int x0; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x1; void *x2; } x4; } x1; struct { struct { void /* unknown type, empty encoding */ x0[3]; } x0; BOOL x1; } x2; } *)a0 toEDR:(float)a1;
- (char)getInputGainMapColorMatrix:(struct { struct { void /* unknown type, empty encoding */ x0[3]; } x0; BOOL x1; } *)a0;
- (char)getInputGainMapPixelTransform:(struct { int x0; struct { } x1; struct { void /* unknown type, empty encoding */ x0[3]; } x2; struct { void /* unknown type, empty encoding */ x0[3]; } x3; } *)a0;
- (char)getInputGainMapTransform:(struct { struct { int x0; struct { } x1; struct { void /* unknown type, empty encoding */ x0[3]; } x2; struct { void /* unknown type, empty encoding */ x0[3]; } x3; } x0; struct { struct { int x0; struct { } x1; } x0; struct { struct { void /* unknown type, empty encoding */ x0[3]; } x0; BOOL x1; } x1; } x1; } *)a0 toEDR:(float)a1 needsGainMap:(char *)a2 baseIsSDR:(char *)a3;
- (char)getInputImagePixelTransform:(struct { int x0; struct { } x1; struct { void /* unknown type, empty encoding */ x0[3]; } x2; struct { void /* unknown type, empty encoding */ x0[3]; } x3; } *)a0;
- (char)getInputImageTransform:(struct { struct { int x0; struct { } x1; struct { void /* unknown type, empty encoding */ x0[3]; } x2; struct { void /* unknown type, empty encoding */ x0[3]; } x3; } x0; struct { struct { int x0; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x1; void *x2; } x0; struct { int x0; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x1; void *x2; struct { struct { void /* unknown type, empty encoding */ x0[3]; } x0; BOOL x1; } x3; struct { int x0; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x1; void *x2; } x4; } x1; struct { struct { void /* unknown type, empty encoding */ x0[3]; } x0; BOOL x1; } x2; } x1; } *)a0 toEDR:(float)a1;
- (char)getInputTransform:(struct { unsigned int x0; struct { struct { int x0; struct { } x1; struct { void /* unknown type, empty encoding */ x0[3]; } x2; struct { void /* unknown type, empty encoding */ x0[3]; } x3; } x0; struct { struct { int x0; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x1; void *x2; } x0; struct { int x0; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x1; void *x2; struct { struct { void /* unknown type, empty encoding */ x0[3]; } x0; BOOL x1; } x3; struct { int x0; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x1; void *x2; } x4; } x1; struct { struct { void /* unknown type, empty encoding */ x0[3]; } x0; BOOL x1; } x2; } x1; } x1; struct { struct { int x0; struct { } x1; struct { void /* unknown type, empty encoding */ x0[3]; } x2; struct { void /* unknown type, empty encoding */ x0[3]; } x3; } x0; struct { struct { int x0; struct { } x1; } x0; struct { struct { void /* unknown type, empty encoding */ x0[3]; } x0; BOOL x1; } x1; } x1; } x2; } *)a0 toEDR:(float)a1;
- (char)getOutputColorTransform:(struct { struct { struct { void /* unknown type, empty encoding */ x0[3]; } x0; BOOL x1; } x0; struct { int x0; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x1; void *x2; struct { struct { void /* unknown type, empty encoding */ x0[3]; } x0; BOOL x1; } x3; struct { int x0; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x1; void *x2; } x4; } x1; struct { int x0; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x1; void *x2; } x2; } *)a0 fromEDR:(float)a1;
- (char)getOutputGainMapColorMatrix:(struct { struct { void /* unknown type, empty encoding */ x0[3]; } x0; BOOL x1; } *)a0 lumaWeights:(void *)a1 isLuma:(char *)a2;
- (char)getOutputGainMapTransform:(struct { struct { struct { int x0; struct { } x1; } x0; struct { struct { void /* unknown type, empty encoding */ x0[3]; } x0; BOOL x1; } x1; BOOL x2; } x0; struct { int x0; struct { } x1; struct { void /* unknown type, empty encoding */ x0[3]; } x2; } x1; } *)a0 fromEDR:(float)a1 needsGainMap:(char *)a2 baseIsSDR:(char *)a3;
- (char)getOutputImagePixelTransform:(struct { int x0; struct { } x1; struct { void /* unknown type, empty encoding */ x0[3]; } x2; } *)a0;
- (char)getOutputImageTransform:(struct { struct { struct { struct { void /* unknown type, empty encoding */ x0[3]; } x0; BOOL x1; } x0; struct { int x0; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x1; void *x2; struct { struct { void /* unknown type, empty encoding */ x0[3]; } x0; BOOL x1; } x3; struct { int x0; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x1; void *x2; } x4; } x1; struct { int x0; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x1; void *x2; } x2; } x0; struct { int x0; struct { } x1; struct { void /* unknown type, empty encoding */ x0[3]; } x2; } x1; } *)a0 fromEDR:(float)a1;
- (char)getOutputTransform:(struct { unsigned int x0; struct { struct { struct { struct { void /* unknown type, empty encoding */ x0[3]; } x0; BOOL x1; } x0; struct { int x0; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x1; void *x2; struct { struct { void /* unknown type, empty encoding */ x0[3]; } x0; BOOL x1; } x3; struct { int x0; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x1; void *x2; } x4; } x1; struct { int x0; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x1; void *x2; } x2; } x0; struct { int x0; struct { } x1; struct { void /* unknown type, empty encoding */ x0[3]; } x2; } x1; } x1; struct { struct { struct { int x0; struct { } x1; } x0; struct { struct { void /* unknown type, empty encoding */ x0[3]; } x0; BOOL x1; } x1; BOOL x2; } x0; struct { int x0; struct { } x1; struct { void /* unknown type, empty encoding */ x0[3]; } x2; } x1; } x2; } *)a0 fromEDR:(float)a1;
- (id)initWithImageBuffer:(struct __CVBuffer { } *)a0;
- (id)initWithImageBuffer:(struct __CVBuffer { } *)a0 gainMapBuffer:(struct __CVBuffer { } *)a1;
- (id)initWithImageBuffer:(struct __CVBuffer { } *)a0 gainMapBuffer:(struct __CVBuffer { } *)a1 flexRangeParameters:(id)a2;
- (id)initWithImageBuffer:(struct __CVBuffer { } *)a0 gainMapBuffer:(struct __CVBuffer { } *)a1 gainMapMetadata:(struct CGImageMetadata { } *)a2 imageProperties:(id)a3;
- (id)inputTransformToEDR:(float)a0;
- (id)outputTransformFromEDR:(float)a0;

@end
