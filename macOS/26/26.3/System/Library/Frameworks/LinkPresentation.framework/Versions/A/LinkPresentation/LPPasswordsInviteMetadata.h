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

+ (BOOL)supportsSecureCoding;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_subtitle;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_disallowsURLOverrideByDelegate;
- (id)_baseURL;
- (id)_overrideURL;
- (BOOL)canGeneratePresentationPropertiesForURL:(id)a0;
- (void)populateMetadataForBackwardCompatibility:(id)a0;
- (id)presentationPropertiesForTransformer:(id)a0;
- (id)previewImageForTransformer:(id)a0;
- (id)previewSummaryForTransformer:(id)a0;
- (BOOL)shouldDonateToSharedWithYouForTransformer:(id)a0;

@end
