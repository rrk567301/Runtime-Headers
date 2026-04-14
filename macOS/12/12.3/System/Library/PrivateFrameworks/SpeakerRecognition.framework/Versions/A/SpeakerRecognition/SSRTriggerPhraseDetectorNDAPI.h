@interface SSRTriggerPhraseDetectorNDAPI : NSObject {
    void *_novDetect;
    unsigned long long _phraseId;
}

- (void)dealloc;
- (void)reset;
- (id)analyzeWavData:(id)a0 numSamples:(unsigned long long)a1;
- (id)getSuperVectorWithEndPoint:(unsigned long long)a0;
- (id)initWithConfigPath:(id)a0 resourcePath:(id)a1 phraseId:(unsigned long long)a2;

@end
