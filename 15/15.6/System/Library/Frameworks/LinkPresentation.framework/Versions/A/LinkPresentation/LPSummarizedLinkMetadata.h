@class NSString;

@interface LPSummarizedLinkMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsSecureCoding;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)canGeneratePresentationPropertiesForURL:(id)a0;
- (id)presentationPropertiesForTransformer:(id)a0;

@end
