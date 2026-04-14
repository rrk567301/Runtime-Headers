@class NSDictionary;

@interface NWSAlgosScoreFaceTimeDataCSV : NWSAlgosScoreDataCSV

@property (retain, nonatomic) NSDictionary *methods;

+ (id)facetimeDataCSV;

- (int)transformer;
- (void).cxx_destruct;
- (id)init;
- (BOOL)matchesMethod:(id)a0 code:(long long)a1;
- (id)setUpMethods;
- (BOOL)validMethod:(long long)a0;

@end
