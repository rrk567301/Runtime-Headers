@interface EDPBInteractionEventMessageMoved : PBCodable <EDPBDataSetters, NSCopying> {
    struct { unsigned char accountId : 1; unsigned char conversationId : 1; unsigned char fromMailboxId : 1; unsigned char messageId : 1; unsigned char toMailboxId : 1; unsigned char fromMailboxType : 1; unsigned char toMailboxType : 1; } _has;
}

@property (nonatomic) char hasAccountId;
@property (nonatomic) long long accountId;
@property (nonatomic) char hasConversationId;
@property (nonatomic) long long conversationId;
@property (nonatomic) char hasMessageId;
@property (nonatomic) long long messageId;
@property (nonatomic) char hasFromMailboxId;
@property (nonatomic) long long fromMailboxId;
@property (nonatomic) char hasFromMailboxType;
@property (nonatomic) int fromMailboxType;
@property (nonatomic) char hasToMailboxId;
@property (nonatomic) long long toMailboxId;
@property (nonatomic) char hasToMailboxType;
@property (nonatomic) int toMailboxType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsToMailboxType:(id)a0;
- (int)StringAsFromMailboxType:(id)a0;
- (id)fromMailboxTypeAsString:(int)a0;
- (id)toMailboxTypeAsString:(int)a0;
- (void)withHasher:(id)a0 setMessage:(id)a1 mailbox:(id)a2;

@end
