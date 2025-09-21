@class NSString, LPImage, LPSpecializationMetadata;

@interface LPSharedObjectMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataBackwardCompatibility, LPLinkMetadataPreviewTransformer, LPLinkMetadataSourceApplicationTransformer, LPLinkMetadataDownloadProgressTransformer, LPLinkMetadataFallbackIconTransformer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *information;
@property (retain, nonatomic) LPImage *icon;
@property (nonatomic) char isCollaboration;
@property (retain, nonatomic) LPSpecializationMetadata *specialization;

+ (char)supportsSecureCoding;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)downloadProgressForTransformer:(id)a0;
- (id)_applicationFromURL:(id)a0;
- (void)_enumerateAsynchronousFields:(id /* block */)a0;
- (id)applicationIconWithURL:(id)a0;
- (char)canGeneratePresentationPropertiesForURL:(id)a0;
- (id)fallbackIconForTransformer:(id)a0;
- (void)populateMetadataForBackwardCompatibility:(id)a0;
- (id)presentationPropertiesForTransformer:(id)a0;
- (id)previewImageForTransformer:(id)a0;
- (id)previewSummaryForTransformer:(id)a0;
- (id)sourceApplicationMetadataForTransformer:(id)a0;

@end
