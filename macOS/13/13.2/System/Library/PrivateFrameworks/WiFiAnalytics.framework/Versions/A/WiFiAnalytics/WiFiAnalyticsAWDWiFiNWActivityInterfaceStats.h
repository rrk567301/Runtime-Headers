@class WiFiAnalyticsAWDWiFiNWActivityStateBin, NSMutableArray, WiFiAnalyticsAWDWiFiNWActivityAssoc;

@interface WiFiAnalyticsAWDWiFiNWActivityInterfaceStats : PBCodable <NSCopying> {
    struct { unsigned char consecutivedps : 1; unsigned char dps : 1; unsigned char role : 1; } _has;
}

@property (nonatomic) BOOL hasRole;
@property (nonatomic) int role;
@property (retain, nonatomic) NSMutableArray *packets;
@property (retain, nonatomic) NSMutableArray *bytes;
@property (retain, nonatomic) NSMutableArray *peers;
@property (retain, nonatomic) NSMutableArray *npeers;
@property (nonatomic) BOOL hasDps;
@property (nonatomic) unsigned int dps;
@property (nonatomic) BOOL hasConsecutivedps;
@property (nonatomic) unsigned int consecutivedps;
@property (readonly, nonatomic) BOOL hasAssoc;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityAssoc *assoc;
@property (readonly, nonatomic) BOOL hasAwdlMode;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityStateBin *awdlMode;

+ (Class)peerType;
+ (Class)packetsType;
+ (Class)bytesType;
+ (Class)npeersType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)roleAsString:(int)a0;
- (int)StringAsRole:(id)a0;
- (void)clearPackets;
- (void)addPackets:(id)a0;
- (unsigned long long)packetsCount;
- (id)packetsAtIndex:(unsigned long long)a0;
- (void)clearBytes;
- (void)addBytes:(id)a0;
- (unsigned long long)bytesCount;
- (id)bytesAtIndex:(unsigned long long)a0;
- (void)clearPeers;
- (void)addPeer:(id)a0;
- (unsigned long long)peersCount;
- (id)peerAtIndex:(unsigned long long)a0;
- (void)clearNpeers;
- (void)addNpeers:(id)a0;
- (unsigned long long)npeersCount;
- (id)npeersAtIndex:(unsigned long long)a0;

@end
