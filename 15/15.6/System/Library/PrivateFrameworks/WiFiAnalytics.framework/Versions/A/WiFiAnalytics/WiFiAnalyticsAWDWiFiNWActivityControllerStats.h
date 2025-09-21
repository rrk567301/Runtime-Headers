@class WiFiAnalyticsAWDWiFiNWActivityPowerPStats, WiFiAnalyticsAWDWiFiNWActivityImpedingFunctions, WiFiAnalyticsAWDWiFiNWActivityRateAndAggregation, WiFiAnalyticsAWDWiFiNWActivityBtCoex, WiFiAnalyticsAWDWiFiNWActivityOMI, NSMutableArray, WiFiAnalyticsAWDWiFiNWActivityRuUsage, WiFiAnalyticsAWDWiFiNWActivityScanActivity, WiFiAnalyticsAWDWiFiNWActivityAggregateMetrics;

@interface WiFiAnalyticsAWDWiFiNWActivityControllerStats : PBCodable <NSCopying> {
    struct { unsigned char commandsIssued : 1; unsigned char backoffStuck : 1; unsigned char ccCaptureDriverLogs : 1; unsigned char channel : 1; unsigned char channelBandwidth : 1; unsigned char channelsVisited0 : 1; unsigned char channelsVisited1 : 1; unsigned char commanderHalted : 1; unsigned char controllerResets : 1; unsigned char iorSuccess : 1; unsigned char iorWA : 1; } _has;
}

@property (nonatomic) char hasControllerResets;
@property (nonatomic) unsigned int controllerResets;
@property (nonatomic) char hasBackoffStuck;
@property (nonatomic) unsigned int backoffStuck;
@property (readonly, nonatomic) char hasScanActivity;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityScanActivity *scanActivity;
@property (readonly, nonatomic) char hasPowerActivity;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityPowerPStats *powerActivity;
@property (readonly, nonatomic) char hasImpedingFunctions;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityImpedingFunctions *impedingFunctions;
@property (readonly, nonatomic) char hasAggregateMetrics;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityAggregateMetrics *aggregateMetrics;
@property (readonly, nonatomic) char hasBtCoex;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityBtCoex *btCoex;
@property (nonatomic) char hasChannelsVisited0;
@property (nonatomic) unsigned int channelsVisited0;
@property (nonatomic) char hasChannelsVisited1;
@property (nonatomic) unsigned int channelsVisited1;
@property (readonly, nonatomic) char hasPhyrate;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityRateAndAggregation *phyrate;
@property (nonatomic) char hasChannel;
@property (nonatomic) unsigned int channel;
@property (nonatomic) char hasChannelBandwidth;
@property (nonatomic) unsigned int channelBandwidth;
@property (nonatomic) char hasCcCaptureDriverLogs;
@property (nonatomic) unsigned int ccCaptureDriverLogs;
@property (nonatomic) char hasCommandsIssued;
@property (nonatomic) unsigned long long commandsIssued;
@property (nonatomic) char hasCommanderHalted;
@property (nonatomic) unsigned int commanderHalted;
@property (nonatomic) char hasIorSuccess;
@property (nonatomic) unsigned int iorSuccess;
@property (nonatomic) char hasIorWA;
@property (nonatomic) unsigned int iorWA;
@property (retain, nonatomic) NSMutableArray *txmpduWMEs;
@property (retain, nonatomic) NSMutableArray *rxmpduWMEs;
@property (retain, nonatomic) NSMutableArray *rxmdpuLosts;
@property (readonly, nonatomic) char hasOmi;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityOMI *omi;
@property (readonly, nonatomic) char hasRuUsage;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityRuUsage *ruUsage;

+ (Class)rxmdpuLostType;
+ (Class)rxmpduWMEType;
+ (Class)txmpduWMEType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearRxmpduWMEs;
- (unsigned long long)rxmpduWMEsCount;
- (void)clearTxmpduWMEs;
- (unsigned long long)txmpduWMEsCount;
- (void)addRxmdpuLost:(id)a0;
- (void)addRxmpduWME:(id)a0;
- (void)addTxmpduWME:(id)a0;
- (void)clearRxmdpuLosts;
- (id)rxmdpuLostAtIndex:(unsigned long long)a0;
- (unsigned long long)rxmdpuLostsCount;
- (id)rxmpduWMEAtIndex:(unsigned long long)a0;
- (id)txmpduWMEAtIndex:(unsigned long long)a0;

@end
