@class NSArray;

@interface KNAppPropertiesProvider : TSAApplicationPropertiesProvider

@property (readonly, nonatomic) NSArray *powerPointDocumentTypes;

- (unsigned long long)applicationType;
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
- (unsigned long long)webVideoRequiredDocumentWriteVersion;

@end
