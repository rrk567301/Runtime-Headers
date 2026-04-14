@class NSString, NSMutableArray;

@interface AWDWiFiMetricsManagerBGScanBlacklistedNetworks : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasInterfaceName;
@property (retain, nonatomic) NSString *interfaceName;
@property (retain, nonatomic) NSMutableArray *blacklistingHistorys;

+ (Class)blacklistingHistoryType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)addBlacklistingHistory:(id)a0;
- (unsigned long long)blacklistingHistorysCount;
- (void)clearBlacklistingHistorys;
- (id)blacklistingHistoryAtIndex:(unsigned long long)a0;

@end
