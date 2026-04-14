@class TPAppPropertiesProvider, NSArray;

@interface TPAppDelegate : TSABaseApplicationDelegate {
    NSArray *_openDocListOnLaunch;
    BOOL _appDoneLaunching;
    BOOL _cachedBidiIsSupported;
}

@property (class, readonly, nonatomic) TPAppPropertiesProvider *tp_sharedPropertiesProvider;

+ (id)defaultFontForNewBasicDocumentsFontName;
+ (double)defaultFontForNewBasicDocumentsPointSize;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)supportsRTL;
- (id)createCompatibilityDelegate;
- (BOOL)tableHeaderInspectorShowsRepeatHeaderRowsSwitch;
- (BOOL)textInspectorShowsMoreSubpane;
- (id)previewImageNameForNativeDocument;
- (id)previewImageNameForEncryptedNativeDocument;
- (void)registerSOSClassTypeMappings;
- (BOOL)isValidURLForImportedHyperlink:(id)a0 targetDocumentRoot:(id)a1 forCrossDocumentPaste:(BOOL)a2;
- (Class)propertiesProviderClass;
- (id)universalPreviewImageNameForDocumentType:(id)a0;
- (id)equationEditorAPDID;
- (void)p_inputMethodsChanged:(id)a0;
- (BOOL)supportsAutosizingTextboxes;
- (BOOL)supportsLinkedTextBoxes;
- (BOOL)imageGalleryCaptionsUsePlaceholderText;
- (void)p_openListOfDocuments:(id)a0;

@end
