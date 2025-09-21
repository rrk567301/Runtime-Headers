@interface AWDWiFiMetricsManagerSoftErrorUserFeedback : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _softErrorInstanceCounters;
    struct { int *list; unsigned long long count; unsigned long long size; } _softErrorUserConfirmationCounters;
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) unsigned long long softErrorInstanceCountersCount;
@property (readonly, nonatomic) int *softErrorInstanceCounters;
@property (readonly, nonatomic) unsigned long long softErrorUserConfirmationCountersCount;
@property (readonly, nonatomic) int *softErrorUserConfirmationCounters;

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
- (void)addSoftErrorInstanceCounters:(int)a0;
- (void)addSoftErrorUserConfirmationCounters:(int)a0;
- (void)clearSoftErrorInstanceCounters;
- (void)clearSoftErrorUserConfirmationCounters;
- (void)setSoftErrorInstanceCounters:(int *)a0 count:(unsigned long long)a1;
- (void)setSoftErrorUserConfirmationCounters:(int *)a0 count:(unsigned long long)a1;
- (int)softErrorInstanceCountersAtIndex:(unsigned long long)a0;
- (int)softErrorUserConfirmationCountersAtIndex:(unsigned long long)a0;

@end
