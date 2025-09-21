@interface WiFiAnalyticsAWDWiFiNWActivityScanActivity : PBCodable <NSCopying> {
    struct { unsigned char assocCount : 1; unsigned char assocDur : 1; unsigned char otherCount : 1; unsigned char otherDur : 1; unsigned char pnoBSSIDCount : 1; unsigned char pnoBSSIDDur : 1; unsigned char pnoSSIDCount : 1; unsigned char pnoSSIDDur : 1; unsigned char roamCount : 1; unsigned char roamDur : 1; unsigned char userCount : 1; unsigned char userDur : 1; } _has;
}

@property (nonatomic) char hasUserCount;
@property (nonatomic) unsigned int userCount;
@property (nonatomic) char hasUserDur;
@property (nonatomic) unsigned int userDur;
@property (nonatomic) char hasRoamCount;
@property (nonatomic) unsigned int roamCount;
@property (nonatomic) char hasRoamDur;
@property (nonatomic) unsigned int roamDur;
@property (nonatomic) char hasAssocCount;
@property (nonatomic) unsigned int assocCount;
@property (nonatomic) char hasAssocDur;
@property (nonatomic) unsigned int assocDur;
@property (nonatomic) char hasPnoBSSIDCount;
@property (nonatomic) unsigned int pnoBSSIDCount;
@property (nonatomic) char hasPnoBSSIDDur;
@property (nonatomic) unsigned int pnoBSSIDDur;
@property (nonatomic) char hasPnoSSIDCount;
@property (nonatomic) unsigned int pnoSSIDCount;
@property (nonatomic) char hasPnoSSIDDur;
@property (nonatomic) unsigned int pnoSSIDDur;
@property (nonatomic) char hasOtherCount;
@property (nonatomic) unsigned int otherCount;
@property (nonatomic) char hasOtherDur;
@property (nonatomic) unsigned int otherDur;

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
