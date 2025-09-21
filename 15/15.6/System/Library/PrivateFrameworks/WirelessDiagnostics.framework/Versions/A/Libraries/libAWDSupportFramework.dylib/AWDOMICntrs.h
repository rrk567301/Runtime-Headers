@interface AWDOMICntrs : PBCodable <NSCopying> {
    struct { unsigned char heOmitxDlmursdrec : 1; unsigned char heOmitxDlmursdrecAck : 1; unsigned char heOmitxDur : 1; unsigned char heOmitxRetries : 1; unsigned char heOmitxSched : 1; unsigned char heOmitxSuccess : 1; unsigned char heOmitxTxnsts : 1; unsigned char heOmitxTxnstsAck : 1; unsigned char heOmitxUlmucfg : 1; unsigned char heOmitxUlmucfgAck : 1; } _has;
}

@property (nonatomic) char hasHeOmitxSched;
@property (nonatomic) unsigned int heOmitxSched;
@property (nonatomic) char hasHeOmitxSuccess;
@property (nonatomic) unsigned int heOmitxSuccess;
@property (nonatomic) char hasHeOmitxRetries;
@property (nonatomic) unsigned int heOmitxRetries;
@property (nonatomic) char hasHeOmitxDur;
@property (nonatomic) unsigned int heOmitxDur;
@property (nonatomic) char hasHeOmitxUlmucfg;
@property (nonatomic) unsigned int heOmitxUlmucfg;
@property (nonatomic) char hasHeOmitxUlmucfgAck;
@property (nonatomic) unsigned int heOmitxUlmucfgAck;
@property (nonatomic) char hasHeOmitxTxnsts;
@property (nonatomic) unsigned int heOmitxTxnsts;
@property (nonatomic) char hasHeOmitxTxnstsAck;
@property (nonatomic) unsigned int heOmitxTxnstsAck;
@property (nonatomic) char hasHeOmitxDlmursdrec;
@property (nonatomic) unsigned int heOmitxDlmursdrec;
@property (nonatomic) char hasHeOmitxDlmursdrecAck;
@property (nonatomic) unsigned int heOmitxDlmursdrecAck;

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
