@class NSArray;

@interface ATXActionSuggestionRequest : ATXPredictionRequest

@property (retain, nonatomic) NSArray *spotlightRecentTopics;

- (void).cxx_destruct;
- (id)initWithLimit:(unsigned long long)a0 scope:(id)a1 spotlightRecentTopics:(id)a2;

@end
