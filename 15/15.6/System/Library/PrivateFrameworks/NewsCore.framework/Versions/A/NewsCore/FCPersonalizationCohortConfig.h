@interface FCPersonalizationCohortConfig : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char considerPublisherTopicAggregates;
@property (nonatomic) double dilutionFactor;
@property (nonatomic) char enableUndampening;
@property (nonatomic) double favoritedBoost;
@property (nonatomic) double exponentialFavoritedBoost;
@property (nonatomic) double globalWeight;
@property (nonatomic) double globalWeightHalfLife;
@property (nonatomic) double globalWeightInitialMultiplier;
@property (nonatomic) double paddingFactor;
@property (nonatomic) double preBaselineCurvature;
@property (nonatomic) double postBaselineCurvature;
@property (nonatomic) char undampenOnlyAboveBaselineMembership;
@property (nonatomic) double userBaseline;
@property (nonatomic) char useRelativePersonalizationValue;
@property (nonatomic) char useExponentialFavoritedBoost;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithConfigDictionary:(id)a0;
- (id)initWithConsiderPublisherTopicAggregates:(char)a0 dilutionFactor:(double)a1 enableUndampening:(char)a2 favoritedBoost:(double)a3 exponentialFavoritedBoost:(double)a4 globalWeight:(double)a5 globalWeightHalfLife:(double)a6 globalWeightInitialMultiplier:(double)a7 paddingFactor:(double)a8 preBaselineCurvature:(double)a9 postBaselineCurvature:(double)a10 undampenOnlyAboveBaselineMembership:(char)a11 userBaseline:(double)a12 useRelativePersonalizationValue:(char)a13 useExponentialFavoritedBoost:(char)a14;

@end
