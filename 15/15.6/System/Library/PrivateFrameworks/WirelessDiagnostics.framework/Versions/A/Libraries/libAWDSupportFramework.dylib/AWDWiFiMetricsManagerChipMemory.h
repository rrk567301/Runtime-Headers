@interface AWDWiFiMetricsManagerChipMemory : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char heapFree : 1; unsigned char heapFreeMax : 1; unsigned char heapFreeMin : 1; unsigned char heapTotal : 1; unsigned char heapTotalMax : 1; unsigned char heapTotalMin : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasHeapTotal;
@property (nonatomic) unsigned int heapTotal;
@property (nonatomic) char hasHeapTotalMin;
@property (nonatomic) unsigned int heapTotalMin;
@property (nonatomic) char hasHeapTotalMax;
@property (nonatomic) unsigned int heapTotalMax;
@property (nonatomic) char hasHeapFree;
@property (nonatomic) unsigned int heapFree;
@property (nonatomic) char hasHeapFreeMin;
@property (nonatomic) unsigned int heapFreeMin;
@property (nonatomic) char hasHeapFreeMax;
@property (nonatomic) unsigned int heapFreeMax;

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
