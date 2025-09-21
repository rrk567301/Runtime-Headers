@class NSMutableDictionary;

@interface CESRSpeechItemRanker_AppShortcuts : CESRSpeechItemRanker {
    NSMutableDictionary *_setDict;
}

- (id)sets;
- (void).cxx_destruct;
- (BOOL)addSet:(id)a0;
- (BOOL)hasSets;
- (BOOL)enumerateRankedItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (id)initWithInstance:(id)a0 speechProfileSite:(id)a1 categoryGroup:(id)a2;

@end
