@interface EDPBInteractionEventReplySent : PBCodable <EDPBDataSetters, EDPBBaseMessageFields, NSCopying> {
    struct { unsigned char accountId : 1; unsigned char conversationId : 1; unsigned char mailboxId : 1; unsigned char messageId : 1; unsigned char mailboxType : 1; } _has;
}

@property (nonatomic) long long accountId;
@property (nonatomic) long long mailboxId;
@property (nonatomic) int mailboxType;
@property (nonatomic) long long conversationId;
@property (nonatomic) long long messageId;
@property (nonatomic) char hasAccountId;
@property (nonatomic) long long accountId;
@property (nonatomic) char hasMailboxId;
@property (nonatomic) long long mailboxId;
@property (nonatomic) char hasMailboxType;
@property (nonatomic) int mailboxType;
@property (nonatomic) char hasConversationId;
@property (nonatomic) long long conversationId;
@property (nonatomic) char hasMessageId;
@property (nonatomic) long long messageId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsMailboxType:(id)a0;
- (id)mailboxTypeAsString:(int)a0;
- (void)withHasher:(id)a0 setMessage:(id)a1 data:(id)a2;

@end
