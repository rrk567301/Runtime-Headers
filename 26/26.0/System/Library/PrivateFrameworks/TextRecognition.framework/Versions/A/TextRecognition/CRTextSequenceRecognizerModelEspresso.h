@class NSUUID, NSString, CRNeuralRecognizerConfiguration, NSArray, NSObject, NSError;
@protocol OS_dispatch_queue;

@interface CRTextSequenceRecognizerModelEspresso : CRTextSequenceRecognizerModel {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _submissionLock;
    CRNeuralRecognizerConfiguration *_configuration;
}

@property (retain) NSUUID *owner;
@property (retain) CRNeuralRecognizerConfiguration *recognizerConfiguration;
@property void *context;
@property void *plan;
@property struct { void *plan; int network_index; } network;
@property int engine;
@property int precision;
@property (retain) NSString *currentConfigurationHash;
@property (retain) NSObject<OS_dispatch_queue> *predictionQueue;
@property (readonly, nonatomic) BOOL shouldSaturateInputBatches;
@property (readonly) NSArray *outputNames;

+ (void)_checkCRLogRecognizerInputBatch:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0 width:(unsigned long long)a1;
+ (struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })_createBufferWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 channels:(unsigned long long)a2 batchSize:(unsigned long long)a3 sequenceLength:(unsigned long long)a4;

- (void)dealloc;
- (id)modelFilePath;
- (id)configuration;
- (void).cxx_destruct;
- (void)preheatWithCompletionHandler:(void (^)(NSError *))a0;
- (BOOL)_shouldReconfigurePlanForInput:(id)a0;
- (id)_configurationHashForInput:(id)a0;
- (id)_configurationHashForInput:(id)a0 batchSize:(unsigned long long)a1;
- (BOOL)_configurePlanForInput:(id)a0 error:(id *)a1;
- (void *)_createContextForEngine:(int)a0 configuration:(id)a1;
- (id)_modelConfigurationNameForInput:(id)a0;
- (void)_resetEspressoState;
- (BOOL)_setupContextAndPlanForConfiguration:(id)a0 error:(id *)a1;
- (id)initWithConfiguration:(id)a0 owner:(id)a1 error:(id *)a2;
- (id)outputFromOutputBuffers:(struct vector<espresso_buffer_t, std::allocator<espresso_buffer_t>> { struct *x0; struct *x1; struct *x2; })a0 featureInfo:(id)a1;
- (id)predictFromInputs:(id)a0 error:(id *)a1;
- (void)releaseIntermediateBuffers;

@end
