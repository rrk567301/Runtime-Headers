@class IDSQRProtoMaterial;

@interface IDSQRProtoParticipantUpdateParticipantModeInfo : PBCodable <NSCopying> {
    struct { unsigned char participantId : 1; unsigned char mode : 1; } _has;
}

@property (nonatomic) BOOL hasParticipantId;
@property (nonatomic) unsigned long long participantId;
@property (nonatomic) BOOL hasMode;
@property (nonatomic) int mode;
@property (readonly, nonatomic) BOOL hasClientContextBlob;
@property (retain, nonatomic) IDSQRProtoMaterial *clientContextBlob;

- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsMode:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)modeAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
