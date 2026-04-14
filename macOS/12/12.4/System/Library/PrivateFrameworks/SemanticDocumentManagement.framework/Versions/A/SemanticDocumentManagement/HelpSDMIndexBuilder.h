@class HelpTokenizer, NSString, NSMutableDictionary, HelpSDMIndex, NSDictionary, NSCharacterSet;

@interface HelpSDMIndexBuilder : NSObject {
    NSMutableDictionary *preservedTokenCounts;
    NSString *currentLanguage;
    NSCharacterSet *whitespaceCharacterSet;
    HelpTokenizer *tokenizer;
    NSDictionary *keywordExceptions;
}

@property (readonly) HelpSDMIndex *index;

- (void)dealloc;
- (id)initWithKnownPhraseArray:(id)a0 language:(id)a1;
- (void)pruneNGramTokensUsingKnownPhrases:(id)a0;
- (void)_calcAndSetMultigramThresholds;
- (id)tokenCountFromHelpArticleProperties:(id)a0;
- (id)_tokenIndexingPowerTable;
- (id)versionedSDMIndexData;
- (void)startNewIndex;
- (BOOL)addHelpArticleAtURL:(id)a0 withSubPath:(id)a1;
- (BOOL)addHelpArticleWithProperties:(id)a0 withSubPath:(id)a1;
- (id)tokenCountOfHelpArticle:(id)a0;

@end
