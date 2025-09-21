@class PETAggregationKey, PETDistribution;

@interface PETAggregatedMessage : PBCodable <NSCopying> {
    struct { unsigned char count : 1; } _has;
}

@property (readonly, nonatomic) char hasKey;
@property (retain, nonatomic) PETAggregationKey *key;
@property (nonatomic) char hasCount;
@property (nonatomic) unsigned int count;
@property (readonly, nonatomic) char hasDistribution;
@property (retain, nonatomic) PETDistribution *distribution;

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

@end
