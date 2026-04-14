@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface VCRateControlMachineLearningInference : VCObject {
    struct e5rt_program_library { } *_library;
    NSObject<OS_dispatch_queue> *_compilationQueue;
    unsigned char _setupStatus;
    NSString *_modelPath;
    struct e5rt_execution_stream_operation { } *_executionStreamOperation;
    struct e5rt_execution_stream { } *_stream;
    float *_states;
    float *_index;
    float *_logits;
    float *_value;
    float _probabilities[638];
    float _entropyOutput;
}

+ (id)internalModelPath;

- (void)dealloc;
- (id)initWithModelPath:(id)a0;
- (void)compileModel;
- (void)createStreamOperation;
- (void)logSetupError;
- (void)setUpBufferPointer:(const char *)a0 portType:(unsigned char)a1 io_array:(void **)a2;
- (void)setUpCacheWithInputPortName:(char *)a0 outputPortName:(char *)a1;
- (void)setUpModel;
- (void)setupIOBuffersAndCreateStream;

@end
