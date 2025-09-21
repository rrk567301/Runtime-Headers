@class NSString, CMIStyleEngineImage;
@protocol MTLComputePipelineState, MTLBuffer;

@interface CMIStyleEngineCreateISPSTENCoefficients : NSObject <CMIStyleEngineProcessingStage> {
    id<MTLComputePipelineState> _computePipelineState[1];
    struct { void /* unknown type, empty encoding */ spotlightCount; unsigned short weightPlaneCount; unsigned short polynomialCount; float globalMixFactor; union { struct { void /* unknown type, empty encoding */ r; void /* unknown type, empty encoding */ g; void /* unknown type, empty encoding */ b; void /* unknown type, empty encoding */ rr; void /* unknown type, empty encoding */ gg; void /* unknown type, empty encoding */ bb; void /* unknown type, empty encoding */ rg; void /* unknown type, empty encoding */ gb; void /* unknown type, empty encoding */ rb; void /* unknown type, empty encoding */ c; } ; void /* unknown type, empty encoding */ values[10]; } gainShift; unsigned long long outputBufferBytesPerRow; } _params;
}

@property (weak, nonatomic) id<MTLBuffer> inputCoefficients;
@property (weak, nonatomic) CMIStyleEngineImage *outputCoefficients;
@property (nonatomic) void /* unknown type, empty encoding */ spotlightCount;
@property (nonatomic) unsigned int weightPlaneCount;
@property (nonatomic) unsigned int polynomialCount;
@property (nonatomic) void /* unknown type, empty encoding */ gainShiftValueR;
@property (nonatomic) void /* unknown type, empty encoding */ gainShiftValueG;
@property (nonatomic) void /* unknown type, empty encoding */ gainShiftValueB;
@property (nonatomic) void /* unknown type, empty encoding */ gainShiftValueRR;
@property (nonatomic) void /* unknown type, empty encoding */ gainShiftValueGG;
@property (nonatomic) void /* unknown type, empty encoding */ gainShiftValueBB;
@property (nonatomic) void /* unknown type, empty encoding */ gainShiftValueRG;
@property (nonatomic) void /* unknown type, empty encoding */ gainShiftValueGB;
@property (nonatomic) void /* unknown type, empty encoding */ gainShiftValueRB;
@property (nonatomic) void /* unknown type, empty encoding */ gainShiftValueConst;
@property (nonatomic) float globalLinearSystemMixFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)a0;
- (int)_compileShaders:(id)a0;
- (void)_setDefaultGainShifts;
- (int)enqueueToCommandBuffer:(id)a0;

@end
