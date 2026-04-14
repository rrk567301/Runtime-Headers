@interface CKDPPrivateSearchGetRequestRequestedBloomFilterBits : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _bitPositions;
    struct { unsigned char layer : 1; } _has;
}

@property (nonatomic) BOOL hasLayer;
@property (nonatomic) unsigned int layer;
@property (readonly, nonatomic) unsigned long long bitPositionsCount;
@property (readonly, nonatomic) unsigned int *bitPositions;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addBitPosition:(unsigned int)a0;
- (unsigned int)bitPositionAtIndex:(unsigned long long)a0;
- (void)clearBitPositions;
- (void)setBitPositions:(unsigned int *)a0 count:(unsigned long long)a1;

@end
