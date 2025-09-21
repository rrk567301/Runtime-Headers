@class PRAstLanguageProfile, NSArray, NSDictionary, NSMutableSet, NSString, NSMutableArray;

@interface PRAstBuilder : NSObject

@property (retain, nonatomic) PRAstLanguageProfile *languageProfile;
@property (retain, nonatomic) NSArray *tokens;
@property (retain, nonatomic) NSArray *tokenRanges;
@property (retain, nonatomic) NSMutableArray *qpParsesDesc;
@property (retain, nonatomic) NSMutableArray *qpParsesRange;
@property (retain, nonatomic) NSMutableSet *specialIndices;
@property (retain, nonatomic) NSDictionary *tokenToFilterMap;
@property (retain, nonatomic) NSString *originalQuery;

- (id)initWithLanguageCode:(id)a0;
- (void)dealloc;
- (BOOL)isNegatedToken:(id)a0;
- (BOOL)isIgnoredToken:(id)a0;
- (BOOL)astHasFieldNodes:(id)a0;
- (id)buildASTFromQuery:(id)a0 queryUnderstanding:(id)a1;
- (void)buildTokenToFilterMapping;
- (void)extractQPFiltersFromQueryUnderstanding:(id)a0;
- (id)extractSourceTokenFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 originalQuery:(id)a1;
- (id)getFilterSourceTokenForIndex:(long long)a0;
- (BOOL)hasFieldKeywordPrefix:(id)a0;
- (BOOL)hasNonEmailQPFilters;
- (BOOL)isQuotedToken:(id)a0;
- (BOOL)node:(id)a0 containsFilter:(id)a1;
- (id)parseExpressionAtIndex:(unsigned long long)a0 consumedTokens:(unsigned long long *)a1;
- (id)parseFieldExpressionAtIndex:(unsigned long long)a0 consumedTokens:(unsigned long long *)a1;
- (id)parseIgnoredTermAtIndex:(unsigned long long)a0 consumedTokens:(unsigned long long *)a1;
- (id)parseMultiTokenQuotedValueStartingWithValue:(id)a0 atIndex:(unsigned long long)a1 consumedTokens:(unsigned long long *)a2;
- (id)parseNegatedTermAtIndex:(unsigned long long)a0 consumedTokens:(unsigned long long *)a1;
- (id)parseQuotedExpressionAtIndex:(unsigned long long)a0 consumedTokens:(unsigned long long *)a1;
- (id)parseSentKeywordAtIndex:(unsigned long long)a0 consumedTokens:(unsigned long long *)a1;
- (id)parseTokensIntoAST;
- (void)postProcessAstForMailToken:(id)a0;
- (void)setMailTokenIgnoredInAst:(id)a0;
- (id)stripNegationFromToken:(id)a0;
- (BOOL)tokenizeQuery:(id)a0;

@end
