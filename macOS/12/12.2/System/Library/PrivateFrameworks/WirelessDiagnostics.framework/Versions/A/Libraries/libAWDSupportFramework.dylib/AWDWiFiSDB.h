@class NSMutableArray;

@interface AWDWiFiSDB : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char realTimeSessionStateResultingInSubmission : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *sliceStats;
@property (nonatomic) BOOL hasRealTimeSessionStateResultingInSubmission;
@property (nonatomic) unsigned int realTimeSessionStateResultingInSubmission;

+ (Class)sliceStatsType;

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
- (void)addSliceStats:(id)a0;
- (unsigned long long)sliceStatsCount;
- (void)clearSliceStats;
- (id)sliceStatsAtIndex:(unsigned long long)a0;

@end
