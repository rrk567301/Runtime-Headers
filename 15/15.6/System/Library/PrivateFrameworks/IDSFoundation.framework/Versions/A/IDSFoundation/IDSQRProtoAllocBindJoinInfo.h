@class IDSQRProtoMaterial;

@interface IDSQRProtoAllocBindJoinInfo : PBCodable <NSCopying> {
    struct { unsigned char participantId : 1; unsigned char reason : 1; } _has;
}

@property (nonatomic) char hasParticipantId;
@property (nonatomic) unsigned long long participantId;
@property (readonly, nonatomic) char hasClientContextBlob;
@property (retain, nonatomic) IDSQRProtoMaterial *clientContextBlob;
@property (nonatomic) char hasReason;
@property (nonatomic) int reason;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsReason:(id)a0;
- (id)reasonAsString:(int)a0;

@end
