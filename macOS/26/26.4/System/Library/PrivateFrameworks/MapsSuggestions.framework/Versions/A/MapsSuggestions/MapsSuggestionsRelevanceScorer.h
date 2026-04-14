@class NSMutableArray, NSDate;

@interface MapsSuggestionsRelevanceScorer : NSObject {
    NSMutableArray *_scorers;
    NSDate *_scorersUpdatedAt;
}

- (id)confidenceForContacts:(id)a0 addresses:(id)a1;
- (id)confidenceForMapItems:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)preLoadAllScorers;
- (void)addScorer:(id)a0;

@end
