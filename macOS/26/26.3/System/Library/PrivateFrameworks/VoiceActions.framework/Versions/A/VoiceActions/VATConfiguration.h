@class DecoderConfig, OS_os_log, SecondPassConfig, RuntimeConfig, NSString, NeuralNetworkConfig, FeatureExtractorConfig;

@interface VATConfiguration : NSObject

@property (class, nonatomic, readonly) OS_os_log *logger;

@property (nonatomic, retain) NeuralNetworkConfig *neuralNetwork;
@property (nonatomic, retain) FeatureExtractorConfig *featureExtractor;
@property (nonatomic, retain) DecoderConfig *decoder;
@property (nonatomic, retain) SecondPassConfig *secondPass;
@property (nonatomic, retain) RuntimeConfig *runtime;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (void)_replaceModelPathWithCustomModelPathForTestWithPrefix:(id)a0;
- (id)initWithFilename:(id)a0 error:(id *)a1;

@end
