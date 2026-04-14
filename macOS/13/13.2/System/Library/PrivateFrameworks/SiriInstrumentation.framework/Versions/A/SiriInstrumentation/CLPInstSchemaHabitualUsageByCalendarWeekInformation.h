@class NSData;

@interface CLPInstSchemaHabitualUsageByCalendarWeekInformation : SISchemaInstrumentationMessage {
    struct { unsigned char calendarWeekNumber : 1; unsigned char wasHabitualUserDuringCalendarWeek : 1; } _has;
}

@property (nonatomic) unsigned int calendarWeekNumber;
@property (nonatomic) BOOL hasCalendarWeekNumber;
@property (nonatomic) BOOL wasHabitualUserDuringCalendarWeek;
@property (nonatomic) BOOL hasWasHabitualUserDuringCalendarWeek;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteWasHabitualUserDuringCalendarWeek;
- (void)deleteCalendarWeekNumber;

@end
