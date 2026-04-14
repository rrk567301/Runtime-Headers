@class VisionCoreE5RTInferenceFunctionDescriptor;

@interface CHStyleEncoderModelZHJAE5ML : CHE5MLModel {
    VisionCoreE5RTInferenceFunctionDescriptor *_functionDescriptor;
}

+ (id)modelHash;
+ (id)inputNames;
+ (id)outputNames;
+ (id)E5RTFunctionDescriptorForFunction:(id)a0 inProgramLibrary:(id)a1 error:(id *)a2;
+ (id)defaultURLOfModelInThisBundle;

- (void).cxx_destruct;
- (id)createExecutionContext;
- (id)initWithProgramLibrary:(id)a0 functionName:(id)a1 error:(id *)a2;
- (id)initWithProgramLibrary:(id)a0 width:(unsigned long long)a1;

@end
