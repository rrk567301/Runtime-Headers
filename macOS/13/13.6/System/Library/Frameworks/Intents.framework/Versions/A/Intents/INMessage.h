@class INMessageLinkMetadata, NSString, NSDate, INCurrencyAmount, NSArray, INSpeakableString, INFile, INImage, INPerson, NSNumber;

@interface INMessage : NSObject <INCacheableContainer, INImageProxyInjecting, INKeyImageProducing, INEnumerable, INMessageExport, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) INImage *_keyImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSDate *dateMessageWasLastRead;
@property (readonly, copy) NSNumber *numberOfAttachments;
@property (readonly) long long messageEffectType;
@property (readonly, copy) INMessage *referencedMessage;
@property (copy) INMessageLinkMetadata *linkMetadata;
@property (copy) INCurrencyAmount *paymentAmount;
@property (copy) NSString *locationName;
@property (copy) NSString *fileExtension;
@property (copy) INPerson *sender;
@property (copy) NSArray *recipients;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *conversationIdentifier;
@property (readonly, copy) NSString *content;
@property (readonly, copy) NSDate *dateSent;
@property (readonly, copy) INSpeakableString *groupName;
@property (readonly) long long messageType;
@property (readonly, copy) NSString *serviceName;
@property (readonly, copy) INFile *audioMessageFile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_injectProxiesForImages:(id /* block */)a0 completion:(id /* block */)a1;
- (id)_dictionaryRepresentation;
- (long long)_compareSubProducerOne:(id)a0 subProducerTwo:(id)a1;
- (id)_intents_cacheableObjects;
- (BOOL)_intents_enumerateObjectsOfClass:(Class)a0 withBlock:(id /* block */)a1;
- (void)_intents_updateContainerWithCache:(id)a0;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)initWithIdentifier:(id)a0 content:(id)a1 dateSent:(id)a2 sender:(id)a3 recipients:(id)a4;
- (id)initWithIdentifier:(id)a0 conversationIdentifier:(id)a1 content:(id)a2 dateSent:(id)a3 sender:(id)a4 recipients:(id)a5 dateMessageWasLastRead:(id)a6 numberOfAttachments:(id)a7 messageType:(long long)a8 messageEffectType:(long long)a9;
- (id)initWithIdentifier:(id)a0 conversationIdentifier:(id)a1 content:(id)a2 dateSent:(id)a3 sender:(id)a4 recipients:(id)a5 groupName:(id)a6 dateMessageWasLastRead:(id)a7 numberOfAttachments:(id)a8 messageType:(long long)a9 messageEffectType:(long long)a10;
- (id)initWithIdentifier:(id)a0 conversationIdentifier:(id)a1 content:(id)a2 dateSent:(id)a3 sender:(id)a4 recipients:(id)a5 groupName:(id)a6 dateMessageWasLastRead:(id)a7 numberOfAttachments:(id)a8 messageType:(long long)a9 messageEffectType:(long long)a10 referencedMessage:(id)a11;
- (id)initWithIdentifier:(id)a0 conversationIdentifier:(id)a1 content:(id)a2 dateSent:(id)a3 sender:(id)a4 recipients:(id)a5 groupName:(id)a6 dateMessageWasLastRead:(id)a7 numberOfAttachments:(id)a8 messageType:(long long)a9 messageEffectType:(long long)a10 referencedMessage:(id)a11 serviceName:(id)a12;
- (id)initWithIdentifier:(id)a0 conversationIdentifier:(id)a1 content:(id)a2 dateSent:(id)a3 sender:(id)a4 recipients:(id)a5 groupName:(id)a6 dateMessageWasLastRead:(id)a7 numberOfAttachments:(id)a8 messageType:(long long)a9 messageEffectType:(long long)a10 referencedMessage:(id)a11 serviceName:(id)a12 audioMessageFile:(id)a13;
- (id)initWithIdentifier:(id)a0 conversationIdentifier:(id)a1 content:(id)a2 dateSent:(id)a3 sender:(id)a4 recipients:(id)a5 groupName:(id)a6 messageType:(long long)a7;
- (id)initWithIdentifier:(id)a0 conversationIdentifier:(id)a1 content:(id)a2 dateSent:(id)a3 sender:(id)a4 recipients:(id)a5 groupName:(id)a6 messageType:(long long)a7 serviceName:(id)a8;
- (id)initWithIdentifier:(id)a0 conversationIdentifier:(id)a1 content:(id)a2 dateSent:(id)a3 sender:(id)a4 recipients:(id)a5 groupName:(id)a6 messageType:(long long)a7 serviceName:(id)a8 audioMessageFile:(id)a9;
- (id)initWithIdentifier:(id)a0 conversationIdentifier:(id)a1 content:(id)a2 dateSent:(id)a3 sender:(id)a4 recipients:(id)a5 messageType:(long long)a6;

@end
