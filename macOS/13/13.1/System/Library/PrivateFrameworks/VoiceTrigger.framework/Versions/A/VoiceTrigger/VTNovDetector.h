@interface VTNovDetector : NSObject {
    void *_novDetect;
}

- (void)dealloc;
- (void)reset;
- (id)initWithConfigPath:(id)a0 resourcePath:(id)a1;
- (void)resetBest;
- (void)analyzeWavData:(id)a0 numSamples:(unsigned long long)a1;
- (void)analyzeWavFloatData:(id)a0 numSamples:(unsigned long long)a1;
- (unsigned int)numResultsAvailable;
- (id)getAnalyzedResultForPhraseId:(unsigned int)a0;
- (id)getSuperVectorWithEndPoint:(unsigned long long)a0;
- (id)getOptionValue:(id)a0;

@end
