@class WiFiAnalyticsAWDWiFiNWActivityNANInterfaceStats, NSString, WiFiAnalyticsAWDWiFiNWActivityAWDLInterfaceStats, WiFiAnalyticsAWDLinkQualityMeasurements, NSMutableArray, WiFiAnalyticsAWDWiFiNWActivityControllerStats, WiFiAnalyticsAWDWiFiNWActivityIRInterfaceStats, WiFiAnalyticsAWDWiFiNWActivityAPInterfaceStats;

@interface WiFiAnalyticsAWDWiFiNWActivity : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *activities;
@property (retain, nonatomic) NSMutableArray *interfaceStats;
@property (retain, nonatomic) NSMutableArray *peerStats;
@property (readonly, nonatomic) char hasControllerStats;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityControllerStats *controllerStats;
@property (readonly, nonatomic) char hasLinkQualSample;
@property (retain, nonatomic) WiFiAnalyticsAWDLinkQualityMeasurements *linkQualSample;
@property (retain, nonatomic) NSMutableArray *scores;
@property (retain, nonatomic) NSMutableArray *btleConnections;
@property (readonly, nonatomic) char hasApProfile;
@property (retain, nonatomic) NSString *apProfile;
@property (readonly, nonatomic) char hasAwdlIfStats;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityAWDLInterfaceStats *awdlIfStats;
@property (readonly, nonatomic) char hasApIfStats;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityAPInterfaceStats *apIfStats;
@property (readonly, nonatomic) char hasNanIfStats;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityNANInterfaceStats *nanIfStats;
@property (readonly, nonatomic) char hasIrIfStats;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityIRInterfaceStats *irIfStats;

+ (Class)activitiesType;
+ (Class)btleConnectionType;
+ (Class)interfaceStatsType;
+ (Class)peerStatsType;
+ (Class)scoreType;

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
- (void)clearScores;
- (unsigned long long)activitiesCount;
- (void)clearActivities;
- (id)activitiesAtIndex:(unsigned long long)a0;
- (void)addActivities:(id)a0;
- (void)addBtleConnection:(id)a0;
- (void)addInterfaceStats:(id)a0;
- (void)addPeerStats:(id)a0;
- (void)addScore:(id)a0;
- (id)btleConnectionAtIndex:(unsigned long long)a0;
- (unsigned long long)btleConnectionsCount;
- (void)clearBtleConnections;
- (void)clearInterfaceStats;
- (void)clearPeerStats;
- (id)interfaceStatsAtIndex:(unsigned long long)a0;
- (unsigned long long)interfaceStatsCount;
- (id)peerStatsAtIndex:(unsigned long long)a0;
- (unsigned long long)peerStatsCount;
- (id)scoreAtIndex:(unsigned long long)a0;
- (unsigned long long)scoresCount;

@end
