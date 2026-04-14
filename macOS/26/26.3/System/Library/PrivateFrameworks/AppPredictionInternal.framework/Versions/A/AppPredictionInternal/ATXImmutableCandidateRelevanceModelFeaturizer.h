@class NSArray;

@interface ATXImmutableCandidateRelevanceModelFeaturizer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *featureValueNames;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (unsigned long long)dimensions;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)featureVectorForContext:(id)a0 candidate:(id)a1;
- (id)initWithFeatureValueNames:(id)a0;
- (BOOL)isEqualToATXImmutableCandidateRelevanceModelFeaturizer:(id)a0;

@end
