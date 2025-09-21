@class NSMutableArray;

@interface AWDWRMStreamingReport : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char counter : 1; unsigned char duration : 1; unsigned char durationLPM : 1; unsigned char durationOffline : 1; unsigned char numStall : 1; unsigned char samplePeriods : 1; unsigned char isEnd : 1; unsigned char lPM : 1; unsigned char offline : 1; unsigned char online : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasSamplePeriods;
@property (nonatomic) unsigned int samplePeriods;
@property (nonatomic) char hasDuration;
@property (nonatomic) unsigned int duration;
@property (nonatomic) char hasIsEnd;
@property (nonatomic) char isEnd;
@property (nonatomic) char hasNumStall;
@property (nonatomic) unsigned int numStall;
@property (nonatomic) char hasLPM;
@property (nonatomic) char lPM;
@property (nonatomic) char hasOnline;
@property (nonatomic) char online;
@property (nonatomic) char hasOffline;
@property (nonatomic) char offline;
@property (nonatomic) char hasDurationLPM;
@property (nonatomic) unsigned int durationLPM;
@property (nonatomic) char hasDurationOffline;
@property (nonatomic) unsigned int durationOffline;
@property (retain, nonatomic) NSMutableArray *instValues;
@property (nonatomic) char hasCounter;
@property (nonatomic) unsigned int counter;

+ (Class)instValuesType;

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
- (void)clearInstValues;
- (unsigned long long)instValuesCount;
- (void)addInstValues:(id)a0;
- (id)instValuesAtIndex:(unsigned long long)a0;

@end
