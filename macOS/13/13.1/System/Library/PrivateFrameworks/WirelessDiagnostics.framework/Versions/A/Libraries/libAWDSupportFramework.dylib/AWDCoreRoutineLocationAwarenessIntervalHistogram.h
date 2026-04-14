@class NSMutableArray;

@interface AWDCoreRoutineLocationAwarenessIntervalHistogram : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned long long duration;
@property (retain, nonatomic) NSMutableArray *lessThan10mIntervalHistograms;
@property (retain, nonatomic) NSMutableArray *lessThan25mIntervalHistograms;
@property (retain, nonatomic) NSMutableArray *lessThan55mIntervalHistograms;
@property (retain, nonatomic) NSMutableArray *lessThan200mIntervalHistograms;
@property (retain, nonatomic) NSMutableArray *anyPositiveIntervalHistograms;

+ (Class)lessThan10mIntervalHistogramType;
+ (Class)lessThan25mIntervalHistogramType;
+ (Class)lessThan55mIntervalHistogramType;
+ (Class)lessThan200mIntervalHistogramType;
+ (Class)anyPositiveIntervalHistogramType;

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
- (void)clearLessThan10mIntervalHistograms;
- (void)addLessThan10mIntervalHistogram:(id)a0;
- (unsigned long long)lessThan10mIntervalHistogramsCount;
- (id)lessThan10mIntervalHistogramAtIndex:(unsigned long long)a0;
- (void)clearLessThan25mIntervalHistograms;
- (void)addLessThan25mIntervalHistogram:(id)a0;
- (unsigned long long)lessThan25mIntervalHistogramsCount;
- (id)lessThan25mIntervalHistogramAtIndex:(unsigned long long)a0;
- (void)clearLessThan55mIntervalHistograms;
- (void)addLessThan55mIntervalHistogram:(id)a0;
- (unsigned long long)lessThan55mIntervalHistogramsCount;
- (id)lessThan55mIntervalHistogramAtIndex:(unsigned long long)a0;
- (void)clearLessThan200mIntervalHistograms;
- (void)addLessThan200mIntervalHistogram:(id)a0;
- (unsigned long long)lessThan200mIntervalHistogramsCount;
- (id)lessThan200mIntervalHistogramAtIndex:(unsigned long long)a0;
- (void)clearAnyPositiveIntervalHistograms;
- (void)addAnyPositiveIntervalHistogram:(id)a0;
- (unsigned long long)anyPositiveIntervalHistogramsCount;
- (id)anyPositiveIntervalHistogramAtIndex:(unsigned long long)a0;

@end
