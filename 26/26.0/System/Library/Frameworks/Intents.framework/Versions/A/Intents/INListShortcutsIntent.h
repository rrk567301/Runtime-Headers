@class NSArray, NSString;

@interface INListShortcutsIntent : INIntent <INListShortcutsIntentExport>

@property (readonly) long long originDevice;
@property (readonly, copy) NSArray *appTitles;
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
- (id)initWithOriginDevice:(long long)a0 appTitles:(id)a1;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)parametersByName;
- (void)setAppTitles:(id)a0;
- (void)setOriginDevice:(long long)a0;
- (void)setParametersByName:(id)a0;

@end
