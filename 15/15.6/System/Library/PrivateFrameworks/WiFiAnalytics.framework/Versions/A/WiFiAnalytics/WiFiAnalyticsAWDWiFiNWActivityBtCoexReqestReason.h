@interface WiFiAnalyticsAWDWiFiNWActivityBtCoexReqestReason : PBCodable <NSCopying> {
    struct { unsigned char a2dp : 1; unsigned char acl : 1; unsigned char ble : 1; unsigned char blescan : 1; unsigned char esco : 1; unsigned char inquiry : 1; unsigned char inquiryscan : 1; unsigned char mss : 1; unsigned char other : 1; unsigned char page : 1; unsigned char pagescan : 1; unsigned char park : 1; unsigned char sco : 1; unsigned char sniff : 1; } _has;
}

@property (nonatomic) char hasAcl;
@property (nonatomic) unsigned int acl;
@property (nonatomic) char hasSco;
@property (nonatomic) unsigned int sco;
@property (nonatomic) char hasEsco;
@property (nonatomic) unsigned int esco;
@property (nonatomic) char hasA2dp;
@property (nonatomic) unsigned int a2dp;
@property (nonatomic) char hasSniff;
@property (nonatomic) unsigned int sniff;
@property (nonatomic) char hasPagescan;
@property (nonatomic) unsigned int pagescan;
@property (nonatomic) char hasInquiryscan;
@property (nonatomic) unsigned int inquiryscan;
@property (nonatomic) char hasPage;
@property (nonatomic) unsigned int page;
@property (nonatomic) char hasInquiry;
@property (nonatomic) unsigned int inquiry;
@property (nonatomic) char hasMss;
@property (nonatomic) unsigned int mss;
@property (nonatomic) char hasPark;
@property (nonatomic) unsigned int park;
@property (nonatomic) char hasBle;
@property (nonatomic) unsigned int ble;
@property (nonatomic) char hasBlescan;
@property (nonatomic) unsigned int blescan;
@property (nonatomic) char hasOther;
@property (nonatomic) unsigned int other;

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
