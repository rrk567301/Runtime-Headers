@class IDSQRProtoMaterial;

@interface IDSQRProtoAllocBindJoinInfo : PBCodable <NSCopying> {
    struct { unsigned char participantId : 1; unsigned char reason : 1; } _has;
}

@property (nonatomic) BOOL hasParticipantId;
@property (nonatomic) unsigned long long participantId;
@property (readonly, nonatomic) BOOL hasClientContextBlob;
@property (retain, nonatomic) IDSQRProtoMaterial *clientContextBlob;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) int reason;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reasonAsString:(int)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (int)StringAsReason:(id)a0;
- (void).cxx_destruct;

@end
