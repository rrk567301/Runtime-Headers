@class PGMeaningfulEventRequiredCriteria;

@interface PGMeaningfulEventMatchingResult : NSObject

@property (readonly, nonatomic) char isMatching;
@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) char isReliable;
@property (readonly, nonatomic) PGMeaningfulEventRequiredCriteria *requiredCriteria;

- (id)description;
- (void).cxx_destruct;
- (id)initWithIsMatching:(char)a0 score:(double)a1 isReliable:(char)a2 requiredCriteria:(id)a3;

@end
