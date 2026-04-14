@class NSArray;

@interface NLConcatenatedDataProvider : NLDataProvider {
    NSArray *_dataProviders;
}

- (struct __CFStringTokenizer { } *)tokenizer;
- (id)configuration;
- (id)initWithDataProviders:(id)a0;
- (void).cxx_destruct;
- (id)instanceAtIndex:(unsigned long long)a0;
- (id)inverseLabelMap;
- (void)_generateMaps;
- (id)documentFrequencyMap;
- (id)labelMap;
- (unsigned long long)numberOfInstances;
- (unsigned long long)numberOfLabels;
- (unsigned long long)numberOfVocabularyEntries;
- (id)vocabularyMap;

@end
