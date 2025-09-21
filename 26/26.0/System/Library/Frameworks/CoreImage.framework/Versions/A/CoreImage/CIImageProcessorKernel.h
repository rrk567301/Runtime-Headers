@interface CIImageProcessorKernel : NSObject

@property (class, readonly) int outputFormat;
@property (class, readonly) BOOL outputIsOpaque;
@property (class, readonly) BOOL synchronizeInputs;

+ (BOOL)canReduceOutputChannels;
+ (int)formatForInputAtIndex:(int)a0;
+ (BOOL)allowCompressedInputsAndOutputs;
+ (BOOL)onlyUsesMetal;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })roiForInput:(int)a0 arguments:(id)a1 outputRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (BOOL)processWithInputs:(id)a0 arguments:(id)a1 output:(id)a2 error:(id *)a3;
+ (id)logDescription:(id)a0;
+ (unsigned long long)_digestForArgs:(id)a0;
+ (BOOL)allowSRGBTranferFuntionOnOutput;
+ (int)_call_formatForInputAtIndex:(int)a0 arguments:(id)a1;
+ (int)_call_outputFormatWithArguments:(id)a0;
+ (BOOL)allowPartialOutputRegion;
+ (BOOL)allowSRGBTranferFuntionOnInputAtIndex:(int)a0;
+ (id)applyWithExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inputs:(id)a1 arguments:(id)a2 error:(id *)a3;
+ (id)applyWithExtents:(id)a0 inputs:(id)a1 arguments:(id)a2 error:(id *)a3;
+ (BOOL)canOutputLossyCompressed;
+ (int)formatForInputAtIndex:(int)a0 arguments:(id)a1;
+ (int)outputFormatAtIndex:(int)a0 arguments:(id)a1;
+ (int)outputFormatWithArguments:(id)a0;
+ (BOOL)processWithInputs:(id)a0 arguments:(id)a1 outputs:(id)a2 error:(id *)a3;
+ (id)roiTileArrayForInput:(int)a0 arguments:(id)a1 outputRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (BOOL)skipFormatChecks;

@end
