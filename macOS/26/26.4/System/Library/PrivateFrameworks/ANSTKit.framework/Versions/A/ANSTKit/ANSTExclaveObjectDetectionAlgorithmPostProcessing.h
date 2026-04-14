@class ANSTExclaveObjectDetectionAlgorithmConfiguration;

@interface ANSTExclaveObjectDetectionAlgorithmPostProcessing : NSObject {
    ANSTExclaveObjectDetectionAlgorithmConfiguration *_configuration;
    unsigned long long _ID_placeholder;
}

+ (id)new;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)processWithLogitsSurface:(id)a0 boxSurface:(id)a1 centerSurface:(id)a2 facePoseSurface:(id)a3;

@end
