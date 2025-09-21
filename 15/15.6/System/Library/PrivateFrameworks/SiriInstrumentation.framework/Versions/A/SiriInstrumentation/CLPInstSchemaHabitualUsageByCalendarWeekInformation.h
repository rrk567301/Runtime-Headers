@class NSData;

@interface CLPInstSchemaHabitualUsageByCalendarWeekInformation : SISchemaInstrumentationMessage {
    struct { unsigned char calendarWeekNumber : 1; unsigned char wasHabitualUserDuringCalendarWeek : 1; } _has;
}

@property (nonatomic) unsigned int calendarWeekNumber;
@property (nonatomic) char hasCalendarWeekNumber;
@property (nonatomic) char wasHabitualUserDuringCalendarWeek;
@property (nonatomic) char hasWasHabitualUserDuringCalendarWeek;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCalendarWeekNumber;
- (void)deleteWasHabitualUserDuringCalendarWeek;
- (id)suppressMessageUnderConditions;

@end
