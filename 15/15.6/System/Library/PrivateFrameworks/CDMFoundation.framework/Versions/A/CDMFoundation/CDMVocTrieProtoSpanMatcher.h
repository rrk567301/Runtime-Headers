@class NSString, CDMVocTrie;

@interface CDMVocTrieProtoSpanMatcher : NSObject <CDMProtoSpanMatcher> {
    CDMVocTrie *trie;
    char useNormalizedValues;
}

@property char connectedToCarPlayUltra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getCDMServiceAssetConfig;
+ (id /* block */)spanIdentifierCountComparator;

- (void).cxx_destruct;
- (id)initWithVocTriePath:(id)a0 useNormalizedValues:(char)a1;
- (id)matchSpansForTokenChain:(id)a0 asrHypothesis:(id)a1;
- (char)utteranceStartsWithVoiceTriggerSpan:(id)a0;

@end
