@interface CSNovDetector : NSObject {
    void *_novDetect;
}

- (void)analyzeWavData:(id)a0 numSamples:(unsigned long long)a1;
- (unsigned int)numResultsAvailable;
- (id)getBestAnalyzedResult;
- (id)getAnalyzedResultForPhId:(unsigned int)a0;
- (id)initWithConfigPath:(id)a0 resourcePath:(id)a1;
- (void)reset;
- (id)getOptionValue:(id)a0;
- (id)getSuperVectorWithEndPoint:(unsigned long long)a0;
- (id)_getAnalyzedResultFromNdresult:(struct _ndresult { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; float x4; BOOL x5; BOOL x6; } *)a0;
- (void)analyzeWavFloatData:(id)a0 numSamples:(unsigned long long)a1;
- (void)dealloc;
- (void)resetBest;

@end
