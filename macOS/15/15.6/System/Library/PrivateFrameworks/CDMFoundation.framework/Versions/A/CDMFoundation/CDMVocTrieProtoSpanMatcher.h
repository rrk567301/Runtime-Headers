@class NSString, CDMVocTrie;

@interface CDMVocTrieProtoSpanMatcher : NSObject <CDMProtoSpanMatcher> {
    CDMVocTrie *trie;
    BOOL useNormalizedValues;
}

@property BOOL connectedToCarPlayUltra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getCDMServiceAssetConfig;
+ (id /* block */)spanIdentifierCountComparator;

- (void).cxx_destruct;
- (id)initWithVocTriePath:(id)a0 useNormalizedValues:(BOOL)a1;
- (id)matchSpansForTokenChain:(id)a0 asrHypothesis:(id)a1;
- (BOOL)utteranceStartsWithVoiceTriggerSpan:(id)a0;

@end
