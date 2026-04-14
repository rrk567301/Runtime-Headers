@interface CIImageProcessorKernel : NSObject

@property (class, readonly) int outputFormat;
@property (class, readonly) BOOL outputIsOpaque;
@property (class, readonly) BOOL synchronizeInputs;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })roiForInput:(int)a0 arguments:(id)a1 outputRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (BOOL)processWithInputs:(id)a0 arguments:(id)a1 output:(id)a2 error:(id *)a3;
+ (BOOL)allowPartialOutputRegion;
+ (int)formatForInputAtIndex:(int)a0;
+ (BOOL)canReduceOutputChannels;
+ (BOOL)allowCompressedInputsAndOutputs;
+ (BOOL)allowSRGBTranferFuntionOnInputAtIndex:(int)a0;
+ (BOOL)allowSRGBTranferFuntionOnOutput;
+ (BOOL)skipFormatChecks;
+ (id)applyWithExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inputs:(id)a1 arguments:(id)a2 error:(id *)a3;
+ (int)outputFormatWithArguments:(id)a0;
+ (int)formatForInputAtIndex:(int)a0 arguments:(id)a1;
+ (BOOL)canOutputLossyCompressed;
+ (unsigned long long)_digestForArgs:(id)a0;

@end
