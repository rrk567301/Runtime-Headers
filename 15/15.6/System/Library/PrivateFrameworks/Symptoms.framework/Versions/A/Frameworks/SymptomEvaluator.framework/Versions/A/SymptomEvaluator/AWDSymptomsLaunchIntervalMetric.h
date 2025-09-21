@interface AWDSymptomsLaunchIntervalMetric : PBCodable <NSCopying> {
    struct { unsigned char intervalSincePreviousLaunch : 1; unsigned char timestamp : 1; unsigned char process : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasIntervalSincePreviousLaunch;
@property (nonatomic) unsigned long long intervalSincePreviousLaunch;
@property (nonatomic) char hasProcess;
@property (nonatomic) int process;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsProcess:(id)a0;
- (id)processAsString:(int)a0;

@end
