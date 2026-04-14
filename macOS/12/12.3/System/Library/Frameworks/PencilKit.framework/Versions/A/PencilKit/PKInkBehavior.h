@class PKInkFeatheringDescriptor, NSString, PKInkParticleDescriptor, NSArray, NSMutableArray, PKInkRenderingDescriptor, PKInkSmoothingDescriptor;

@interface PKInkBehavior : NSObject {
    BOOL _timeDependent;
    BOOL _usesAzimuthOrAltitude;
    BOOL _showBrushIndicator;
    double _rulerOffsetScale;
    double _rulerOffsetConstant;
    BOOL _variableSnappedWidth;
    NSMutableArray *_cachedRadiusFunctions;
    NSMutableArray *_cachedOpacityFunctions;
    NSMutableArray *_cachedEdgeWidthFunctions;
    NSMutableArray *_cachedAspectRatioFunctions;
    struct unique_ptr<PKFunction, std::default_delete<PKFunction>> { struct __compressed_pair<PKFunction *, std::default_delete<PKFunction>> { struct PKFunction *__value_; } __ptr_; } _weightFunction;
    struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> { struct PKOutputFunction *__begin_; struct PKOutputFunction *__end_; struct __compressed_pair<PKOutputFunction *, std::allocator<PKOutputFunction>> { struct PKOutputFunction *__value_; } __end_cap_; } _radiusOutput;
    struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> { struct PKOutputFunction *__begin_; struct PKOutputFunction *__end_; struct __compressed_pair<PKOutputFunction *, std::allocator<PKOutputFunction>> { struct PKOutputFunction *__value_; } __end_cap_; } _opacityOutput;
    struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> { struct PKOutputFunction *__begin_; struct PKOutputFunction *__end_; struct __compressed_pair<PKOutputFunction *, std::allocator<PKOutputFunction>> { struct PKOutputFunction *__value_; } __end_cap_; } _edgeWidthOutput;
    struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> { struct PKOutputFunction *__begin_; struct PKOutputFunction *__end_; struct __compressed_pair<PKOutputFunction *, std::allocator<PKOutputFunction>> { struct PKOutputFunction *__value_; } __end_cap_; } _aspectRatioOutput;
    struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> { struct PKOutputFunction *__begin_; struct PKOutputFunction *__end_; struct __compressed_pair<PKOutputFunction *, std::allocator<PKOutputFunction>> { struct PKOutputFunction *__value_; } __end_cap_; } _brushOpacityOutput;
}

@property (nonatomic, getter=showBrushIndicator, setter=setShowBrushIndicator:) BOOL showBrushIndicator;
@property (nonatomic, setter=setRulerOffsetScale:) double rulerOffsetScale;
@property (nonatomic, setter=setRulerOffsetConstant:) double rulerOffsetConstant;
@property (nonatomic, getter=variableSnappedWidth, setter=setVariableSnappedWidth:) BOOL variableSnappedWidth;
@property (readonly, nonatomic) BOOL immutableVelocity;
@property (nonatomic, getter=isTimeDependent, setter=setTimeDependent:) BOOL timeDependent;
@property (nonatomic, getter=usesAzimuthOrAltitude, setter=setUsesAzimuthOrAltitude:) BOOL usesAzimuthOrAltitude;
@property (readonly, nonatomic) NSString *variant;
@property (readonly, nonatomic) PKInkRenderingDescriptor *renderingDescriptor;
@property (readonly, nonatomic) PKInkParticleDescriptor *particleDescriptor;
@property (readonly, nonatomic) NSArray *inkFunctions;
@property (nonatomic) double blendAlpha;
@property (nonatomic) double targetMultiple;
@property (nonatomic) double baseAlpha;
@property (retain, nonatomic) PKInkSmoothingDescriptor *smoothingDescriptor;
@property (retain, nonatomic) PKInkFeatheringDescriptor *featheringDescriptor;
@property (readonly, nonatomic) BOOL isEraser;

+ (id)arrayFromVector:(struct vector<double, std::allocator<double>> { double *x0; double *x1; struct __compressed_pair<double *, std::allocator<double>> { double *x0; } x2; })a0;
+ (double)inkRadiusOverride;
+ (id)inkFunctionForProperty:(unsigned long long)a0 outputFunctions:(void *)a1 index:(unsigned long long)a2;

