@class NSString;

@interface INEditMessageIntent : INIntent <INEditMessageIntentExport>

@property (readonly, copy) NSString *messageIdentifier;
@property (readonly, copy) NSString *editedContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)domain;
- (id)_dictionaryRepresentation;
- (void)setDomain:(id)a0;
- (id)verb;
- (void)setMessageIdentifier:(id)a0;
- (void)setVerb:(id)a0;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)_redactedDictionaryRepresentation;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)initWithMessageIdentifier:(id)a0 editedContent:(id)a1;
- (id)parametersByName;
- (void)setEditedContent:(id)a0;
- (void)setParametersByName:(id)a0;

@end
