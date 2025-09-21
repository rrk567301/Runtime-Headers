@class NSIndexSet, NSString, NSArray, NSDictionary, SGTQueryGenius, NSURL, SGTCategory;

@interface SGTSuggestionReserved : NSObject {
    NSString *originalTypedString;
    NSString *rawQueryString;
    NSString *additionalRawQuery;
    NSString *displayName;
    NSString *uniquifierString;
    NSString *queryString;
    NSArray *attributeNames;
    NSDictionary *additionalAttributes;
    NSArray *suggestionValues;
    id representedObject;
    SGTQueryGenius *genius;
    long long scope;
    long long type;
    SGTCategory *category;
    NSURL *spotlightScope;
    char additionalRawQueryIsOr;
    char isExactMatch;
    char showsUniquifier;
    char useDefaultScope;
    char intermediateResult;
    char forceLastPosition;
    char enforceStrictMatch;
    char isTopHitCandidate;
    char isRecent;
    NSIndexSet *titleHighlights;
    NSIndexSet *uniquifierHighlights;
    NSString *inputString;
    double score;
    char lastWordMatched;
    unsigned long long alignmentScore;
    struct _NSRange { unsigned long long location; unsigned long long length; } replacementRange;
}

- (void).cxx_destruct;

@end
