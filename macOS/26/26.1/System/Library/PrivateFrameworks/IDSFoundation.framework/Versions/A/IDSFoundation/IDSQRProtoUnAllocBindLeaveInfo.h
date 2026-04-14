@class IDSQRProtoMaterial;

@interface IDSQRProtoUnAllocBindLeaveInfo : PBCodable <NSCopying> {
    struct { unsigned char participantId : 1; unsigned char reason : 1; } _has;
}

@property (nonatomic) BOOL hasParticipantId;
@property (nonatomic) unsigned long long participantId;
@property (readonly, nonatomic) BOOL hasClientContextBlob;
@property (retain, nonatomic) IDSQRProtoMaterial *clientContextBlob;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) int reason;

- (int)StringAsReason:(id)a0;
- (id)reasonAsString:(int)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
