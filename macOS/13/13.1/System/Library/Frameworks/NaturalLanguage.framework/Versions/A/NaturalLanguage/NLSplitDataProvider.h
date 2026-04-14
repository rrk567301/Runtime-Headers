@class NSArray, NLDataProvider;

@interface NLSplitDataProvider : NLDataProvider {
    NLDataProvider *_dataProvider;
    NSArray *_indexes;
}

- (void).cxx_destruct;
- (id)configuration;
- (struct __CFStringTokenizer { } *)tokenizer;
- (id)instanceAtIndex:(unsigned long long)a0;
- (id)labelMap;
- (id)vocabularyMap;
- (id)documentFrequencyMap;
- (unsigned long long)numberOfInstances;
- (void)_generateMaps;
- (id)inverseLabelMap;
- (unsigned long long)numberOfLabels;
- (unsigned long long)numberOfVocabularyEntries;
- (id)initWithDataProvider:(id)a0 indexes:(id)a1;

@end
