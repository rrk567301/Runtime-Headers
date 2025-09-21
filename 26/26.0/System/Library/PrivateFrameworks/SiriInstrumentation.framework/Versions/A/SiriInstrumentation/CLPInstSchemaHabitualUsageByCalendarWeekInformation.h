@class NSData;

@interface CLPInstSchemaHabitualUsageByCalendarWeekInformation : SISchemaInstrumentationMessage {
    struct { unsigned char calendarWeekNumber : 1; unsigned char wasHabitualUserDuringCalendarWeek : 1; } _has;
}

@property (nonatomic) unsigned int calendarWeekNumber;
@property (nonatomic) BOOL hasCalendarWeekNumber;
@property (nonatomic) BOOL wasHabitualUserDuringCalendarWeek;
@property (nonatomic) BOOL hasWasHabitualUserDuringCalendarWeek;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteCalendarWeekNumber;
- (void)deleteWasHabitualUserDuringCalendarWeek;

@end
