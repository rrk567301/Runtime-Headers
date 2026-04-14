@class NSDictionary, NSMutableDictionary, NSString;
@protocol CSFModelComputeBackend;

@interface SLUresMitigator : NSObject {
    id<CSFModelComputeBackend> _uresModel;
    NSDictionary *_inputOpsMap;
    NSDictionary *_outputMap;
    NSMutableDictionary *_thresholdMap;
    NSString *_version;
}

+ (id)getTranscriptionForSpeechPackage:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0 error:(id *)a1;
- (void)_createInputOriginThresholdMap:(id)a0;
- (id)_processInputFeats:(id)a0;
- (void)processInputFeats:(id)a0 completion:(id /* block */)a1;

@end
