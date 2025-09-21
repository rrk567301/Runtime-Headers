@class NSString, LPImage;

@interface LPGameCenterInvitationMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataBackwardCompatibility>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *game;
@property (retain, nonatomic) LPImage *image;
@property (retain, nonatomic) LPImage *icon;
@property (nonatomic) unsigned int numberOfPlayers;
@property (nonatomic) unsigned int minimumNumberOfPlayers;
@property (nonatomic) unsigned int maximumNumberOfPlayers;

+ (char)supportsSecureCoding;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)playerCountText;
- (void)_enumerateAsynchronousFields:(id /* block */)a0;
- (char)canGeneratePresentationPropertiesForURL:(id)a0;
- (id)invitationText;
- (void)populateMetadataForBackwardCompatibility:(id)a0;
- (id)presentationPropertiesForTransformer:(id)a0;
- (id)previewImageForTransformer:(id)a0;
- (id)previewSummaryForTransformer:(id)a0;

@end
