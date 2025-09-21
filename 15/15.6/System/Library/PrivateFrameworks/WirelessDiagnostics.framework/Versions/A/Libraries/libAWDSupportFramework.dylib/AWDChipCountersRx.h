@interface AWDChipCountersRx : PBCodable <NSCopying> {
    struct { unsigned char rxbadcm : 1; unsigned char rxbadda : 1; unsigned char rxbadds : 1; unsigned char rxbadproto : 1; unsigned char rxbadsrcmac : 1; unsigned char rxbyte : 1; unsigned char rxctl : 1; unsigned char rxerror : 1; unsigned char rxfilter : 1; unsigned char rxfragerr : 1; unsigned char rxframe : 1; unsigned char rxgiant : 1; unsigned char rxnobuf : 1; unsigned char rxnondata : 1; unsigned char rxnoscb : 1; unsigned char rxrtry : 1; unsigned char rxrunt : 1; } _has;
}

@property (nonatomic) char hasRxframe;
@property (nonatomic) unsigned long long rxframe;
@property (nonatomic) char hasRxbyte;
@property (nonatomic) unsigned long long rxbyte;
@property (nonatomic) char hasRxerror;
@property (nonatomic) unsigned long long rxerror;
@property (nonatomic) char hasRxctl;
@property (nonatomic) unsigned long long rxctl;
@property (nonatomic) char hasRxnobuf;
@property (nonatomic) unsigned long long rxnobuf;
@property (nonatomic) char hasRxrtry;
@property (nonatomic) unsigned long long rxrtry;
@property (nonatomic) char hasRxnondata;
@property (nonatomic) unsigned long long rxnondata;
@property (nonatomic) char hasRxbadds;
@property (nonatomic) unsigned long long rxbadds;
@property (nonatomic) char hasRxbadcm;
@property (nonatomic) unsigned long long rxbadcm;
@property (nonatomic) char hasRxfragerr;
@property (nonatomic) unsigned long long rxfragerr;
@property (nonatomic) char hasRxrunt;
@property (nonatomic) unsigned long long rxrunt;
@property (nonatomic) char hasRxgiant;
@property (nonatomic) unsigned long long rxgiant;
@property (nonatomic) char hasRxnoscb;
@property (nonatomic) unsigned long long rxnoscb;
@property (nonatomic) char hasRxbadproto;
@property (nonatomic) unsigned long long rxbadproto;
@property (nonatomic) char hasRxbadsrcmac;
@property (nonatomic) unsigned long long rxbadsrcmac;
@property (nonatomic) char hasRxbadda;
@property (nonatomic) unsigned long long rxbadda;
@property (nonatomic) char hasRxfilter;
@property (nonatomic) unsigned long long rxfilter;

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
