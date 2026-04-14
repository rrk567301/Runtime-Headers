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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (int)StringAsMode:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)modeAsString:(int)a0;

@end
