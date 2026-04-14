@class NSArray;

@interface TNAppPropertiesProvider : TSAApplicationPropertiesProvider

@property (readonly, copy, nonatomic) NSArray *excelDocumentTypes;

- (unsigned long long)applicationType;
- (id)applicationName;
- (id)applicationDisplayName;
- (id)cloudKitContainerIdentifier;
- (id)documentTypeDisplayName;
- (id)templateTypeDisplayName;
- (id)appChartPropertyOverrides;
- (Class)documentRootClass;
- (id)nativeDocumentType;
- (id)templateDocumentType;
- (id)templateSFFDocumentType;
- (id)tangierEditingFormatDocumentType;
- (id)nativeSFFDocumentType;
- (id)importableDocumentTypes;
- (id)applicationTemplateVariantsForLocale:(id)a0;
- (id)documentTypeDisplayNameForSharingInvitation;
- (id)cloudKitSyncContainerIdentifier;
- (id)bladerunnerContainerIdentifier;

@end
