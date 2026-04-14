@class HDCodableDateComponents;

@interface HDCodableBloodPressureJournalScheduleTimeInterval : PBCodable <NSCopying> {
    struct { unsigned char dayWindowType : 1; } _has;
}

@property (nonatomic) BOOL hasDayWindowType;
@property (nonatomic) int dayWindowType;
@property (readonly, nonatomic) BOOL hasScheduledTime;
@property (retain, nonatomic) HDCodableDateComponents *scheduledTime;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (int)StringAsDayWindowType:(id)a0;
- (id)dayWindowTypeAsString:(int)a0;

@end
