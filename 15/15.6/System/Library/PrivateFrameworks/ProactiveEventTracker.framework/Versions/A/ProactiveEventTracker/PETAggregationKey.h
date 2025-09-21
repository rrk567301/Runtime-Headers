@class PETRawMessage;

@interface PETAggregationKey : PBCodable <NSCopying> {
    struct { unsigned char bucket : 1; unsigned char datestamp : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (nonatomic) char hasDatestamp;
@property (nonatomic) unsigned int datestamp;
@property (nonatomic) char hasBucket;
@property (nonatomic) double bucket;
@property (readonly, nonatomic) char hasRawMessage;
@property (retain, nonatomic) PETRawMessage *rawMessage;

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
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;

@end
