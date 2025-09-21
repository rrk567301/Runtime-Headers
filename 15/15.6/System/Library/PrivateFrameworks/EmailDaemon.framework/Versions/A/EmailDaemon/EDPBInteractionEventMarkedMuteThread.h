@interface EDPBInteractionEventMarkedMuteThread : PBCodable <EDPBDataSetters, NSCopying> {
    struct { unsigned char conversationId : 1; unsigned char value : 1; } _has;
}

@property (nonatomic) char hasConversationId;
@property (nonatomic) long long conversationId;
@property (nonatomic) char hasValue;
@property (nonatomic) char value;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)withHasher:(id)a0 setConversationID:(long long)a1 data:(id)a2;

@end
