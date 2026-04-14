@interface SHCustomCatalogConfiguration : SHCatalogConfiguration

@property (class, readonly) double maximumSearchableQuerySignatureDuration;
@property (class, readonly) double minimumQuerySignatureDurationForTracking;

@property long long numHistogramBuckets;
@property long long trackerBucketSeconds;
@property float scoreThreshold;
@property float trackerThreshold;
@property float queryThreshold;
@property long long boundingBox;
@property long long trackerBoundingBox;
@property float frequencyPenaltyMultiplier;
@property BOOL forwardPassOnly;
@property BOOL singlePassOnly;
@property BOOL refineStartEnd;
@property BOOL thinReferenceSignature;
@property BOOL mreBufferSizeIsDefault;
@property BOOL mreSkipPrefixTable;
@property BOOL supportsVerificationSweep;
@property BOOL multipleResults;
@property BOOL scorePenalties;
@property float threshold;
@property float skewMin;
@property float skewMax;
@property long long algorithm;
@property long long density;
@property BOOL supportsSignatureTracking;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
