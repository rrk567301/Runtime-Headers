@interface CESRSpeechItemRanker_Media : CESRSpeechItemRanker {
    unsigned long long _playableLimit;
    unsigned long long _artistLimit;
}

- (BOOL)addSet:(id)a0;
- (BOOL)enumerateRankedItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (id)initWithInstance:(id)a0 speechProfileSite:(id)a1 categoryGroup:(id)a2;
- (id)initWithInstance:(id)a0 speechProfileSite:(id)a1 categoryGroup:(id)a2 playableLimit:(unsigned long long)a3 artistLimit:(unsigned long long)a4;

@end
