@class NSDictionary;

@interface AlgosScoreStreamDataCSV : AlgosScoreDataCSV

@property (retain, nonatomic) NSDictionary *methods;
@property (nonatomic) char isMusic;

+ (id)streamDataCSV:(char)a0;

- (void).cxx_destruct;
- (id)initIsMusic:(char)a0;
- (char)matchesMethod:(id)a0 code:(long long)a1;
- (id)setUpMethods;
- (int)transformer;
- (char)validMethod:(long long)a0;

@end
