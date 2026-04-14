@class NSString, NSArray, INPerson, INSpeakableString;

@interface INSendMessageIntent : INIntent <UNNotificationContentProviding, INSendMessageIntentExport>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSArray *recipients;
@property (readonly) long long outgoingMessageType;
@property (readonly, copy) NSString *content;
@property (readonly, copy) INSpeakableString *speakableGroupName;
@property (readonly, copy) NSString *conversationIdentifier;
@property (readonly, copy) NSString *serviceName;
@property (readonly, copy) INPerson *sender;
@property (readonly, copy) NSArray *attachments;
@property long long effect;
@property (copy) NSString *notificationThreadIdentifier;
@property (copy) NSString *alternativeConversationIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_ignoredParameters;

- (id)domain;
- (void)setAttachments:(id)a0;
- (id)_metadata;
- (void)setContent:(id)a0;
- (void)setDomain:(id)a0;
- (void)setGroupName:(id)a0;
- (void)setServiceName:(id)a0;
- (id)groupName;
- (void)setRecipients:(id)a0;
- (id)verb;
- (void)setSender:(id)a0;
- (id)_dictionaryRepresentation;
- (void)setVerb:(id)a0;
- (id)_typedBackingStore;
- (void)_setMetadata:(id)a0;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (id)initWithRecipients:(id)a0 content:(id)a1 serviceName:(id)a2 sender:(id)a3;
- (BOOL)_isUserConfirmationRequired;
- (BOOL)_isValidSubProducer:(id)a0;
- (id)initWithRecipients:(id)a0 content:(id)a1 groupName:(id)a2 serviceName:(id)a3 sender:(id)a4;
- (id)initWithRecipients:(id)a0 content:(id)a1 speakableGroupName:(id)a2 conversationIdentifier:(id)a3 serviceName:(id)a4 sender:(id)a5;
- (id)initWithRecipients:(id)a0 outgoingMessageType:(long long)a1 content:(id)a2 speakableGroupName:(id)a3 conversationIdentifier:(id)a4 serviceName:(id)a5 sender:(id)a6;
- (BOOL)configureAttributeSet:(id)a0 includingData:(BOOL)a1;
- (id)_spotlightContentType;
- (void)setConversationIdentifier:(id)a0;
- (void)setSpeakableGroupName:(id)a0;
- (id)_redactedDictionaryRepresentation;
- (id)_validParameterCombinationsWithSchema:(id)a0;
- (id)_currentParameterCombination;
- (void)setOutgoingMessageType:(long long)a0;
- (long long)_preferredInteractionDirection;
- (id)initWithRecipients:(id)a0 outgoingMessageType:(long long)a1 content:(id)a2 speakableGroupName:(id)a3 conversationIdentifier:(id)a4 serviceName:(id)a5 sender:(id)a6 attachments:(id)a7;
- (id)_keyCodableAttributes;
- (void)_intents_resolveOutgoingMessageTypeWithCompletionHandler:(id /* block */)a0;

@end
