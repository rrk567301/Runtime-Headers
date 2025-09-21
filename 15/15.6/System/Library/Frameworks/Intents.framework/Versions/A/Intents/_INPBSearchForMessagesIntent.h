@class _INPBDateTimeRange, _INPBDataStringList, _INPBStringList, NSString, _INPBIntentMetadata, _INPBContactList;

@interface _INPBSearchForMessagesIntent : PBCodable <_INPBSearchForMessagesIntent, NSSecureCoding, NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _attributes;
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) int *attributes;
@property (readonly, nonatomic) unsigned long long attributesCount;
@property (retain, nonatomic) _INPBStringList *content;
@property (readonly, nonatomic) char hasContent;
@property (retain, nonatomic) _INPBStringList *conversationIdentifier;
@property (readonly, nonatomic) char hasConversationIdentifier;
@property (retain, nonatomic) _INPBDateTimeRange *dateTimeRange;
@property (readonly, nonatomic) char hasDateTimeRange;
@property (retain, nonatomic) _INPBStringList *groupName;
@property (readonly, nonatomic) char hasGroupName;
@property (retain, nonatomic) _INPBStringList *identifier;
@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) char hasIntentMetadata;
@property (retain, nonatomic) _INPBStringList *notificationIdentifier;
@property (readonly, nonatomic) char hasNotificationIdentifier;
@property (retain, nonatomic) _INPBContactList *recipient;
@property (readonly, nonatomic) char hasRecipient;
@property (retain, nonatomic) _INPBStringList *searchTerm;
@property (readonly, nonatomic) char hasSearchTerm;
@property (retain, nonatomic) _INPBContactList *sender;
@property (readonly, nonatomic) char hasSender;
@property (retain, nonatomic) _INPBDataStringList *speakableGroupName;
@property (readonly, nonatomic) char hasSpeakableGroupName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addAttribute:(int)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsAttributes:(id)a0;
- (void)clearAttributes;
- (int)attributeAtIndex:(unsigned long long)a0;
- (id)attributesAsString:(int)a0;
- (void)setAttributes:(int *)a0 count:(unsigned long long)a1;

@end
