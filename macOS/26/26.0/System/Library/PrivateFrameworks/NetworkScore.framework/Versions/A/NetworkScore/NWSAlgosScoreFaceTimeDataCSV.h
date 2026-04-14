@class NSDictionary;

@interface NWSAlgosScoreFaceTimeDataCSV : NWSAlgosScoreDataCSV

@property (retain, nonatomic) NSDictionary *methods;

+ (id)facetimeDataCSV;

- (id)init;
- (int)transformer;
- (void).cxx_destruct;
- (BOOL)matchesMethod:(id)a0 code:(long long)a1;
- (id)setUpMethods;
- (BOOL)validMethod:(long long)a0;

@end
