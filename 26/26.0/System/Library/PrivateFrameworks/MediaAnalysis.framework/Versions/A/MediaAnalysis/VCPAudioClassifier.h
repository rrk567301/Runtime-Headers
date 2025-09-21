@class NSMutableArray, SNAudioStreamAnalyzer, AVAudioPCMBuffer;

@interface VCPAudioClassifier : NSObject {
    unsigned long long _analysisTypes;
    SNAudioStreamAnalyzer *_SNAnalyzer;
    AVAudioPCMBuffer *_pcmBuffer;
    long long _framePosition;
    float _sampleRate;
    NSMutableArray *_detectors;
    NSMutableArray *_classifiers;
    NSMutableArray *_embeddingGenerators;
    NSMutableArray *_classifiers300;
}

+ (void)purgeCachedModels;
+ (id)sharedFeaturePrintRequest:(id)a0 version:(int)a1;

- (id)results;
- (void).cxx_destruct;
- (id)initWithTypes:(unsigned long long)a0;
- (int)setupWithSample:(struct opaqueCMSampleBuffer { } *)a0 trackDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 resultHandler:(id /* block */)a2 andSampleBatchSize:(int)a3;
- (void)cacheModelsForClassifySoundRequest:(id)a0 requestIdentifier:(id)a1;
- (void)cacheModelsForDetectSoundRequest:(id)a0 requestIdentifier:(id)a1;
- (int)finalizeAnalysisAtTime:(const struct { long long x0; int x1; unsigned int x2; long long x3; } *)a0;
- (int)processAudioSamples:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 timestamp:(struct AudioTimeStamp { double x0; unsigned long long x1; double x2; unsigned long long x3; struct SMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x4; unsigned int x5; unsigned int x6; })a1;

@end
