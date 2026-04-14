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

- (id)reasonAsString:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsReason:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
