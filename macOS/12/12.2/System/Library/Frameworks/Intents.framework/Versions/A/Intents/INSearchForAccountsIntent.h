@class INSpeakableString, NSString;

@interface INSearchForAccountsIntent : INIntent <INSearchForAccountsIntentExport>

@property (readonly, copy) INSpeakableString *accountNickname;
@property (readonly) long long accountType;
@property (readonly, copy) INSpeakableString *organizationName;
@property (readonly) long long requestedBalanceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)domain;
- (id)_metadata;
- (id)verb;
- (void)setDomain:(id)a0;
- (void)setAccountType:(long long)a0;
- (id)_dictionaryRepresentation;
- (void)setOrganizationName:(id)a0;
- (void)setVerb:(id)a0;
- (id)_typedBackingStore;
- (void)_setMetadata:(id)a0;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)setAccountNickname:(id)a0;
- (void)setRequestedBalanceType:(long long)a0;
- (id)initWithAccountNickname:(id)a0 accountType:(long long)a1 organizationName:(id)a2 requestedBalanceType:(long long)a3;

@end
