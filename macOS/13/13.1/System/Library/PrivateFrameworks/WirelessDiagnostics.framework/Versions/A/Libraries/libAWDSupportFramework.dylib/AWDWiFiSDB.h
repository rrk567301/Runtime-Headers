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
- (void)clearSliceStats;
- (void)addSliceStats:(id)a0;
- (unsigned long long)sliceStatsCount;
- (id)sliceStatsAtIndex:(unsigned long long)a0;

@end
