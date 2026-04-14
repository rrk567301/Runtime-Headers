@class CPLResourceIdentity, NSString, CPLScopedIdentifier;

@interface CPLResource : NSObject <NSSecureCoding, NSCopying> {
    unsigned long long _backgroundDownloadTaskIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CPLResourceIdentity *identity;
@property (copy, nonatomic) CPLScopedIdentifier *itemScopedIdentifier;
@property (nonatomic) unsigned long long resourceType;
@property (nonatomic) unsigned long long sourceResourceType;
@property (nonatomic) BOOL canGenerateDerivative;
@property (copy, nonatomic) NSString *itemIdentifier;

+ (id)descriptionForResourceType:(unsigned long long)a0;
+ (id)shortDescriptionForResourceType:(unsigned long long)a0;
+ (unsigned long long)maxPixelSizeForResourceType:(unsigned long long)a0;
+ (BOOL)cplShouldGenerateDerivatives;
+ (BOOL)resourceTypeTrackedForUpload:(unsigned long long)a0;
+ (float)derivativeGenerationThreshold;
+ (void)enumerateResourceTypesWithBlock:(id /* block */)a0;
+ (id)predicateMatchingDynamicFingerprintForKey:(id)a0;
+ (BOOL)isDynamicFingerprint:(id)a0;
+ (unsigned long long)countOfResourceTypes;
+ (id)normalizedResourcesFromResources:(id)a0 resourcePerResourceType:(id *)a1;
+ (BOOL)cplShouldIgnorePropertyForCoding:(id)a0;
+ (BOOL)cplShouldIgnorePropertyForEquality:(id)a0;
+ (BOOL)isNonDerivativeResourceType:(unsigned long long)a0;
+ (BOOL)isDerivativeResourceType:(unsigned long long)a0;
+ (BOOL)usesFakeDerivatives;
+ (unsigned long long)resourceTypeFromShortDecription:(id)a0;
+ (BOOL)shouldIgnoreResourceTypeOnUpload:(unsigned long long)a0;
+ (BOOL)hasPriorityBoostForResourceType:(unsigned long long)a0;
+ (BOOL)resourceTypeSupportsResourceExpunge:(unsigned long long)a0;
+ (BOOL)isAdjustedResourceType:(unsigned long long)a0;
+ (void)getAllResourceTypesToDownload:(const unsigned long long **)a0;
+ (void)getAllResourceTypesToDownloadPrioritizeNonDerivatives:(const unsigned long long **)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)redactedDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithResourceIdentity:(id)a0 itemScopedIdentifier:(id)a1 resourceType:(unsigned long long)a2;
- (id)bestFileNameForResource;
- (id)initWithCPLArchiver:(id)a0;
- (unsigned long long)_backgroundDownloadTaskIdentifier;
- (void)_setBackgroundDownloadTaskIdentifier:(unsigned long long)a0;
- (unsigned long long)estimatedResourceSize;
- (id)initWithResourceIdentity:(id)a0 itemIdentifier:(id)a1 resourceType:(unsigned long long)a2;
- (id)initWithResourceIdentity:(id)a0 itemIdentifier:(id)a1;
- (BOOL)isTrackedForUpload;

@end
