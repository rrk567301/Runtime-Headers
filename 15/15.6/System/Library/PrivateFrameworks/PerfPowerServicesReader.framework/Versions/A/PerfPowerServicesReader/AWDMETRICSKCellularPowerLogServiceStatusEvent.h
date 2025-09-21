@interface AWDMETRICSKCellularPowerLogServiceStatusEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char rat : 1; unsigned char status : 1; unsigned char subsId : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasStatus;
@property (nonatomic) int status;
@property (nonatomic) char hasRat;
@property (nonatomic) int rat;
@property (nonatomic) char hasSubsId;
@property (nonatomic) unsigned int subsId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)statusAsString:(int)a0;
- (int)StringAsStatus:(id)a0;
- (int)StringAsRat:(id)a0;
- (id)ratAsString:(int)a0;

@end
