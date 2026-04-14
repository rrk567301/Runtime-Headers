@class NLTokenizer;

@interface ICSearchQueryTokenizer : NSObject

@property (class, readonly, nonatomic) NLTokenizer *tokenizer;

+ (id)spellChecker;
+ (id)expandedTokensForSearchString:(id)a0 language:(id)a1;
+ (id)tokensFromString:(id)a0 language:(id)a1;
+ (id)_queryTokensForSearchString:(id)a0 language:(id)a1;
+ (void)_sortMutableSearchQueryTokensInPlace:(id)a0;
+ (void)_insertConnectorAndDividerSegmentsIntoMutableTokenArray:(id)a0 searchString:(id)a1;
+ (void)_combineConnectorAndTokensAndRemoveDividersInPlaceForMutableTokenArray:(id)a0 searchString:(id)a1;
+ (id)_expandedTokensForSearchQuerySegmentArray:(id)a0 searchString:(id)a1 language:(id)a2;
+ (id)spellCheckerGuessesForSearchString:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 language:(id)a2;
+ (id)connectorCharacterSet;
+ (id)nonConnectorCharacterSet;

@end
