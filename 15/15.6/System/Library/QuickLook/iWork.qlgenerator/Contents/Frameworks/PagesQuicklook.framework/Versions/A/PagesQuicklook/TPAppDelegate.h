@class TPAppPropertiesProvider;

@interface TPAppDelegate : TSABaseApplicationDelegate {
    char _cachedBidiIsSupported;
}

@property (class, readonly, nonatomic) TPAppPropertiesProvider *tp_sharedPropertiesProvider;

+ (id)defaultFontForNewBasicDocumentsFontName;
+ (double)defaultFontForNewBasicDocumentsPointSize;

- (void)dealloc;
- (id)init;
- (char)supportsRTL;
- (id)createCompatibilityDelegate;
- (id)previewImageNameForEncryptedNativeDocument;
- (id)previewImageNameForNativeDocument;
- (char)tableHeaderInspectorShowsRepeatHeaderRowsSwitch;
- (char)textInspectorShowsMoreSubpane;
- (void)createStringsProviders;
- (id)equationEditorAPDID;
- (char)isValidURLForImportedHyperlink:(id)a0 targetDocumentRoot:(id)a1 forCrossDocumentPaste:(char)a2;
- (void)p_inputMethodsChanged:(id)a0;
- (Class)propertiesProviderClass;
- (void)registerSOSClassTypeMappings;
- (id)universalPreviewImageNameForDocumentType:(id)a0;
- (char)imageGalleryCaptionsUsePlaceholderText;
- (char)supportsAutosizingTextboxes;
- (char)supportsLinkedTextBoxes;

@end
