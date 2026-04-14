@class NSMutableArray;

@interface AWDWiFiMetricsManagerLinkQualityStats : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *statRecords;

+ (Class)statRecordType;

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
- (void)clearStatRecords;
- (void)addStatRecord:(id)a0;
- (unsigned long long)statRecordsCount;
- (id)statRecordAtIndex:(unsigned long long)a0;

@end
