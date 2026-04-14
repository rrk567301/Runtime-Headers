@class PRAstLanguageProfile, NSArray, NSDictionary, NSMutableSet, NSString, NSMutableArray;

@interface PRAstBuilder : NSObject

@property (retain, nonatomic) PRAstLanguageProfile *languageProfile;
@property (retain, nonatomic) NSArray *tokens;
@property (retain, nonatomic) NSArray *tokenRanges;
@property (retain, nonatomic) NSMutableArray *qpParsesDesc;
@property (retain, nonatomic) NSMutableArray *qpParsesRange;
@property (retain, nonatomic) NSMutableArray *u2TokensLabel;
@property (retain, nonatomic) NSMutableArray *u2TokensRange;
@property (retain, nonatomic) NSMutableSet *specialIndices;
@property (retain, nonatomic) NSDictionary *tokenToFilterMap;
@property (retain, nonatomic) NSDictionary *tokenToU2LabelsMap;
@property (retain, nonatomic) NSString *originalQuery;
@property (retain, nonatomic) NSString *logHeader;
@property (nonatomic) struct PRContext { unsigned long long x0; char *x1; void *x2; unsigned short x3; unsigned short x4; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 1; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; unsigned char x22 : 1; struct __CFDictionary *x23; struct __CFDictionary *x24; } *context;

- (void)dealloc;
- (BOOL)isNegatedToken:(id)a0;
- (BOOL)isIgnoredToken:(id)a0;
- (BOOL)astHasFieldNodes:(id)a0;
- (id)buildASTFromQuery:(id)a0 queryUnderstanding:(id)a1;
- (void)buildTokenToFilterAndU2LabelsMapping;
- (void)extractQUFiltersAndLabelsFromQueryUnderstanding:(id)a0;
- (id)extractSourceTokenFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 originalQuery:(id)a1;
- (id)getFilterSourceTokenForIndex:(long long)a0;
- (BOOL)hasFieldKeywordPrefix:(id)a0;
- (BOOL)hasNonEmailQPFilters;
- (id)initWithLanguageCode:(id)a0 context:(struct PRContext { unsigned long long x0; char *x1; void *x2; unsigned short x3; unsigned short x4; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 1; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; unsigned char x22 : 1; struct __CFDictionary *x23; struct __CFDictionary *x24; } *)a1 logHeader:(id)a2;
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
