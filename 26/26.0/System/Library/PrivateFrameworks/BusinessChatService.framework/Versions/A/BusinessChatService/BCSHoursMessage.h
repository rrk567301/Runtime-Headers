@class NSMutableArray;

@interface BCSHoursMessage : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _days;
}

@property (readonly, nonatomic) unsigned long long daysCount;
@property (readonly, nonatomic) int *days;
@property (retain, nonatomic) NSMutableArray *timeRanges;

+ (Class)timeRangeType;

- (void)copyTo:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)StringAsDays:(id)a0;
- (void)addDay:(int)a0;
- (void)clearTimeRanges;
- (unsigned long long)timeRangesCount;
- (void)addTimeRange:(id)a0;
- (void)clearDays;
- (int)dayAtIndex:(unsigned long long)a0;
- (id)daysAsString:(int)a0;
- (void)setDays:(int *)a0 count:(unsigned long long)a1;
- (id)timeRangeAtIndex:(unsigned long long)a0;

@end
