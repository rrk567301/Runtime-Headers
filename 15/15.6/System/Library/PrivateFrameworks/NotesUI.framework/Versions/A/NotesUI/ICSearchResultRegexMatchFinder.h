@class NSSet, NSString, NSRegularExpression;

@interface ICSearchResultRegexMatchFinder : NSObject

@property (retain, nonatomic) NSSet *prefixMatchingTokens;
@property (retain, nonatomic) NSSet *substringMatchingTokens;
@property (retain, nonatomic) NSString *searchString;
@property (retain, nonatomic) NSRegularExpression *normalRegex;
@property (retain, nonatomic) NSRegularExpression *fallbackRegex;

+ (id)matchesForToken:(id)a0 inDocument:(id)a1 checkPrefixBeforeFallingBack:(char)a2;
+ (char)textCheckingResultsAreValid:(id)a0;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSearchString:(id)a0;
- (id)firstMatchInDocumentWithGlobalFallback:(id)a0;
- (id)initWithPrefixMatchingTokens:(id)a0 substringMatchingTokens:(id)a1 searchString:(id)a2;
- (id)matchesInDocumentWithPerTokenFallback:(id)a0;

@end
