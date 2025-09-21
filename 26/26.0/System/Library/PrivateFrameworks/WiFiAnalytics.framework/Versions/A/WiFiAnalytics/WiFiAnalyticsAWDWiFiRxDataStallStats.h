@interface WiFiAnalyticsAWDWiFiRxDataStallStats : PBCodable <NSCopying> {
    struct { unsigned char healthcheckFaults : 1; unsigned char healthcheckFaultsRtscts : 1; unsigned char rxMuPpdu : 1; unsigned char rxMuRts : 1; unsigned char rxTotalPpdu : 1; unsigned char srMuRtsNoUcast : 1; unsigned char srRtsCtsNoUcast : 1; unsigned char srStallInProgress : 1; unsigned char srTimNoUcast : 1; unsigned char srTxBlanking : 1; unsigned char stallAge : 1; unsigned char stallElapsedDur : 1; unsigned char txCtsNoUcast : 1; unsigned char txCtsRxUcast : 1; } _has;
}

@property (nonatomic) BOOL hasHealthcheckFaults;
@property (nonatomic) unsigned long long healthcheckFaults;
@property (nonatomic) BOOL hasHealthcheckFaultsRtscts;
@property (nonatomic) unsigned long long healthcheckFaultsRtscts;
@property (nonatomic) BOOL hasTxCtsNoUcast;
@property (nonatomic) unsigned long long txCtsNoUcast;
@property (nonatomic) BOOL hasTxCtsRxUcast;
@property (nonatomic) unsigned long long txCtsRxUcast;
@property (nonatomic) BOOL hasRxMuRts;
@property (nonatomic) unsigned long long rxMuRts;
@property (nonatomic) BOOL hasRxTotalPpdu;
@property (nonatomic) unsigned long long rxTotalPpdu;
@property (nonatomic) BOOL hasRxMuPpdu;
@property (nonatomic) unsigned long long rxMuPpdu;
@property (nonatomic) BOOL hasStallAge;
@property (nonatomic) unsigned long long stallAge;
@property (nonatomic) BOOL hasStallElapsedDur;
@property (nonatomic) unsigned long long stallElapsedDur;
@property (nonatomic) BOOL hasSrStallInProgress;
@property (nonatomic) unsigned long long srStallInProgress;
@property (nonatomic) BOOL hasSrTimNoUcast;
@property (nonatomic) unsigned long long srTimNoUcast;
@property (nonatomic) BOOL hasSrRtsCtsNoUcast;
@property (nonatomic) unsigned long long srRtsCtsNoUcast;
@property (nonatomic) BOOL hasSrMuRtsNoUcast;
@property (nonatomic) unsigned long long srMuRtsNoUcast;
@property (nonatomic) BOOL hasSrTxBlanking;
@property (nonatomic) unsigned long long srTxBlanking;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
