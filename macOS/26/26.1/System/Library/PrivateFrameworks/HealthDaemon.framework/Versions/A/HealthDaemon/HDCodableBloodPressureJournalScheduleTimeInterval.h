@class HDCodableDateComponents;

@interface HDCodableBloodPressureJournalScheduleTimeInterval : PBCodable <NSCopying> {
    struct { unsigned char dayWindowType : 1; } _has;
}

@property (nonatomic) BOOL hasDayWindowType;
@property (nonatomic) int dayWindowType;
@property (readonly, nonatomic) BOOL hasScheduledTime;
@property (retain, nonatomic) HDCodableDateComponents *scheduledTime;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsDayWindowType:(id)a0;
- (id)dayWindowTypeAsString:(int)a0;

@end
