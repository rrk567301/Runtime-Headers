@class NSMutableArray, NSDate;

@interface MapsSuggestionsRelevanceScorer : NSObject {
    NSMutableArray *_scorers;
    NSDate *_scorersUpdatedAt;
}

- (id)confidenceForContacts:(id)a0 addresses:(id)a1;
- (void)preLoadAllScorers;
- (id)confidenceForMapItems:(id)a0;
- (void).cxx_destruct;
- (void)addScorer:(id)a0;
- (id)init;

@end
