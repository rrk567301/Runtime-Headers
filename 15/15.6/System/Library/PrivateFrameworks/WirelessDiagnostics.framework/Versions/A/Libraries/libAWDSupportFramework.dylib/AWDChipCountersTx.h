@interface AWDChipCountersTx : PBCodable <NSCopying> {
    struct { unsigned char txbyte : 1; unsigned char txchit : 1; unsigned char txcmiss : 1; unsigned char txctl : 1; unsigned char txerror : 1; unsigned char txframe : 1; unsigned char txnoassoc : 1; unsigned char txnobuf : 1; unsigned char txprshort : 1; unsigned char txretrans : 1; unsigned char txrunt : 1; unsigned char txserr : 1; } _has;
}

@property (nonatomic) char hasTxframe;
@property (nonatomic) unsigned long long txframe;
@property (nonatomic) char hasTxbyte;
@property (nonatomic) unsigned long long txbyte;
@property (nonatomic) char hasTxretrans;
@property (nonatomic) unsigned long long txretrans;
@property (nonatomic) char hasTxerror;
@property (nonatomic) unsigned long long txerror;
@property (nonatomic) char hasTxctl;
@property (nonatomic) unsigned long long txctl;
@property (nonatomic) char hasTxprshort;
@property (nonatomic) unsigned long long txprshort;
@property (nonatomic) char hasTxserr;
@property (nonatomic) unsigned long long txserr;
@property (nonatomic) char hasTxnobuf;
@property (nonatomic) unsigned long long txnobuf;
@property (nonatomic) char hasTxnoassoc;
@property (nonatomic) unsigned long long txnoassoc;
@property (nonatomic) char hasTxrunt;
@property (nonatomic) unsigned long long txrunt;
@property (nonatomic) char hasTxchit;
@property (nonatomic) unsigned long long txchit;
@property (nonatomic) char hasTxcmiss;
@property (nonatomic) unsigned long long txcmiss;

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
