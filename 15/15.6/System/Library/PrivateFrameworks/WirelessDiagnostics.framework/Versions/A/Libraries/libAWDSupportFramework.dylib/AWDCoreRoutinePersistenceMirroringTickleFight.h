@interface AWDCoreRoutinePersistenceMirroringTickleFight : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _tickleTimes;
    struct { unsigned char timestamp : 1; unsigned char operationType : 1; unsigned char recordType : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) unsigned long long tickleTimesCount;
@property (readonly, nonatomic) int *tickleTimes;
@property (nonatomic) char hasRecordType;
@property (nonatomic) int recordType;
@property (nonatomic) char hasOperationType;
@property (nonatomic) int operationType;

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
- (void)addTickleTimes:(int)a0;
- (void)clearTickleTimes;
- (void)setTickleTimes:(int *)a0 count:(unsigned long long)a1;
- (int)tickleTimesAtIndex:(unsigned long long)a0;

@end
