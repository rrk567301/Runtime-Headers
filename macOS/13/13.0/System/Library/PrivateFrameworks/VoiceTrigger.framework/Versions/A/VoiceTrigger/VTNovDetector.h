@interface VTNovDetector : NSObject {
    void *_novDetect;
}

- (void)dealloc;
- (void)reset;
- (id)initWithConfigPath:(id)a0 resourcePath:(id)a1;
- (void)resetBest;
- (void)analyzeWavData:(id)a0 numSamples:(unsigned long long)a1;
- (void)analyzeWavFloatData:(id)a0 numSamples:(unsigned long long)a1;
- (id)getSuperVectorWithEndPoint:(unsigned long long)a0;
- (unsigned int)numResultsAvailable;
- (id)getOptionValue:(id)a0;
- (id)getAnalyzedResultForPhraseId:(unsigned int)a0;

@end
