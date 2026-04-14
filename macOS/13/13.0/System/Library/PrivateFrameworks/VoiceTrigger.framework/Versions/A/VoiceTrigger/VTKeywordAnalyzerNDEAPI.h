@class NSString, NSMutableData, VTKeywordAnalyzerResults;

@interface VTKeywordAnalyzerNDEAPI : NSObject <VTKeywordAnalyzer> {
    void **_ndeObject;
    NSMutableData *_currentBlob;
    VTKeywordAnalyzerResults *_lastResult;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithAsset:(id)a0;
- (void)endAudio;
- (id)initWithBlob:(id)a0;
- (void)setStartSampleCount:(unsigned long long)a0;
- (void)processAudioBuffer:(id)a0 numSamples:(unsigned long long)a1;
- (id)getAnalyzerType;
- (void)processFloatAudioBuffer:(id)a0 numSamples:(unsigned long long)a1;
- (void)resetWithLanguage:(id)a0 withSamplingRate:(long long)a1 withAudioSource:(id)a2;
- (id)getDetailedResults;
- (id)_checkForTriggerWithBytes:(const short *)a0 withNumberOfSamples:(long long)a1;

@end
