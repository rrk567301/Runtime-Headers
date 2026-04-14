@class NSArray, NLDataProvider;

@interface NLSplitDataProvider : NLDataProvider {
    NLDataProvider *_dataProvider;
    NSArray *_indexes;
}

- (void).cxx_destruct;
- (id)configuration;
- (struct __CFStringTokenizer { } *)tokenizer;
- (id)instanceAtIndex:(unsigned long long)a0;
- (id)inverseLabelMap;
- (id)vocabularyMap;
- (id)documentFrequencyMap;
- (id)labelMap;
- (unsigned long long)numberOfInstances;
- (id)initWithDataProvider:(id)a0 indexes:(id)a1;
- (void)_generateMaps;
- (unsigned long long)numberOfLabels;
- (unsigned long long)numberOfVocabularyEntries;

@end
