@class TNAppPropertiesProvider;

@interface TNAppDelegateBase : TSABaseApplicationDelegate

@property (class, readonly, nonatomic) TNAppPropertiesProvider *tn_sharedPropertiesProvider;

- (id)init;
- (void)applicationDidFinishLaunching:(id)a0;
- (BOOL)supportsRTL;
- (id)createCompatibilityDelegate;
- (id)previewImageNameForNativeDocument;
- (id)previewImageNameForEncryptedNativeDocument;
- (void)registerSOSClassTypeMappings;
- (BOOL)isValidURLForImportedHyperlink:(id)a0 targetDocumentRoot:(id)a1 forCrossDocumentPaste:(BOOL)a2;
- (Class)propertiesProviderClass;
- (id)universalPreviewImageNameForDocumentType:(id)a0;
- (id)equationEditorAPDID;
- (void)registerClassTypeMappings;
- (void)p_inputMethodsChanged:(id)a0;
- (void)configureSharedCode;
- (Class)documentViewControllerClass;

@end
