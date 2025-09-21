@interface AWDWiFiMetricInterfaceStats : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char a2dpAssocMinutes : 1; unsigned char cellularDataRxBytes : 1; unsigned char cellularDataTxBytes : 1; unsigned char hidAssocMinutes : 1; unsigned char scoAssocMinutes : 1; unsigned char statsCollectionMinutes : 1; unsigned char wifiA2dpRxBytes : 1; unsigned char wifiA2dpTxBytes : 1; unsigned char wifiAssocMinutes : 1; unsigned char wifiHidRxBytes : 1; unsigned char wifiHidTxBytes : 1; unsigned char wifiRxBytes : 1; unsigned char wifiScoRxBytes : 1; unsigned char wifiScoTxBytes : 1; unsigned char wifiTxBytes : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasWifiA2dpRxBytes;
@property (nonatomic) unsigned int wifiA2dpRxBytes;
@property (nonatomic) char hasWifiScoRxBytes;
@property (nonatomic) unsigned int wifiScoRxBytes;
@property (nonatomic) char hasWifiRxBytes;
@property (nonatomic) unsigned int wifiRxBytes;
@property (nonatomic) char hasWifiHidRxBytes;
@property (nonatomic) unsigned int wifiHidRxBytes;
@property (nonatomic) char hasCellularDataRxBytes;
@property (nonatomic) unsigned int cellularDataRxBytes;
@property (nonatomic) char hasWifiA2dpTxBytes;
@property (nonatomic) unsigned int wifiA2dpTxBytes;
@property (nonatomic) char hasWifiScoTxBytes;
@property (nonatomic) unsigned int wifiScoTxBytes;
@property (nonatomic) char hasWifiTxBytes;
@property (nonatomic) unsigned int wifiTxBytes;
@property (nonatomic) char hasWifiHidTxBytes;
@property (nonatomic) unsigned int wifiHidTxBytes;
@property (nonatomic) char hasCellularDataTxBytes;
@property (nonatomic) unsigned int cellularDataTxBytes;
@property (nonatomic) char hasStatsCollectionMinutes;
@property (nonatomic) unsigned int statsCollectionMinutes;
@property (nonatomic) char hasWifiAssocMinutes;
@property (nonatomic) unsigned int wifiAssocMinutes;
@property (nonatomic) char hasA2dpAssocMinutes;
@property (nonatomic) unsigned int a2dpAssocMinutes;
@property (nonatomic) char hasScoAssocMinutes;
@property (nonatomic) unsigned int scoAssocMinutes;
@property (nonatomic) char hasHidAssocMinutes;
@property (nonatomic) unsigned int hidAssocMinutes;

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
