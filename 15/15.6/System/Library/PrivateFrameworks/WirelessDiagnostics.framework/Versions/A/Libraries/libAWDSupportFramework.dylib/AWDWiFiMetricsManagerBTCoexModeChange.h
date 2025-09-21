@interface AWDWiFiMetricsManagerBTCoexModeChange : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char a2dpConnectionCount : 1; unsigned char clamshellClosed : 1; unsigned char coexMode : 1; unsigned char hidConnectionCount : 1; unsigned char rssi : 1; unsigned char scoConnectionCount : 1; unsigned char wifiInfraChainConfig : 1; unsigned char wifiInfraChannel : 1; unsigned char wifiInfraPhyMode : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasCoexMode;
@property (nonatomic) unsigned int coexMode;
@property (nonatomic) char hasA2dpConnectionCount;
@property (nonatomic) unsigned int a2dpConnectionCount;
@property (nonatomic) char hasHidConnectionCount;
@property (nonatomic) unsigned int hidConnectionCount;
@property (nonatomic) char hasScoConnectionCount;
@property (nonatomic) unsigned int scoConnectionCount;
@property (nonatomic) char hasWifiInfraChannel;
@property (nonatomic) unsigned int wifiInfraChannel;
@property (nonatomic) char hasWifiInfraChainConfig;
@property (nonatomic) unsigned int wifiInfraChainConfig;
@property (nonatomic) char hasWifiInfraPhyMode;
@property (nonatomic) unsigned int wifiInfraPhyMode;
@property (nonatomic) char hasClamshellClosed;
@property (nonatomic) unsigned int clamshellClosed;
@property (nonatomic) char hasRssi;
@property (nonatomic) int rssi;

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
