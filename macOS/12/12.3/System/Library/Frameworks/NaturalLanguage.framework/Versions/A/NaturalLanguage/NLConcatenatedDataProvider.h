@class NSArray;

@interface NLConcatenatedDataProvider : NLDataProvider {
    NSArray *_dataProviders;
}

- (void).cxx_destruct;
- (id)configuration;
- (struct __CFStringTokenizer { } *)tokenizer;
- (id)instanceAtIndex:(unsigned long long)a0;
- (id)initWithDataProviders:(id)a0;
- (id)inverseLabelMap;
- (id)vocabularyMap;
- (id)documentFrequencyMap;
- (id)labelMap;
- (unsigned long long)numberOfInstances;
- (void)_generateMaps;
- (unsigned long long)numberOfLabels;
- (unsigned long long)numberOfVocabularyEntries;

@end
