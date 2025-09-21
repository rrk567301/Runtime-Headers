@interface AWDMETRICSKCellularLtePagingCycle : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char earfcn : 1; unsigned char nbMs : 1; unsigned char pagingCycleMs : 1; unsigned char phyCellId : 1; unsigned char subsId : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasEarfcn;
@property (nonatomic) unsigned int earfcn;
@property (nonatomic) char hasNbMs;
@property (nonatomic) unsigned int nbMs;
@property (nonatomic) char hasPagingCycleMs;
@property (nonatomic) unsigned int pagingCycleMs;
@property (nonatomic) char hasSubsId;
@property (nonatomic) unsigned int subsId;
@property (nonatomic) char hasPhyCellId;
@property (nonatomic) unsigned int phyCellId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
