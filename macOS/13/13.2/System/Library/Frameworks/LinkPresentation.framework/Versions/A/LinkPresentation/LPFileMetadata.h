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

+ (BOOL)supportsSecureCoding;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
+ (id)descriptionForUTI:(id)a0;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isImage;
- (id)presentationPropertiesForTransformer:(id)a0;
- (BOOL)canGeneratePresentationPropertiesForURL:(id)a0;
- (id)previewSummaryForTransformer:(id)a0;
- (id)previewImageForTransformer:(id)a0;
- (void)populateMetadataForBackwardCompatibility:(id)a0;
- (void)_enumerateAsynchronousFields:(id /* block */)a0;
- (BOOL)_canDeferAsynchronousFieldsMetadataUpdateUntilCompletion;
- (id)fallbackIconForTransformer:(id)a0;
- (id)sharedObjectTitleForTransformer:(id)a0;
- (id)sharedObjectSubtitleForTransformer:(id)a0;
- (id)sharedObjectInformationForTransformer:(id)a0;
- (id)sharedObjectIconForTransformer:(id)a0;
- (BOOL)sharedObjectPrefersIconAsImageForTransformer:(id)a0;
- (id)sharedObjectPreviewSummaryForTransformer:(id)a0;
- (long long)summaryTypeForTransformer:(id)a0;
- (id)_fileTypeStringForTransformer:(id)a0;
- (id)_fileDetailStringForTransformer:(id)a0;
- (id)_bottomCaptionStringForTransformer:(id)a0;
- (BOOL)_isPlainText;
- (BOOL)_isWatchFace;
- (BOOL)_shouldUseSquareIcon;
- (BOOL)_shouldUseCircularIcon;
- (BOOL)_shouldUseBackground;
- (id)_singleLineDescriptionForRemoteFileWithTransformer:(id)a0;
- (id)_nameForTransformer:(id)a0;
- (id)_valueForKeyPathIfLoaded:(id)a0;
- (id)_thumbnailIfLoaded;
- (id)_smallThumbnailIfLoaded;
- (id)_iconIfLoaded;

@end
