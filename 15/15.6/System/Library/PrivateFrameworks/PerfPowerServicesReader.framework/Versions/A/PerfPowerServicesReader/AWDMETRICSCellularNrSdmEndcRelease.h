@interface AWDMETRICSCellularNrSdmEndcRelease : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char fr : 1; unsigned char subsId : 1; unsigned char triggerCause : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasTriggerCause;
@property (nonatomic) int triggerCause;
@property (nonatomic) char hasSubsId;
@property (nonatomic) unsigned int subsId;
@property (nonatomic) char hasFr;
@property (nonatomic) int fr;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsFr:(id)a0;
- (int)StringAsTriggerCause:(id)a0;
- (id)frAsString:(int)a0;
- (id)triggerCauseAsString:(int)a0;

@end
