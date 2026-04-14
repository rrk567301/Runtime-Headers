@class NSString, INCallGroupConversationFilter, INCallGroupConversation;

@interface INJoinCallIntent : INIntent <INJoinCallIntentExport>

@property (readonly, copy) INCallGroupConversationFilter *groupConversationFilter;
@property (readonly, copy) INCallGroupConversation *groupConversation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)domain;
- (id)_metadata;
- (id)verb;
- (void)setDomain:(id)a0;
- (id)_dictionaryRepresentation;
- (void)setVerb:(id)a0;
- (id)_typedBackingStore;
- (void)_setMetadata:(id)a0;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)setGroupConversation:(id)a0;
- (void)setGroupConversationFilter:(id)a0;
- (id)initWithGroupConversationFilter:(id)a0 groupConversation:(id)a1;

@end
