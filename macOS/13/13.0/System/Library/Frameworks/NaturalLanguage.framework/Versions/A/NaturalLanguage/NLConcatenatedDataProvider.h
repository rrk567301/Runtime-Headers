@class NSArray;

@interface NLConcatenatedDataProvider : NLDataProvider {
    NSArray *_dataProviders;
}

- (void).cxx_destruct;
- (id)configuration;
- (struct __CFStringTokenizer { } *)tokenizer;
- (id)instanceAtIndex:(unsigned long long)a0;
- (id)initWithDataProviders:(id)a0;
- (id)labelMap;
- (id)vocabularyMap;
- (id)documentFrequencyMap;
- (unsigned long long)numberOfInstances;
- (void)_generateMaps;
- (id)inverseLabelMap;
- (unsigned long long)numberOfLabels;
- (unsigned long long)numberOfVocabularyEntries;

@end
