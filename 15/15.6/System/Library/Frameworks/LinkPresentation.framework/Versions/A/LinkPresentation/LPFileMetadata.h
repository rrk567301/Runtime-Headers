@class NSString, LPImage, NSDate;

@interface LPFileMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataFallbackIconTransformer, LPLinkMetadataBackwardCompatibility, LPMultipleMetadataPresentationTransformer, LPLinkMetadataSharedObjectTransformer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) unsigned long long size;
@property (retain, nonatomic) LPImage *thumbnail;
@property (retain, nonatomic) LPImage *smallThumbnail;
@property (retain, nonatomic) LPImage *icon;
@property (retain, nonatomic) NSDate *creationDate;

+ (char)supportsSecureCoding;
+ (id)descriptionForUTI:(id)a0;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)_isImage;
- (id)sharedObjectIconForTransformer:(id)a0;
- (id)_bottomCaptionStringForTransformer:(id)a0;
- (char)_canDeferAsynchronousFieldsMetadataUpdateUntilCompletion;
- (void)_enumerateAsynchronousFields:(id /* block */)a0;
- (id)_fileDetailStringForTransformer:(id)a0;
- (id)_fileTypeStringForTransformer:(id)a0;
- (id)_iconIfLoaded;
- (char)_isPlainText;
- (char)_isWatchFace;
- (id)_nameForTransformer:(id)a0;
- (char)_shouldUseBackground;
- (char)_shouldUseCircularIcon;
- (char)_shouldUseSquareIcon;
- (id)_singleLineDescriptionForRemoteFileWithTransformer:(id)a0;
- (id)_smallThumbnailIfLoaded;
- (id)_thumbnailIfLoaded;
- (id)_valueForKeyPathIfLoaded:(id)a0;
- (char)canGeneratePresentationPropertiesForURL:(id)a0;
- (id)fallbackIconForTransformer:(id)a0;
- (void)populateMetadataForBackwardCompatibility:(id)a0;
- (id)presentationPropertiesForTransformer:(id)a0;
- (id)previewImageForTransformer:(id)a0;
- (id)previewSummaryForTransformer:(id)a0;
- (id)sharedObjectInformationForTransformer:(id)a0;
- (char)sharedObjectPrefersIconAsImageForTransformer:(id)a0;
- (id)sharedObjectPreviewSummaryForTransformer:(id)a0;
- (id)sharedObjectSubtitleForTransformer:(id)a0;
- (id)sharedObjectTitleForTransformer:(id)a0;
- (long long)summaryTypeForTransformer:(id)a0;

@end
