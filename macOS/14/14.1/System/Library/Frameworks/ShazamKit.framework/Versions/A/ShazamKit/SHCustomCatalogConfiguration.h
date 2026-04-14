@interface SHCustomCatalogConfiguration : SHCatalogConfiguration

@property (class, readonly) double maximumSearchableQuerySignatureDuration;
@property (class, readonly) double minimumQuerySignatureDurationForTracking;

@property long long algorithm;
@property long long density;
@property BOOL supportsSignatureTracking;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
