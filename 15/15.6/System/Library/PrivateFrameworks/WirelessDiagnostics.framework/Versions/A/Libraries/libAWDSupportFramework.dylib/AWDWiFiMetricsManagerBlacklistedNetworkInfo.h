@class NSString, NSMutableArray;

@interface AWDWiFiMetricsManagerBlacklistedNetworkInfo : PBCodable <NSCopying> {
    struct { unsigned char networkFlags : 1; unsigned char reserverdInfo : 1; } _has;
}

@property (readonly, nonatomic) char hasSsidHash;
@property (retain, nonatomic) NSString *ssidHash;
@property (nonatomic) char hasNetworkFlags;
@property (nonatomic) unsigned int networkFlags;
@property (nonatomic) char hasReserverdInfo;
@property (nonatomic) unsigned int reserverdInfo;
@property (retain, nonatomic) NSMutableArray *blacklistingRecords;

+ (Class)blacklistingRecordType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addBlacklistingRecord:(id)a0;
- (id)blacklistingRecordAtIndex:(unsigned long long)a0;
- (unsigned long long)blacklistingRecordsCount;
- (void)clearBlacklistingRecords;

@end
