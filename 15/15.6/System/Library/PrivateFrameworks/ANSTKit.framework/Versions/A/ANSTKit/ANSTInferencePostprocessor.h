@class NSArray, NSMutableDictionary;

@interface ANSTInferencePostprocessor : NSObject {
    NSMutableDictionary *_inputTensorData;
    NSMutableDictionary *_inputPixelBuffers;
    NSMutableDictionary *_outputTensorData;
    NSMutableDictionary *_outputPixelBuffers;
}

@property (readonly, copy, nonatomic) NSArray *inferenceInputTensorDescriptors;
@property (readonly, copy, nonatomic) NSArray *inferenceInputPixelBufferDescriptors;
@property (readonly, copy, nonatomic) NSArray *inferenceOutputTensorDescriptors;
@property (readonly, copy, nonatomic) NSArray *inferenceOutputPixelBufferDescriptors;
@property (readonly, copy, nonatomic) NSArray *processedOutputTensorDescriptors;
@property (readonly, copy, nonatomic) NSArray *processedOutputPixelBufferDescriptors;
@property (readonly, copy, nonatomic) NSArray *inferenceInputDescriptors;
@property (readonly, copy, nonatomic) NSArray *inferenceOutputDescriptors;
@property (readonly, copy, nonatomic) NSArray *processedOutputDescriptors;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (char)_validateDescriptor:(id)a0 usingAllowedDescriptors:(id)a1 withError:(id *)a2;
- (char)_validatePixelBuffer:(id)a0 forDescriptor:(id)a1 usingAllowedDescriptors:(id)a2 withError:(id *)a3;
- (char)_validateTensorData:(id)a0 forDescriptor:(id)a1 usingAllowedDescriptors:(id)a2 withError:(id *)a3;
- (id)initWithInferenceInputDescriptors:(id)a0 inferenceOutputDescriptors:(id)a1 processedOutputDescriptors:(id)a2 error:(id *)a3;
- (id)inputPixelBufferForDescriptorNamed:(id)a0;
- (id)inputTensorDataForDescriptorNamed:(id)a0;
- (id)outputPixelBufferForDescriptorNamed:(id)a0;
- (id)outputTensorDataForDescriptorNamed:(id)a0;
- (char)processWithError:(id *)a0;
- (char)setInputPixelBuffer:(id)a0 forInferenceInputDescriptor:(id)a1 withError:(id *)a2;
- (char)setInputPixelBuffer:(id)a0 forInferenceOutputDescriptor:(id)a1 withError:(id *)a2;
- (char)setInputTensorData:(id)a0 forInferenceInputDescriptor:(id)a1 withError:(id *)a2;
- (char)setInputTensorData:(id)a0 forInferenceOutputDescriptor:(id)a1 withError:(id *)a2;
- (char)setOutputPixelBuffer:(id)a0 forProcessedOutputDescriptor:(id)a1 withError:(id *)a2;
- (char)setOutputTensorData:(id)a0 forProcessedOutputDescriptor:(id)a1 withError:(id *)a2;

@end
