@class NSDictionary;

@interface AlgosScoreFaceTimeDataCSV : AlgosScoreDataCSV

@property (retain, nonatomic) NSDictionary *methods;

+ (id)facetimeDataCSV;

- (id)init;
- (void).cxx_destruct;
- (char)matchesMethod:(id)a0 code:(long long)a1;
- (id)setUpMethods;
- (int)transformer;
- (char)validMethod:(long long)a0;

@end
