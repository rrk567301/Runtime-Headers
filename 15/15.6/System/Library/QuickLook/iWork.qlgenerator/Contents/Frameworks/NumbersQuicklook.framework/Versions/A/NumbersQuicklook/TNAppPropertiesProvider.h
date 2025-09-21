@class NSArray;

@interface TNAppPropertiesProvider : TSAApplicationPropertiesProvider

@property (readonly, copy, nonatomic) NSArray *excelDocumentTypes;

- (id)applicationName;
- (id)applicationDisplayName;
- (id)cloudKitContainerIdentifier;
- (id)appChartPropertyOverrides;
- (id)applicationTemplateVariantsForLocale:(id)a0;
- (Class)documentRootClass;
- (id)documentTypeDisplayName;
- (id)importableDocumentTypes;
- (id)nativeDocumentType;
- (id)nativeSFFDocumentType;
- (id)tangierEditingFormatDocumentType;
- (id)templateDocumentType;
- (id)templateSFFDocumentType;
- (id)templateTypeDisplayName;
- (id)cloudKitSyncContainerIdentifier;
- (id)bladerunnerContainerIdentifier;
- (id)documentShareURLScheme;
- (id)documentTypeDisplayNameForSharingInvitation;
- (char)requiresFourOneDocumentReadWarningForInlineDrawables;
- (char)shouldDisallowDrawableCommandsWithoutParentInfo;
- (char)supportsFrehandAnimations;
- (char)requiresElevenOneDocumentReadWarningForObjectHyperlinks;

@end
