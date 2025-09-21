@class PPTopic, PPSource, NSString, NSSet, PPTopicMetadata;

@interface PPTopicRecord : NSObject <PPRecord, NSCopying, NSMutableCopying, NSSecureCoding, MLFeatureProvider> {
    char _bucketizedSentimentScore;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) PPTopic *topic;
@property (readonly, nonatomic) PPSource *source;
@property (readonly, nonatomic) unsigned long long algorithm;
@property (readonly, nonatomic) double initialScore;
@property (readonly, nonatomic) double decayRate;
@property (readonly, nonatomic) char isLocal;
@property (readonly, nonatomic) NSString *extractionOsBuild;
@property (readonly, nonatomic) unsigned int extractionAssetVersion;
@property (readonly, nonatomic) double sentimentScore;
@property (readonly, nonatomic) PPTopicMetadata *metadata;
@property (readonly, nonatomic) NSSet *featureNames;

+ (id)algorithmForName:(id)a0;
+ (id)describeAlgorithm:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)identifier;
- (id)initWithCoder:(id)a0;
- (double)sentimentScore;
- (id)featureValueForName:(id)a0;
- (char)isEqualToTopicRecord:(id)a0;

@end
