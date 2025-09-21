@class AWDCoreRoutineLocationAwarenessBasicHistogram;

@interface AWDCoreRoutineLocationAwarenessStatistics : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; unsigned char timestamp : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasDuration;
@property (nonatomic) unsigned long long duration;
@property (readonly, nonatomic) char hasTimerFiringCount;
@property (retain, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *timerFiringCount;
@property (readonly, nonatomic) char hasActiveRequestCount;
@property (retain, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *activeRequestCount;
@property (readonly, nonatomic) char hasValidLocationCount;
@property (retain, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *validLocationCount;
@property (readonly, nonatomic) char hasTimerFiringDelayedCount;
@property (retain, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *timerFiringDelayedCount;
@property (readonly, nonatomic) char hasTimerFiringDelayedTotalSeconds;
@property (retain, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *timerFiringDelayedTotalSeconds;
@property (readonly, nonatomic) char hasTimerFiringDelayedMaxSeconds;
@property (retain, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *timerFiringDelayedMaxSeconds;
@property (readonly, nonatomic) char hasSkippedRequestDueToRecentFix;
@property (retain, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *skippedRequestDueToRecentFix;
@property (readonly, nonatomic) char hasSkippedRequestDueToStationary;
@property (retain, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *skippedRequestDueToStationary;
@property (readonly, nonatomic) char hasActiveRequestTimeoutWithCoarseLocation;
@property (retain, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *activeRequestTimeoutWithCoarseLocation;
@property (readonly, nonatomic) char hasActiveRequestTimeoutWithLocationServiceDisabled;
@property (retain, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *activeRequestTimeoutWithLocationServiceDisabled;
@property (readonly, nonatomic) char hasActiveRequestTimeoutWithLocationServiceEnabledRoutineDisabled;
@property (retain, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *activeRequestTimeoutWithLocationServiceEnabledRoutineDisabled;
@property (readonly, nonatomic) char hasActiveRequestTimeoutWithLocationServiceEnabledRoutineEnabledWifiOff;
@property (retain, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *activeRequestTimeoutWithLocationServiceEnabledRoutineEnabledWifiOff;
@property (readonly, nonatomic) char hasActiveRequestTimeoutWithOtherReasons;
@property (retain, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *activeRequestTimeoutWithOtherReasons;
@property (readonly, nonatomic) char hasActiveRequestInterrupted;
@property (retain, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *activeRequestInterrupted;

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

@end
