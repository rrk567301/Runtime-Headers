@interface AWDMETRICSCellularPowerLogNRDCEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char event : 1; unsigned char fr : 1; unsigned char subsId : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasEvent;
@property (nonatomic) int event;
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
- (int)StringAsEvent:(id)a0;
- (id)eventAsString:(int)a0;
- (int)StringAsFr:(id)a0;
- (id)frAsString:(int)a0;

@end
