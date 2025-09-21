@class CPLResourceIdentity, NSString, CPLScopedIdentifier;

@interface CPLResource : NSObject <NSSecureCoding, NSCopying> {
    unsigned long long _backgroundDownloadTaskIdentifier;
}

@property (class, readonly) char supportsSecureCoding;
@property (class, readonly, nonatomic) float derivativeGenerationThreshold;
@property (class, readonly, nonatomic) unsigned long long largeResourceSizeThreshold;

@property (retain, nonatomic) CPLResourceIdentity *identity;
@property (copy, nonatomic) CPLScopedIdentifier *itemScopedIdentifier;
@property (nonatomic) unsigned long long resourceType;
@property (nonatomic) unsigned long long sourceResourceType;
@property (nonatomic) char canGenerateDerivative;
@property (copy, nonatomic) NSString *itemIdentifier;

+ (id)descriptionForResourceType:(unsigned long long)a0;
+ (unsigned long long)maxPixelSizeForResourceType:(unsigned long long)a0;
+ (id)shortDescriptionForResourceType:(unsigned long long)a0;
+ (char)cplShouldGenerateDerivatives;
+ (void)enumerateResourceTypesWithBlock:(id /* block */)a0;
+ (char)isDynamicFingerprint:(id)a0;
+ (id)predicateMatchingDynamicFingerprintForKey:(id)a0;
+ (char)resourceTypeTrackedForUpload:(unsigned long long)a0;
+ (unsigned long long)countOfResourceTypes;
+ (char)cplShouldIgnorePropertyForCoding:(id)a0;
+ (char)cplShouldIgnorePropertyForEquality:(id)a0;
+ (void)getAllResourceTypesToDownload:(const unsigned long long **)a0;
+ (void)getAllResourceTypesToDownloadPrioritizeNonDerivatives:(const unsigned long long **)a0;
+ (char)hasPriorityBoostForResourceType:(unsigned long long)a0;
+ (char)isAdjustedResourceType:(unsigned long long)a0;
+ (char)isDerivativeResourceType:(unsigned long long)a0;
+ (char)isNonDerivativeResourceType:(unsigned long long)a0;
+ (id)normalizedResourcesFromResources:(id)a0 resourcePerResourceType:(id *)a1;
+ (unsigned long long)resourceTypeFromShortDescription:(id)a0;
+ (char)resourceTypeSupportsResourceExpunge:(unsigned long long)a0;
+ (char)shouldIgnoreResourceTypeOnUpload:(unsigned long long)a0;
+ (char)usesFakeDerivatives;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)stableHash;
- (id)initWithResourceIdentity:(id)a0 itemScopedIdentifier:(id)a1 resourceType:(unsigned long long)a2;
- (unsigned long long)_backgroundDownloadTaskIdentifier;
- (void)_setBackgroundDownloadTaskIdentifier:(unsigned long long)a0;
- (id)bestFileNameForResource;
- (unsigned long long)estimatedResourceSize;
- (id)initWithCPLArchiver:(id)a0;
- (char)isTrackedForUpload;

@end
