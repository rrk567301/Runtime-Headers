@interface AWDChipErrorCountersTx : PBCodable <NSCopying> {
    struct { unsigned char txchanrej : 1; unsigned char txexptime : 1; unsigned char txphycrs : 1; unsigned char txphyerr : 1; unsigned char txuflo : 1; } _has;
}

@property (nonatomic) char hasTxuflo;
@property (nonatomic) unsigned long long txuflo;
@property (nonatomic) char hasTxphyerr;
@property (nonatomic) unsigned long long txphyerr;
@property (nonatomic) char hasTxphycrs;
@property (nonatomic) unsigned long long txphycrs;
@property (nonatomic) char hasTxchanrej;
@property (nonatomic) unsigned long long txchanrej;
@property (nonatomic) char hasTxexptime;
@property (nonatomic) unsigned long long txexptime;

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
