@class IDSQRProtoMaterial;

@interface IDSQRProtoParticipantUpdateParticipantModeInfo : PBCodable <NSCopying> {
    struct { unsigned char participantId : 1; unsigned char mode : 1; } _has;
}

@property (nonatomic) char hasParticipantId;
@property (nonatomic) unsigned long long participantId;
@property (nonatomic) char hasMode;
@property (nonatomic) int mode;
@property (readonly, nonatomic) char hasClientContextBlob;
@property (retain, nonatomic) IDSQRProtoMaterial *clientContextBlob;

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
- (int)StringAsMode:(id)a0;
- (id)modeAsString:(int)a0;

@end
