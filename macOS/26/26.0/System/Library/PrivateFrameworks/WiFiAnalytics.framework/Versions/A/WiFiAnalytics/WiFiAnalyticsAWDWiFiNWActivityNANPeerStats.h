@class NSString, NSMutableArray, WiFiAnalyticsAWDWiFiNWActivityTxCompletions;

@interface WiFiAnalyticsAWDWiFiNWActivityNANPeerStats : PBCodable <NSCopying> {
    struct { unsigned char role : 1; unsigned char rssiValue : 1; } _has;
}

@property (nonatomic) BOOL hasRole;
@property (nonatomic) int role;
@property (readonly, nonatomic) BOOL hasHashID;
@property (retain, nonatomic) NSString *hashID;
@property (retain, nonatomic) NSMutableArray *rssis;
@property (retain, nonatomic) NSMutableArray *packets;
@property (retain, nonatomic) NSMutableArray *bytes;
@property (retain, nonatomic) NSMutableArray *txLatencyBKs;
@property (retain, nonatomic) NSMutableArray *txLatencyBEs;
@property (retain, nonatomic) NSMutableArray *txLatencyVOs;
@property (retain, nonatomic) NSMutableArray *txLatencyVIs;
@property (readonly, nonatomic) BOOL hasCompletions;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityTxCompletions *completions;
@property (retain, nonatomic) NSMutableArray *acCompletions;
@property (nonatomic) BOOL hasRssiValue;
@property (nonatomic) int rssiValue;

+ (Class)packetsType;
+ (Class)txLatencyBKType;
+ (Class)txLatencyVOType;
+ (Class)txLatencyBEType;
+ (Class)txLatencyVIType;
+ (Class)acCompletionsType;
+ (Class)bytesType;
+ (Class)rssiType;

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
- (int)StringAsRole:(id)a0;
- (id)roleAsString:(int)a0;
- (id)packetsAtIndex:(unsigned long long)a0;
- (void)addPackets:(id)a0;
- (void)clearPackets;
- (unsigned long long)packetsCount;
- (void)addTxLatencyBE:(id)a0;
- (void)addTxLatencyVI:(id)a0;
- (void)addTxLatencyBK:(id)a0;
- (void)addTxLatencyVO:(id)a0;
- (id)acCompletionsAtIndex:(unsigned long long)a0;
- (unsigned long long)acCompletionsCount;
- (void)addAcCompletions:(id)a0;
- (void)addBytes:(id)a0;
- (void)addRssi:(id)a0;
- (id)bytesAtIndex:(unsigned long long)a0;
- (unsigned long long)bytesCount;
- (void)clearAcCompletions;
- (void)clearBytes;
- (void)clearRssis;
- (void)clearTxLatencyBEs;
- (void)clearTxLatencyBKs;
- (void)clearTxLatencyVIs;
- (void)clearTxLatencyVOs;
- (id)rssiAtIndex:(unsigned long long)a0;
- (unsigned long long)rssisCount;
- (id)txLatencyBEAtIndex:(unsigned long long)a0;
- (unsigned long long)txLatencyBEsCount;
- (id)txLatencyBKAtIndex:(unsigned long long)a0;
- (unsigned long long)txLatencyBKsCount;
- (id)txLatencyVIAtIndex:(unsigned long long)a0;
- (unsigned long long)txLatencyVIsCount;
- (id)txLatencyVOAtIndex:(unsigned long long)a0;
- (unsigned long long)txLatencyVOsCount;

@end
