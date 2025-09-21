@class NSArray, NSString;

@interface INUnsendMessagesIntent : INIntent <INUnsendMessagesIntentExport>

@property (readonly, copy) NSArray *messageIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)domain;
- (id)_dictionaryRepresentation;
- (void)setDomain:(id)a0;
- (id)verb;
- (void)setVerb:(id)a0;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)initWithMessageIdentifiers:(id)a0;
- (id)parametersByName;
- (void)setMessageIdentifiers:(id)a0;
- (void)setParametersByName:(id)a0;

@end
