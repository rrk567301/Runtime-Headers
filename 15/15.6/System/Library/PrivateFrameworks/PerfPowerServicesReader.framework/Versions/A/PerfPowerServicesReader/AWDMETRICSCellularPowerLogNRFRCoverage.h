@interface AWDMETRICSCellularPowerLogNRFRCoverage : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char fR1 : 1; unsigned char fR2 : 1; unsigned char subsId : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasFR1;
@property (nonatomic) int fR1;
@property (nonatomic) char hasSubsId;
@property (nonatomic) unsigned int subsId;
@property (nonatomic) char hasFR2;
@property (nonatomic) int fR2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsFR1:(id)a0;
- (int)StringAsFR2:(id)a0;
- (id)fR1AsString:(int)a0;
- (id)fR2AsString:(int)a0;

@end
