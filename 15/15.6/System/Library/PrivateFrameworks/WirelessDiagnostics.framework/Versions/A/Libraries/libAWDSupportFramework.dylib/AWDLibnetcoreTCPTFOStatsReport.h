@interface AWDLibnetcoreTCPTFOStatsReport : PBCodable <NSCopying> {
    struct { unsigned char numTfoBlackholed : 1; unsigned char numTfoCookieInvalid : 1; unsigned char numTfoCookieRcv : 1; unsigned char numTfoCookieReq : 1; unsigned char numTfoCookieReqRcv : 1; unsigned char numTfoCookieSent : 1; unsigned char numTfoFallback : 1; unsigned char numTfoSynDataAcked : 1; unsigned char numTfoSynDataRcv : 1; unsigned char numTfoSynDataSent : 1; } _has;
}

@property (nonatomic) char hasNumTfoCookieReq;
@property (nonatomic) unsigned long long numTfoCookieReq;
@property (nonatomic) char hasNumTfoCookieRcv;
@property (nonatomic) unsigned long long numTfoCookieRcv;
@property (nonatomic) char hasNumTfoFallback;
@property (nonatomic) unsigned long long numTfoFallback;
@property (nonatomic) char hasNumTfoSynDataSent;
@property (nonatomic) unsigned long long numTfoSynDataSent;
@property (nonatomic) char hasNumTfoSynDataAcked;
@property (nonatomic) unsigned long long numTfoSynDataAcked;
@property (nonatomic) char hasNumTfoSynDataRcv;
@property (nonatomic) unsigned long long numTfoSynDataRcv;
@property (nonatomic) char hasNumTfoCookieReqRcv;
@property (nonatomic) unsigned long long numTfoCookieReqRcv;
@property (nonatomic) char hasNumTfoCookieSent;
@property (nonatomic) unsigned long long numTfoCookieSent;
@property (nonatomic) char hasNumTfoCookieInvalid;
@property (nonatomic) unsigned long long numTfoCookieInvalid;
@property (nonatomic) char hasNumTfoBlackholed;
@property (nonatomic) unsigned long long numTfoBlackholed;

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
