@class KNAppPropertiesProvider;

@interface KNAppDelegateBase : TSABaseApplicationDelegate {
    BOOL _cachedBidiIsSupported;
}

@property (class, readonly, nonatomic) KNAppPropertiesProvider *kn_sharedPropertiesProvider;

- (id)init;
- (BOOL)supportsRTL;
- (id)createCompatibilityDelegate;
- (id)defaultHyperlinkURL;
- (BOOL)supportsShrinkTextToFit;
- (id)previewImageNameForNativeDocument;
- (id)previewImageNameForEncryptedNativeDocument;
- (double)mimimumAspectRatioForPreviewImage;
- (double)maximumAspectRatioForPreviewImage;
- (void)applicationDidFinishLaunching;
- (void)registerDrawableInfoClassMapping;
- (void)registerSOSClassTypeMappings;
- (BOOL)isValidURLForImportedHyperlink:(id)a0 targetDocumentRoot:(id)a1 forCrossDocumentPaste:(BOOL)a2;
- (Class)propertiesProviderClass;
- (id)universalPreviewImageNameForDocumentType:(id)a0;
- (id)equationEditorAPDID;
- (void)registerClassTypeMappings;
- (void)registerAllowedElementKinds;
- (BOOL)supportsPastingIntoGroups;
- (BOOL)supportsFreehandAnimationUI;
- (BOOL)supportsCommentsInMasters;
- (void)p_inputMethodsChanged:(id)a0;
- (BOOL)supportsImageGalleryHyperlinks;
- (BOOL)supportsMovieHyperlinks;

@end
