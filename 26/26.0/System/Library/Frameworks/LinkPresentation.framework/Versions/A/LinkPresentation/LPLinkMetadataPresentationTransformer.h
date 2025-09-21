@class LPLinkMetadata, NSString, LPLinkRendererSizeClassParameters, NSURL, LPImage, NSAppearance;

@interface LPLinkMetadataPresentationTransformer : NSObject {
    BOOL _hasComputedEffectiveSizeClass;
    unsigned long long _effectiveSizeClass;
}

@property (readonly, copy, nonatomic) NSString *domainName;
@property (nonatomic) BOOL isSolariumEnabled;
@property (copy, nonatomic) LPLinkMetadata *metadata;
@property (copy, nonatomic) NSURL *URL;
@property (nonatomic, getter=isComplete) BOOL complete;
@property (nonatomic) BOOL allowsTapToLoad;
@property (nonatomic) BOOL allowsTapping;
@property (nonatomic) BOOL allowsPlaybackControls;
@property (nonatomic) BOOL allowsPlayback;
@property (nonatomic) BOOL hasOverriddenBackgroundColor;
@property (nonatomic) BOOL needsDominantBackgroundColor;
@property (nonatomic) unsigned long long preferredSizeClass;
@property (copy, nonatomic) LPLinkRendererSizeClassParameters *sizeClassParameters;
@property (readonly, nonatomic) unsigned long long effectiveSizeClass;
@property (retain, nonatomic) LPImage *sourceContextIcon;
@property (retain, nonatomic) LPImage *mediaOverlayIcon;
@property (retain, nonatomic) NSAppearance *effectiveAppearance;
@property (copy, nonatomic) NSString *sourceBundleIdentifier;
@property (nonatomic) double scaleFactor;
@property (readonly, copy, nonatomic) NSURL *originalURL;
@property (readonly, copy, nonatomic) NSURL *canonicalURL;
@property (readonly, nonatomic) BOOL hasMedia;
@property (nonatomic, getter=isCollaborative) BOOL collaborative;
@property (nonatomic, getter=isInComposeContext) BOOL inComposeContext;
@property (nonatomic, getter=isInSenderContext) BOOL inSenderContext;
@property (nonatomic) unsigned long long bytesLoaded;
@property (nonatomic) long long sharedObjectDownloadState;
@property (nonatomic) long long transferIndicatorDirection;
@property (nonatomic) BOOL hasButtonActions;
@property (nonatomic) BOOL hasButton;

- (id)init;
- (void).cxx_destruct;
- (id)_lastResortIcon;
- (void)_propagateDominantBackgroundColorToDependentPropertiesIfNeeded:(id)a0;
- (id)arAsset;
- (BOOL)_hasNonMicroblogQuotedTextForStyle:(long long)a0;
- (void)_populateDominantBackgroundColorForPropertiesIfNeeded:(id)a0;
- (void)_populateProperties:(id)a0 withPrimaryIcon:(id)a1;
- (void)_populateProperties:(id)a0 withPrimaryIcon:(id)a1 iconProperties:(id)a2;
- (void)_populateProperties:(id)a0 withPrimaryIcon:(id)a1 iconProperties:(id)a2 canBecomeImage:(BOOL)a3;
- (void)_populateProperties:(id)a0 withPrimaryImage:(id)a1;
- (void)_populatePropertiesForMediaOverlayIcon:(id)a0;
- (id)_preferredBackgroundColorImageSourceForProperties:(id)a0;
- (BOOL)_prefersIconAsImage;
- (BOOL)_prefersImageAsIconWithStyle:(long long)a0;
- (BOOL)_prefersLeadingIconWithStyle:(long long)a0;
- (unsigned long long)_rowConfigurationForStyle:(long long)a0;
- (BOOL)_shouldUseMicroblogQuotedTextForStyle:(long long)a0;
- (BOOL)_useVisualRefreshCaptionBarColorsForProperties:(id)a0;
- (id)audioForStyle:(long long)a0;
- (id)backgroundColorForStyle:(long long)a0;
- (id)commonPresentationPropertiesForStyle:(long long)a0;
- (id)domainNameForIndicator;
- (BOOL)hasMediaWithProperties:(id)a0;
- (id)imageForStyle:(long long)a0 imageMetadata:(id)a1 icon:(id *)a2 alternateImages:(id *)a3;
- (id)mainCaptionBarForStyle:(long long)a0;
- (id)presentationProperties;
- (id)quotedTextForStyle:(long long)a0;
- (id)quotedTextForStyleIgnoringAllowsQuotedText:(long long)a0;
- (long long)rendererStyle;
- (id)subtitleForStyle:(long long)a0;
- (id)summaryForStyle:(long long)a0;
- (id)titleForStyle:(long long)a0;
- (id)unspecializedPresentationProperties;
- (id)unspecializedPresentationPropertiesForStyle:(long long)a0;
- (id)videoForStyle:(long long)a0;

@end
