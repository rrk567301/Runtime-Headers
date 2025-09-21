@class NSMutableArray;

@interface WiFiAnalyticsAWDWiFiNWPeerActivity : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *peerStats;

+ (Class)peerStatsType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addPeerStats:(id)a0;
- (void)clearPeerStats;
- (id)peerStatsAtIndex:(unsigned long long)a0;
- (unsigned long long)peerStatsCount;

@end
