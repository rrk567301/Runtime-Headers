@class NSArray, NSMutableArray, CSQueryRankingConfiguration;

@interface CSSuggestionsRanker : NSObject {
    NSMutableArray *_lockedlocalSuggestions;
    NSMutableArray *_lockedLocalPeopleSuggestions;
    NSMutableArray *_lockedPeopleSuggestions;
    NSMutableArray *_lockedTokenSuggestions;
}

@property (readonly, nonatomic) CSQueryRankingConfiguration *queryRankingConfiguration;
@property (readonly, nonatomic) NSArray *suggestions;

- (void).cxx_destruct;
- (void)collectSuggestions:(id)a0;
- (id)currentLocalSuggestions;
- (id)currentPeopleSuggestions;
- (id)currentTokenSuggestions;
- (id)initWithQueryRankingConfiguration:(id)a0;

@end
