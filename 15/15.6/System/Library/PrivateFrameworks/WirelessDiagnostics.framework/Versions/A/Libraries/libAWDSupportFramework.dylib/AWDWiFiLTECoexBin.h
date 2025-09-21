@interface AWDWiFiLTECoexBin : PBCodable <NSCopying> {
    struct { unsigned char ctsnotrxafterrts : 1; unsigned char rxframe : 1; unsigned char rxrtry : 1; unsigned char txassocreq : 1; unsigned char txassocrsp : 1; unsigned char txdeauth : 1; unsigned char txframe : 1; unsigned char txnocts : 1; unsigned char txreassocreq : 1; unsigned char txreassocrsp : 1; unsigned char txretrans : 1; unsigned char txrts : 1; } _has;
}

@property (nonatomic) char hasRxframe;
@property (nonatomic) unsigned long long rxframe;
@property (nonatomic) char hasTxframe;
@property (nonatomic) unsigned long long txframe;
@property (nonatomic) char hasRxrtry;
@property (nonatomic) unsigned long long rxrtry;
@property (nonatomic) char hasTxretrans;
@property (nonatomic) unsigned long long txretrans;
@property (nonatomic) char hasTxnocts;
@property (nonatomic) unsigned long long txnocts;
@property (nonatomic) char hasTxrts;
@property (nonatomic) unsigned long long txrts;
@property (nonatomic) char hasTxdeauth;
@property (nonatomic) unsigned long long txdeauth;
@property (nonatomic) char hasTxassocreq;
@property (nonatomic) unsigned long long txassocreq;
@property (nonatomic) char hasTxassocrsp;
@property (nonatomic) unsigned long long txassocrsp;
@property (nonatomic) char hasTxreassocreq;
@property (nonatomic) unsigned long long txreassocreq;
@property (nonatomic) char hasTxreassocrsp;
@property (nonatomic) unsigned long long txreassocrsp;
@property (nonatomic) char hasCtsnotrxafterrts;
@property (nonatomic) unsigned long long ctsnotrxafterrts;

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