- (id)description;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)isEraser;
- (double)radiusForPoint:(struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; double x4; double x5; BOOL x6; long long x7; double x8; BOOL x9; })a0 context:(struct { struct _PKStrokePoint { double x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; } x0; BOOL x1; long long x2; double x3; double x4; double x5; double x6; id x7; unsigned long long x8; } *)a1;
- (double)edgeWidthForPoint:(struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; double x4; double x5; BOOL x6; long long x7; double x8; BOOL x9; })a0 context:(struct { struct _PKStrokePoint { double x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; } x0; BOOL x1; long long x2; double x3; double x4; double x5; double x6; id x7; unsigned long long x8; } *)a1;
- (double)alphaForStrokeColor:(struct CGColor { } *)a0;
- (double)alphaForStroke:(id)a0;
- (id)particleTextureName;
- (double)particleSpacingForRadius:(double)a0;
- (struct _PKStrokePoint { double x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; })outputTimePoint:(struct _PKStrokePoint { double x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; })a0 atTime:(double)a1 stillChanging:(BOOL *)a2;
- (id)initWithRenderingDescriptor:(id)a0 variant:(id)a1;
- (id)inkFunctions;
- (id)inkFunctionsForProperty:(unsigned long long)a0;
- (void *)outputVectorForProperty:(unsigned long long)a0;
- (id)functionsForProperty:(unsigned long long)a0;
- (struct PKOutputFunction { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; struct unique_ptr<PKFunction, std::default_delete<PKFunction>> { struct __compressed_pair<PKFunction *, std::default_delete<PKFunction>> { struct PKFunction *x0; } x0; } x4; })outputFunctionFromInkFunction:(id)a0;
- (double)solve:(void *)a0 forPoint:(struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; double x4; double x5; BOOL x6; long long x7; double x8; BOOL x9; })a1 context:(struct { struct _PKStrokePoint { double x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; } x0; BOOL x1; long long x2; double x3; double x4; double x5; double x6; id x7; unsigned long long x8; } *)a2 weight:(double)a3;
- (double)evaluateWeight:(double)a0;
- (double)solveForTime:(void *)a0 forTime:(double)a1 stillChanging:(BOOL *)a2;
- (void)setWeightFunction:(struct unique_ptr<PKFunction, std::default_delete<PKFunction>> { struct __compressed_pair<PKFunction *, std::default_delete<PKFunction>> { struct PKFunction *x0; } x0; })a0;
- (void)inkFunctionDidChange:(id)a0;
- (void)removeInkFunction:(id)a0;
- (void)addNewInkFunction:(id)a0;
- (void)setRadiusOutput:(struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> { struct PKOutputFunction *x0; struct PKOutputFunction *x1; struct __compressed_pair<PKOutputFunction *, std::allocator<PKOutputFunction>> { struct PKOutputFunction *x0; } x2; })a0;
- (void)setOpacityOutput:(struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> { struct PKOutputFunction *x0; struct PKOutputFunction *x1; struct __compressed_pair<PKOutputFunction *, std::allocator<PKOutputFunction>> { struct PKOutputFunction *x0; } x2; })a0;
- (void)setEdgeWidthOutput:(struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> { struct PKOutputFunction *x0; struct PKOutputFunction *x1; struct __compressed_pair<PKOutputFunction *, std::allocator<PKOutputFunction>> { struct PKOutputFunction *x0; } x2; })a0;
- (void)setAspectRatioOutput:(struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> { struct PKOutputFunction *x0; struct PKOutputFunction *x1; struct __compressed_pair<PKOutputFunction *, std::allocator<PKOutputFunction>> { struct PKOutputFunction *x0; } x2; })a0;
- (void)setBrushOpacityOutput:(struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> { struct PKOutputFunction *x0; struct PKOutputFunction *x1; struct __compressed_pair<PKOutputFunction *, std::allocator<PKOutputFunction>> { struct PKOutputFunction *x0; } x2; })a0;
- (double)brushOpacityForPoint:(struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; double x4; double x5; BOOL x6; long long x7; double x8; BOOL x9; })a0 context:(struct { struct _PKStrokePoint { double x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; } x0; BOOL x1; long long x2; double x3; double x4; double x5; double x6; id x7; unsigned long long x8; } *)a1;
- (struct _PKStrokePoint { double x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; })outputForPoint:(struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; double x4; double x5; BOOL x6; long long x7; double x8; BOOL x9; })a0 context:(struct { struct _PKStrokePoint { double x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; } x0; BOOL x1; long long x2; double x3; double x4; double x5; double x6; id x7; unsigned long long x8; } *)a1;
- (double)rulerOffsetForBaseValues:(struct _PKStrokePoint { double x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; })a0 inputType:(long long)a1 inputScale:(double)a2;

@end
