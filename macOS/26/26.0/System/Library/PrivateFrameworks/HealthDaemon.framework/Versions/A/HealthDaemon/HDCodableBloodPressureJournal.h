@class NSData, NSMutableArray;

@interface HDCodableBloodPressureJournal : PBCodable <NSCopying> {
    struct { unsigned char endDate : 1; unsigned char startDate : 1; unsigned char timestamp : 1; unsigned char journalState : 1; unsigned char journalType : 1; unsigned char scheduleType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSData *uuid;
@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) double startDate;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) double endDate;
@property (nonatomic) BOOL hasJournalType;
@property (nonatomic) int journalType;
@property (nonatomic) BOOL hasScheduleType;
@property (nonatomic) int scheduleType;
@property (nonatomic) BOOL hasJournalState;
@property (nonatomic) int journalState;
@property (retain, nonatomic) NSMutableArray *timeIntervals;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;

+ (Class)timeIntervalType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addTimeInterval:(id)a0;
- (void)clearTimeIntervals;
- (unsigned long long)timeIntervalsCount;
- (id)timeIntervalAtIndex:(unsigned long long)a0;
- (int)StringAsJournalState:(id)a0;
- (int)StringAsJournalType:(id)a0;
- (int)StringAsScheduleType:(id)a0;
- (id)journalStateAsString:(int)a0;
- (id)journalTypeAsString:(int)a0;
- (id)scheduleTypeAsString:(int)a0;

@end
