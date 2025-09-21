@class CUIVectorGlyphPath, NSData;

@interface CUIVectorGlyphMutator : NSObject

@property (retain, nonatomic) CUIVectorGlyphPath *originPath;
@property (retain, nonatomic) CUIVectorGlyphPath *ultralightPath;
@property (retain, nonatomic) CUIVectorGlyphPath *blackPath;
@property (nonatomic) double pointSize;
@property (nonatomic) struct { double *pointComponents; unsigned long long numPoints; } originPoints;
@property (nonatomic) struct { double *deltaComponents; unsigned long long numDeltas; } ultralightDeltas;
@property (nonatomic) struct { double *deltaComponents; unsigned long long numDeltas; } blackDeltas;
@property (retain, nonatomic) NSData *originClipStrokeKeyframes;
@property (retain, nonatomic) NSData *ultralightClipStrokeKeyframes;
@property (retain, nonatomic) NSData *blackClipStrokeKeyframes;

+ (double *)realloc_cgfloat_array:(double *)a0 withNewCount:(unsigned long long)a1;
+ (id)_interpolationData;
+ (struct { double x0; double x1; })scalarsForGlyphContinuousWeight:(double)a0 glyphContinuousSize:(double)a1;
+ (struct { double *x0; unsigned long long x1; })deltaArrayFrom:(struct { double *x0; unsigned long long x1; })a0 to:(struct { double *x0; unsigned long long x1; })a1;
+ (struct { double *x0; unsigned long long x1; })createInterpolatedPointsFromPoints:(struct { double *x0; unsigned long long x1; })a0 ultralightDeltas:(struct { double *x0; unsigned long long x1; })a1 blackDeltas:(struct { double *x0; unsigned long long x1; })a2 withScalars:(struct { double x0; double x1; })a3;
+ (id)createInterpolatedFloatsFromFloats:(id)a0 ultralightDeltas:(id)a1 blackDeltas:(id)a2 withScalars:(struct { double x0; double x1; })a3;
+ (struct { double x0; double x1; })transformForGlyphSize:(long long)a0;
+ (id)createFloatDeltasFrom:(id)a0 to:(id)a1;
+ (struct { double *x0; unsigned long long x1; })pointArrayFromPath:(struct CGPath { } *)a0;
+ (struct { double x0; double x1; })scalarsForGlyphWeight:(long long)a0 glyphSize:(long long)a1;
+ (struct { double x0; double x1; })_scalarsForGlyphContinuousWeight:(double)a0 inDictionary:(id)a1 shouldClamp:(BOOL)a2;
+ (struct { double x0; double x1; })transformForGlyphContinuousSize:(double)a0;

- (void)convertDistance0:(float)a0 distance1:(float)a1 elementIndex0Out:(unsigned long long *)a2 distance0Out:(float *)a3 elementIndex1Out:(unsigned long long *)a4 distance1Out:(float *)a5 subpath0:(unsigned long long)a6 subpath1:(unsigned long long)a7 data:(struct CUIVectorGlyphPathLengthData { float x0; float *x1; struct CUIVectorGlyphPathElementLength *x2; unsigned long long *x3; unsigned long long x4; unsigned long long x5; })a8;
- (void)dealloc;
- (id)clipStrokeKeyframesForPath:(id)a0 scalars:(struct { double x0; double x1; })a1;
- (struct { double *x0; unsigned long long x1; })applyDeltasWithScalars:(struct { double x0; double x1; })a0 andTransform:(struct { double x0; double x1; })a1;
- (struct CGPath { } *)cgPathFrom:(struct { double *x0; unsigned long long x1; })a0;
- (id)initWithPointSize:(double)a0 regular:(id)a1 ultralight:(id)a2 black:(id)a3;
- (struct { double *x0; unsigned long long x1; })applyDeltasWithScalars:(struct { double x0; double x1; })a0;
- (id)pathForScalars:(struct { double x0; double x1; })a0;
- (id)pathForScalars:(struct { double x0; double x1; })a0 andTransform:(struct { double x0; double x1; })a1;

@end
