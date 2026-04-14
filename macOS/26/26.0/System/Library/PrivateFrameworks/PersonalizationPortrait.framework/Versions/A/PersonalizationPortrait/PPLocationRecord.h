@class PPLocation, NSUUID, PPSource, NSArray, NSString, NSSet;

@interface PPLocationRecord : NSObject <PPRecord, NSCopying, NSMutableCopying, NSSecureCoding, MLFeatureProvider> {
    NSUUID *_uuid;
    PPLocation *_location;
    PPSource *_source;
    unsigned char _algorithm;
    float _initialScore;
    float _decayRate;
    unsigned int _extractionAssetVersion;
    char _bucketizedSentimentScore;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isAmbiguous;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) PPLocation *location;
@property (readonly, nonatomic) PPSource *source;
@property (readonly, nonatomic) unsigned short algorithm;
@property (readonly, nonatomic) double initialScore;
@property (readonly, nonatomic) double decayRate;
@property (readonly, nonatomic) double sentimentScore;
@property (readonly, nonatomic) NSArray *contextualNamedEntities;
@property (readonly, nonatomic) NSString *extractionOsBuild;
@property (readonly, nonatomic) unsigned int extractionAssetVersion;
@property (readonly, nonatomic) NSSet *featureNames;

+ (id)sharedAmbiguousRecord;
+ (id)algorithmForName:(id)a0;
+ (id)describeAlgorithm:(unsigned short)a0;

- (id)featureValueForName:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)identifier;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)init_;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initAmbiguousRecord;
- (BOOL)isEqualToLocationRecord:(id)a0;
- (void)supplementFieldsWithClusterID:(id)a0 locationWithLatLong:(id)a1;

@end
