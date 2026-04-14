@protocol GKRandom;

@interface GKRandomDistribution : NSObject <GKRandom> {
    id<GKRandom> _source;
}

@property (readonly, nonatomic) long long lowestValue;
@property (readonly, nonatomic) long long highestValue;
@property (readonly, nonatomic) unsigned long long numberOfPossibleOutcomes;

+ (id)distributionWithLowestValue:(long long)a0 highestValue:(long long)a1;
+ (id)distributionForDieWithSideCount:(long long)a0;
+ (id)d6;
+ (id)d20;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)a0;
- (id)initWithRandomSource:(id)a0 lowestValue:(long long)a1 highestValue:(long long)a2;
- (long long)nextInt;
- (float)nextUniform;
- (BOOL)nextBool;

@end
