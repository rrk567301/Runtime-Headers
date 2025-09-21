@class NSString, LPImage;

@interface LPPasswordsInviteMetadata : LPSpecializationMetadata <LPLinkMetadataBackwardCompatibility, LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataSharedWithYouTransformer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSString *urlParameters;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *buttonTitle;
@property (retain, nonatomic) LPImage *icon;

+ (char)supportsSecureCoding;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_subtitle;
- (char)_disallowsURLOverrideByDelegate;
- (id)_baseURL;
- (id)_overrideURL;
- (char)canGeneratePresentationPropertiesForURL:(id)a0;
- (void)populateMetadataForBackwardCompatibility:(id)a0;
- (id)presentationPropertiesForTransformer:(id)a0;
- (id)previewImageForTransformer:(id)a0;
- (id)previewSummaryForTransformer:(id)a0;
- (char)shouldDonateToSharedWithYouForTransformer:(id)a0;

@end
