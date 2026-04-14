@class NSDictionary, NSString;

@interface VTKeywordAnalyzerQuasar : NSObject <VTKeywordAnalyzer>

@property (retain, nonatomic) NSDictionary *ctcKwdToPhraseIdMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithAsset:(id)a0;
- (void)endAudio;
- (void)setStartSampleCount:(unsigned long long)a0;
- (void)resetWithLanguage:(id)a0 withSamplingRate:(long long)a1 withAudioSource:(id)a2;
- (void)processFloatAudioBuffer:(id)a0 numSamples:(unsigned long long)a1;
- (void)processAudioBuffer:(id)a0 numSamples:(unsigned long long)a1;
- (id)getDetailedResults;
- (id)getAnalyzerType;

@end
