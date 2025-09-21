@class AWDCoreRoutineLocationAwarenessBasicHistogram;

@interface AWDCoreRoutineLocationAwarenessLocationTimeHistograms : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; unsigned char timestamp : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasDuration;
@property (nonatomic) unsigned long long duration;
@property (readonly, nonatomic) char hasLessThan10mHistogram;
@property (retain, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *lessThan10mHistogram;
@property (readonly, nonatomic) char hasLessThan20mHistogram;
@property (retain, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *lessThan20mHistogram;
@property (readonly, nonatomic) char hasLessThan55mHistogram;
@property (retain, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *lessThan55mHistogram;
@property (readonly, nonatomic) char hasLessThan200mHistogram;
@property (retain, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *lessThan200mHistogram;
@property (readonly, nonatomic) char hasAnyPositiveHistogram;
@property (retain, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *anyPositiveHistogram;

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
