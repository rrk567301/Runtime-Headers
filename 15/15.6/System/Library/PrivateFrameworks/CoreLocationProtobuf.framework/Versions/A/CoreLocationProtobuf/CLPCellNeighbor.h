@interface CLPCellNeighbor : PBCodable <NSCopying> {
    struct { unsigned char ecn0 : 1; unsigned char psc : 1; unsigned char rscp : 1; unsigned char rssi : 1; unsigned char uarfcn : 1; } _has;
}

@property (nonatomic) char hasUarfcn;
@property (nonatomic) int uarfcn;
@property (nonatomic) char hasPsc;
@property (nonatomic) int psc;
@property (nonatomic) char hasRssi;
@property (nonatomic) int rssi;
@property (nonatomic) char hasEcn0;
@property (nonatomic) int ecn0;
@property (nonatomic) char hasRscp;
@property (nonatomic) int rscp;

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
