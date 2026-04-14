@class PPNamedEntity, PPSource, NSString, NSSet, PPNamedEntityMetadata;

@interface PPNamedEntityRecord : NSObject <PPRecord, NSCopying, NSMutableCopying, NSSecureCoding, MLFeatureProvider> {
    float _initialScore;
    float _decayRate;
    unsigned int _extractionAssetVersion;
    unsigned char _algorithm;
    PPNamedEntityMetadata *_metadata;
    char _bucketizedSentimentScore;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PPNamedEntity *entity;
@property (readonly, nonatomic) PPSource *source;
@property (readonly, nonatomic) unsigned long long algorithm;
@property (readonly, nonatomic) double initialScore;
@property (readonly, nonatomic) double decayRate;
@property (readonly, nonatomic) NSString *extractionOsBuild;
@property (readonly, nonatomic) unsigned int extractionAssetVersion;
@property (readonly, nonatomic) unsigned char changeType;
@property (readonly, nonatomic) double sentimentScore;
@property (readonly, nonatomic) PPNamedEntityMetadata *metadata;
@property (readonly, nonatomic) NSSet *featureNames;

+ (id)describeAlgorithm:(unsigned long long)a0;
+ (id)algorithmForName:(id)a0;
+ (id)describeChangeType:(unsigned char)a0;

- (double)sentimentScore;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)featureValueForName:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)identifier;
- (BOOL)isEqualToNamedEntityRecord:(id)a0;

@end
