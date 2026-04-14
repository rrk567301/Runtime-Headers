@class NSString, NSDictionary;

@interface FCDerivedPersonalizationData : NSObject <FCDerivedPersonalizationData, NSSecureCoding, NSCopying, FCPersonalizationDataGeneratorType> {
    NSDictionary *_aggregatesByFeatureKey;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long scoringType;
@property (readonly, nonatomic) double decayRate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)generateDerivedData;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)aggregateForFeatureKey:(id)a0;
- (id)initWithAggregates:(id)a0 scoringType:(unsigned long long)a1 decayRate:(double)a2;
- (id)aggregatesForFeatureKeys:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithAggregates:(id)a0 scoringType:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;
- (id)allAggregates;

@end
