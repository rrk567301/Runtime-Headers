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
- (void)clearBlacklistingHistorys;
- (void)addBlacklistingHistory:(id)a0;
- (unsigned long long)blacklistingHistorysCount;
- (id)blacklistingHistoryAtIndex:(unsigned long long)a0;

@end
