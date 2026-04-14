@interface SSPommesRanker : NSObject

@property (nonatomic) float estimatedMaxPommesL1Score;

+ (id)sharedPommesRanker;

- (void)sortAndFilterRankedItems:(id)a0 maxCount:(long long)a1 bundleID:(id)a2 userQuery:(id)a3 queryID:(long long)a4 privateQuery:(BOOL)a5 currentTime:(double)a6;
- (void)updateScoresForItems:(id)a0 withSectionBundle:(id)a1 userQuery:(id)a2 queryID:(long long)a3 currentTime:(double)a4 collectL2Signals:(BOOL)a5 keyboardLanguage:(id)a6 onlyEmbeddingResults:(BOOL)a7;
- (long long)compare:(id)a0 to:(id)a1 currentTime:(double)a2;
- (long long)mailCompare:(id)a0 to:(id)a1 currentTime:(double)a2;

@end
