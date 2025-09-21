@interface WiFiAnalyticsAWDWiFiNWActivityTxCompletions : PBCodable <NSCopying> {
    struct { unsigned char chipmodeerror : 1; unsigned char expired : 1; unsigned char internalerror : 1; unsigned char ioerror : 1; unsigned char mbfree : 1; unsigned char noack : 1; unsigned char nobuf : 1; unsigned char noremotepeer : 1; unsigned char noresources : 1; unsigned char success : 1; unsigned char txfailure : 1; } _has;
}

@property (nonatomic) char hasSuccess;
@property (nonatomic) unsigned int success;
@property (nonatomic) char hasExpired;
@property (nonatomic) unsigned int expired;
@property (nonatomic) char hasNobuf;
@property (nonatomic) unsigned int nobuf;
@property (nonatomic) char hasNoack;
@property (nonatomic) unsigned int noack;
@property (nonatomic) char hasTxfailure;
@property (nonatomic) unsigned int txfailure;
@property (nonatomic) char hasNoresources;
@property (nonatomic) unsigned int noresources;
@property (nonatomic) char hasIoerror;
@property (nonatomic) unsigned int ioerror;
@property (nonatomic) char hasMbfree;
@property (nonatomic) unsigned int mbfree;
@property (nonatomic) char hasChipmodeerror;
@property (nonatomic) unsigned int chipmodeerror;
@property (nonatomic) char hasNoremotepeer;
@property (nonatomic) unsigned int noremotepeer;
@property (nonatomic) char hasInternalerror;
@property (nonatomic) unsigned int internalerror;

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
