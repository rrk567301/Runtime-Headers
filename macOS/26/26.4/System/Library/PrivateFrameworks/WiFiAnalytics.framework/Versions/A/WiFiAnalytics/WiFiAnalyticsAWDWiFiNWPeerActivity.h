@class NSMutableArray;

@interface WiFiAnalyticsAWDWiFiNWPeerActivity : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *peerStats;

+ (Class)peerStatsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)addPeerStats:(id)a0;
- (void)clearPeerStats;
- (id)peerStatsAtIndex:(unsigned long long)a0;
- (unsigned long long)peerStatsCount;

@end
