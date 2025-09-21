@interface AWDMETRICSKCellularPowerLogWcdmaRrcStateChange : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char connState : 1; unsigned char establishmentCause : 1; unsigned char prevConnState : 1; unsigned char prevDurMs : 1; unsigned char releaseCause : 1; unsigned char subsId : 1; unsigned char isDataPreferred : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasSubsId;
@property (nonatomic) unsigned int subsId;
@property (nonatomic) char hasConnState;
@property (nonatomic) int connState;
@property (nonatomic) char hasPrevConnState;
@property (nonatomic) int prevConnState;
@property (nonatomic) char hasPrevDurMs;
@property (nonatomic) unsigned int prevDurMs;
@property (nonatomic) char hasEstablishmentCause;
@property (nonatomic) int establishmentCause;
@property (nonatomic) char hasReleaseCause;
@property (nonatomic) int releaseCause;
@property (nonatomic) char hasIsDataPreferred;
@property (nonatomic) char isDataPreferred;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsConnState:(id)a0;
- (int)StringAsEstablishmentCause:(id)a0;
- (int)StringAsPrevConnState:(id)a0;
- (int)StringAsReleaseCause:(id)a0;
- (id)connStateAsString:(int)a0;
- (id)establishmentCauseAsString:(int)a0;
- (id)prevConnStateAsString:(int)a0;
- (id)releaseCauseAsString:(int)a0;

@end
