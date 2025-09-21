@interface AWDSymptomsCellularSDMTimeStatistics : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char totalActiveTimeSeconds : 1; unsigned char totalInferredSleepTimeSeconds : 1; unsigned char totalQuiesceTimeSeconds : 1; unsigned char totalTimeSeconds : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasTotalTimeSeconds;
@property (nonatomic) unsigned long long totalTimeSeconds;
@property (nonatomic) char hasTotalActiveTimeSeconds;
@property (nonatomic) unsigned long long totalActiveTimeSeconds;
@property (nonatomic) char hasTotalQuiesceTimeSeconds;
@property (nonatomic) unsigned long long totalQuiesceTimeSeconds;
@property (nonatomic) char hasTotalInferredSleepTimeSeconds;
@property (nonatomic) unsigned long long totalInferredSleepTimeSeconds;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
