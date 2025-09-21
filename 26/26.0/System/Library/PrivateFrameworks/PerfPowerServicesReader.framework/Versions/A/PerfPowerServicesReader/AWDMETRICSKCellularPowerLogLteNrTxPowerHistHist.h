@interface AWDMETRICSKCellularPowerLogLteNrTxPowerHistHist : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _counts;
    struct { unsigned char chanType : 1; unsigned char rat : 1; } _has;
}

@property (nonatomic) BOOL hasRat;
@property (nonatomic) int rat;
@property (nonatomic) BOOL hasChanType;
@property (nonatomic) int chanType;
@property (readonly, nonatomic) unsigned long long countsCount;
@property (readonly, nonatomic) unsigned int *counts;

- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)setCounts:(unsigned int *)a0 count:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (unsigned int)countAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (void)addCount:(unsigned int)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)clearCounts;
- (int)StringAsChanType:(id)a0;
- (int)StringAsRat:(id)a0;
- (id)chanTypeAsString:(int)a0;
- (id)ratAsString:(int)a0;

@end
