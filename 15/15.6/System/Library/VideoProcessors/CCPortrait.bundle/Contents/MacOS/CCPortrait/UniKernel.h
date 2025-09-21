@class UniRunInfo, UniKernelInternal, NSMapTable, UniContext, NSNumber;
@protocol MTLDevice;

@interface UniKernel : NSObject

@property (retain) UniKernelInternal *kernel;
@property (retain) UniRunInfo *runInfo;
@property (retain) UniContext *context;
@property (retain) NSMapTable *inputs;
@property (retain, nonatomic) NSNumber *scale;
@property (retain) id<MTLDevice> device;
@property (retain) NSNumber *preferredOutputFormat;
@property (copy, nonatomic) id /* block */ roiCallback;

+ (id)_outputTextureForTexture:(id)a0 force:(char)a1;
+ (id)_mtlTextureForImage:(id)a0;
+ (char)_shouldEmulate_sRGBForTexture:(id)a0;
+ (id)generateCIImage:(id)a0;
+ (BOOL)shouldWriteDebugTextures;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)setValues:(id)a0;
- (id)outputImage:(id)a0;
- (id)getContext;
- (id)run:(id)a0;
- (id)ck;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_findOutputRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })extentForImage:(id)a0;
- (id)inputImageArray;
- (id)outputNameArray;
- (id)initWithName:(id)a0 library:(id)a1 constants:(id)a2;
- (id)_ciImageForInput:(id)a0;
- (id)_findKernelInCache:(id)a0 library:(id)a1 constants:(id)a2;
- (id)_findKernelInCache:(id)a0 metalLibrary:(id)a1 coreImageLibrary:(id)a2 pipelineLibrary:(id)a3 constants:(id)a4;
- (id)_flattenDict:(id)a0;
- (id)_inputOrOutputArray:(char)a0;
- (id)_inputOrOutputBufferArray:(char)a0;
- (id)_intputOrOutputNameArray:(char)a0;
- (id)_mtlTextureForImage:(id)a0;
- (unsigned long long)_outputFormatForImage:(id)a0;
- (int)_outputFormatForMetalFormat:(unsigned long long)a0;
- (id)_populateStruct:(id)a0 values:(id)a1;
- (int)_promoteFormatForCoreImage:(int)a0;
- (id)_regionForTexture:(id)a0 name:(id)a1;
- (void)_replace_sRGBTexturesIfNeeded;
- (void)_setNumber:(id)a0 forEncoder:(id)a1 atIndex:(unsigned long long)a2;
- (void)_setRunInfoBasedOnCoreImage;
- (void)_writeDebugTextures:(id)a0 filesWritten:(id)a1;
- (id)getRenderOrder;
- (id)imageByApplyingParameters:(id)a0;
- (id)imageByApplyingParameters:(id)a0 extent:(id)a1;
- (id)imageByApplyingParameters:(id)a0 runInfo:(id)a1;
- (id)initWithName:(id)a0 library:(id)a1;
- (id)initWithName:(id)a0 metalLibrary:(id)a1 coreImageLibrary:(id)a2 pipelineLibrary:(id)a3 constants:(id)a4;
- (id)inputBufferArray;
- (id)inputNameArray;
- (unsigned int)kDebugFlagForKernel;
- (id)makeBufferCpuAccessible:(id)a0;
- (id)mk;
- (id)outputBufferArray;
- (id)outputImageArray;
- (id)outputImageOfSize:(id)a0;
- (void)writeDebugTextures:(id)a0 filesWritten:(id)a1;

@end
