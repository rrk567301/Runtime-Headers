@class NSData;

@interface CLPInstSchemaHabitualUsageByCalendarWeekInformation : SISchemaInstrumentationMessage {
    struct { unsigned char calendarWeekNumber : 1; unsigned char wasHabitualUserDuringCalendarWeek : 1; } _has;
}

@property (nonatomic) unsigned int calendarWeekNumber;
@property (nonatomic) BOOL hasCalendarWeekNumber;
@property (nonatomic) BOOL wasHabitualUserDuringCalendarWeek;
@property (nonatomic) BOOL hasWasHabitualUserDuringCalendarWeek;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteCalendarWeekNumber;
- (void)deleteWasHabitualUserDuringCalendarWeek;

@end
