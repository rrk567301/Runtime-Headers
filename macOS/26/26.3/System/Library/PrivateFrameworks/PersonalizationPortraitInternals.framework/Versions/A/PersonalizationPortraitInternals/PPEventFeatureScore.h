@class NSArray;

@interface PPEventFeatureScore : NSObject <NSCopying> {
    unsigned long long _ocnt_precomputedHash;
}

@property (readonly, nonatomic) NSArray *featureValues;
@property (readonly, nonatomic) double weightedScore;
@property (readonly, nonatomic) unsigned long long prominentFeature;

+ (id)eventFeatureScoreWithFeatureValues:(id)a0 weightedScore:(double)a1 prominentFeature:(unsigned long long)a2;

- (id)description;
- (id)init;
- (unsigned long long)_hash;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithReplacementFeatureValues:(id)a0;
- (id)copyWithReplacementProminentFeature:(unsigned long long)a0;
- (id)copyWithReplacementWeightedScore:(double)a0;
- (id)initWithFeatureValues:(id)a0 weightedScore:(double)a1 prominentFeature:(unsigned long long)a2;
- (BOOL)isEqualToEventFeatureScore:(id)a0;

@end
