@class AWDWiFiNWActivityControllerStats, NSString, AWDLinkQualityMeasurements, NSMutableArray;

@interface AWDWiFiNWActivity : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *activities;
@property (retain, nonatomic) NSMutableArray *interfaceStats;
@property (retain, nonatomic) NSMutableArray *peerStats;
@property (readonly, nonatomic) BOOL hasControllerStats;
@property (retain, nonatomic) AWDWiFiNWActivityControllerStats *controllerStats;
@property (readonly, nonatomic) BOOL hasLinkQualSample;
@property (retain, nonatomic) AWDLinkQualityMeasurements *linkQualSample;
@property (retain, nonatomic) NSMutableArray *scores;
@property (retain, nonatomic) NSMutableArray *btleConnections;
@property (readonly, nonatomic) BOOL hasApProfile;
@property (retain, nonatomic) NSString *apProfile;

+ (Class)activitiesType;
+ (Class)interfaceStatsType;
+ (Class)peerStatsType;
+ (Class)scoreType;
+ (Class)btleConnectionType;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearActivities;
- (void)addActivities:(id)a0;
- (unsigned long long)activitiesCount;
- (id)activitiesAtIndex:(unsigned long long)a0;
- (void)clearScores;
- (void)clearInterfaceStats;
- (void)addInterfaceStats:(id)a0;
- (unsigned long long)interfaceStatsCount;
- (id)interfaceStatsAtIndex:(unsigned long long)a0;
- (void)clearPeerStats;
- (void)addPeerStats:(id)a0;
- (unsigned long long)peerStatsCount;
- (id)peerStatsAtIndex:(unsigned long long)a0;
- (void)addScore:(id)a0;
- (unsigned long long)scoresCount;
- (id)scoreAtIndex:(unsigned long long)a0;
- (void)clearBtleConnections;
- (void)addBtleConnection:(id)a0;
- (unsigned long long)btleConnectionsCount;
- (id)btleConnectionAtIndex:(unsigned long long)a0;

@end
