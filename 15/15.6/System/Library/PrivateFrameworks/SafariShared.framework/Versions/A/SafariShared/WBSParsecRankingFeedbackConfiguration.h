@class NSNumber, SFSearchResult;

@interface WBSParsecRankingFeedbackConfiguration : NSObject

@property (retain, nonatomic) SFSearchResult *hiddenSiriSuggestedSite;
@property (retain, nonatomic) NSNumber *prefixNavigationalIntent;
@property (nonatomic) char serverCompletionDidMatchFirstSearchSuggestionFrom3rdParty;

- (void).cxx_destruct;

@end
