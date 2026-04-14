@class HDCodableDateComponents;

@interface HDCodableBloodPressureJournalScheduleTimeInterval : PBCodable <NSCopying> {
    struct { unsigned char dayWindowType : 1; } _has;
}

@property (nonatomic) BOOL hasDayWindowType;
@property (nonatomic) int dayWindowType;
@property (readonly, nonatomic) BOOL hasScheduledTime;
@property (retain, nonatomic) HDCodableDateComponents *scheduledTime;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (int)StringAsDayWindowType:(id)a0;
- (id)dayWindowTypeAsString:(int)a0;

@end
