@class _INPBFile, _INPBMessageLinkMetadata, _INPBCurrencyAmountValue, _INPBDateTime, _INPBSticker, _INPBMessageReaction, _INPBLocation, NSString, _INPBContact, _INPBInteger, _INPBDataString, NSArray;

@interface _INPBMessage : PBCodable <_INPBMessage, NSSecureCoding, NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _attributes;
    struct { unsigned char effect : 1; unsigned char type : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *attachmentFiles;
@property (readonly, nonatomic) unsigned long long attachmentFilesCount;
@property (readonly, nonatomic) int *attributes;
@property (readonly, nonatomic) unsigned long long attributesCount;
@property (retain, nonatomic) _INPBFile *audioMessageFile;
@property (readonly, nonatomic) char hasAudioMessageFile;
@property (copy, nonatomic) NSString *content;
@property (readonly, nonatomic) char hasContent;
@property (copy, nonatomic) NSString *conversationIdentifier;
@property (readonly, nonatomic) char hasConversationIdentifier;
@property (retain, nonatomic) _INPBDateTime *dateLastMessageRead;
@property (readonly, nonatomic) char hasDateLastMessageRead;
@property (retain, nonatomic) _INPBDateTime *dateSent;
@property (readonly, nonatomic) char hasDateSent;
@property (nonatomic) int effect;
@property (nonatomic) char hasEffect;
@property (copy, nonatomic) NSString *fileExtension;
@property (readonly, nonatomic) char hasFileExtension;
@property (copy, nonatomic) NSString *groupName;
@property (readonly, nonatomic) char hasGroupName;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) char hasIdentifier;
@property (copy, nonatomic) NSArray *inlineGlyphContents;
@property (readonly, nonatomic) unsigned long long inlineGlyphContentsCount;
@property (retain, nonatomic) _INPBMessageLinkMetadata *linkMetadata;
@property (readonly, nonatomic) char hasLinkMetadata;
@property (retain, nonatomic) _INPBLocation *location;
@property (readonly, nonatomic) char hasLocation;
@property (copy, nonatomic) NSString *locationName;
@property (readonly, nonatomic) char hasLocationName;
@property (retain, nonatomic) _INPBInteger *numberOfAttachments;
@property (readonly, nonatomic) char hasNumberOfAttachments;
@property (retain, nonatomic) _INPBCurrencyAmountValue *paymentAmount;
@property (readonly, nonatomic) char hasPaymentAmount;
@property (retain, nonatomic) _INPBMessageReaction *reaction;
@property (readonly, nonatomic) char hasReaction;
@property (copy, nonatomic) NSArray *recipients;
@property (readonly, nonatomic) unsigned long long recipientsCount;
@property (retain, nonatomic) _INPBMessage *referencedMessage;
@property (readonly, nonatomic) char hasReferencedMessage;
@property (retain, nonatomic) _INPBContact *sender;
@property (readonly, nonatomic) char hasSender;
@property (copy, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) char hasServiceName;
@property (retain, nonatomic) _INPBDataString *speakableGroupName;
@property (readonly, nonatomic) char hasSpeakableGroupName;
@property (retain, nonatomic) _INPBSticker *sticker;
@property (readonly, nonatomic) char hasSticker;
@property (nonatomic) int type;
@property (nonatomic) char hasType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)attachmentFileType;
+ (Class)inlineGlyphContentType;
+ (Class)recipientType;

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
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (int)StringAsAttributes:(id)a0;
- (void)clearAttributes;
- (int)attributeAtIndex:(unsigned long long)a0;
- (id)attributesAsString:(int)a0;
- (void)setAttributes:(int *)a0 count:(unsigned long long)a1;
- (void)addRecipient:(id)a0;
- (void)clearRecipients;
- (int)StringAsEffect:(id)a0;
- (id)effectAsString:(int)a0;
- (void)addAttachmentFile:(id)a0;
- (void)addInlineGlyphContent:(id)a0;
- (id)attachmentFileAtIndex:(unsigned long long)a0;
- (void)clearAttachmentFiles;
- (void)clearInlineGlyphContents;
- (id)inlineGlyphContentAtIndex:(unsigned long long)a0;
- (id)recipientAtIndex:(unsigned long long)a0;

@end
