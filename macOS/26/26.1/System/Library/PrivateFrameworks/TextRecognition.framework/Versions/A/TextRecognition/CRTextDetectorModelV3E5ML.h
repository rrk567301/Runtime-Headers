@class NSUUID, VisionCoreE5RTInferenceFunctionDescriptor;

@interface CRTextDetectorModelV3E5ML : NSObject {
    VisionCoreE5RTInferenceFunctionDescriptor *_functionDescriptor;
}

@property (retain) NSUUID *owner;

+ (id)defaultURLOfModelInThisBundle;
+ (id)E5RTFunctionDescriptorWithError:(id *)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (id)createExecutionContext;
- (id)initWithConfiguration:(id)a0 owner:(id)a1 error:(id *)a2;
- (id)initWithContentsOfURL:(id)a0 configuration:(id)a1 owner:(id)a2 error:(id *)a3;
- (id)initWithContentsOfURL:(id)a0 owner:(id)a1 error:(id *)a2;

@end
