@class NSString, NSArray, _INPBContact, _INPBString, _INPBIntentMetadata, _INPBDataString;

@interface _INPBSendMessageIntent : PBCodable <_INPBSendMessageIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char effect : 1; unsigned char outgoingMessageType : 1; unsigned char shouldHideSiriAttribution : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *alternativeConversationIdentifier;
@property (readonly, nonatomic) char hasAlternativeConversationIdentifier;
@property (copy, nonatomic) NSArray *attachments;
@property (readonly, nonatomic) unsigned long long attachmentsCount;
@property (retain, nonatomic) _INPBString *content;
@property (readonly, nonatomic) char hasContent;
@property (copy, nonatomic) NSString *conversationIdentifier;
@property (readonly, nonatomic) char hasConversationIdentifier;
@property (nonatomic) int effect;
@property (nonatomic) char hasEffect;
@property (retain, nonatomic) _INPBString *groupName;
@property (readonly, nonatomic) char hasGroupName;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) char hasIntentMetadata;
@property (copy, nonatomic) NSString *notificationThreadIdentifier;
@property (readonly, nonatomic) char hasNotificationThreadIdentifier;
@property (nonatomic) int outgoingMessageType;
@property (nonatomic) char hasOutgoingMessageType;
@property (copy, nonatomic) NSArray *recipients;
@property (readonly, nonatomic) unsigned long long recipientsCount;
@property (retain, nonatomic) _INPBContact *sender;
@property (readonly, nonatomic) char hasSender;
@property (copy, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) char hasServiceName;
@property (nonatomic) char shouldHideSiriAttribution;
@property (nonatomic) char hasShouldHideSiriAttribution;
@property (retain, nonatomic) _INPBDataString *speakableGroupName;
@property (readonly, nonatomic) char hasSpeakableGroupName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)attachmentsType;
+ (Class)recipientType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addAttachments:(id)a0;
- (void)addRecipient:(id)a0;
- (int)StringAsOutgoingMessageType:(id)a0;
- (void)clearRecipients;
- (int)StringAsEffect:(id)a0;
- (id)effectAsString:(int)a0;
- (id)attachmentsAtIndex:(unsigned long long)a0;
- (void)clearAttachments;
- (id)outgoingMessageTypeAsString:(int)a0;
- (id)recipientAtIndex:(unsigned long long)a0;

@end
