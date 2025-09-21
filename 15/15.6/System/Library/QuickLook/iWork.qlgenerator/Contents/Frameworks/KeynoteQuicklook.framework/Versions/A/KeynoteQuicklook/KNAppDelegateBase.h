@class KNAppPropertiesProvider;

@interface KNAppDelegateBase : TSABaseApplicationDelegate {
    char _cachedBidiIsSupported;
}

@property (class, readonly, nonatomic) KNAppPropertiesProvider *kn_sharedPropertiesProvider;

- (id)init;
- (char)supportsRTL;
- (id)createCompatibilityDelegate;
- (id)defaultHyperlinkURL;
- (double)maximumAspectRatioForPreviewImage;
- (double)mimimumAspectRatioForPreviewImage;
- (id)previewImageNameForEncryptedNativeDocument;
- (id)previewImageNameForNativeDocument;
- (char)supportsShrinkTextToFit;
- (void)applicationDidFinishLaunching;
- (void)createStringsProviders;
- (id)equationEditorAPDID;
- (char)isValidURLForImportedHyperlink:(id)a0 targetDocumentRoot:(id)a1 forCrossDocumentPaste:(char)a2;
- (void)p_inputMethodsChanged:(id)a0;
- (Class)propertiesProviderClass;
- (void)registerAllowedElementKinds;
- (void)registerClassTypeMappings;
- (void)registerDrawableInfoClassMapping;
- (void)registerSOSClassTypeMappings;
- (char)supportsCommentsInMasters;
- (char)supportsFreehandAnimationUI;
- (char)supportsHDRInteractiveCanvases;
- (char)supportsImageGalleryHyperlinks;
- (char)supportsMovieHyperlinks;
- (char)supportsPastingIntoGroups;
- (id)universalPreviewImageNameForDocumentType:(id)a0;

@end
