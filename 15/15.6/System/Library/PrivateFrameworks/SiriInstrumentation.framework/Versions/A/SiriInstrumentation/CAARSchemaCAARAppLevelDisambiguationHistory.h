@class NSData;

@interface CAARSchemaCAARAppLevelDisambiguationHistory : SISchemaInstrumentationMessage {
    struct { unsigned char numAppDisambiguationsLastTwoMinutes : 1; unsigned char numAppDisambiguationsLastTenMinutes : 1; unsigned char numAppDisambiguationsLastOneHour : 1; unsigned char numAppDisambiguationsLastSixHours : 1; unsigned char numAppDisambiguationsLastOneDay : 1; unsigned char numAppDisambiguationsLastSevenDays : 1; unsigned char numAppDisambiguationsLastTwentyEightDays : 1; unsigned char numAppDisambiguationsLastInfinity : 1; unsigned char numSelectedAppDisambiguationsTwoMinutes : 1; unsigned char numSelectedAppDisambiguationsLastTenMinutes : 1; unsigned char numSelectedAppDisambiguationsLastOneHour : 1; unsigned char numSelectedAppDisambiguationsLastSixHours : 1; unsigned char numSelectedAppDisambiguationsLastOneDay : 1; unsigned char numSelectedAppDisambiguationsLastSevenDays : 1; unsigned char numSelectedAppDisambiguationsLastTwentyEightDays : 1; unsigned char numSelectedAppDisambiguationsLastInfinity : 1; unsigned char wasAppSelectedInLastDisambiguation : 1; unsigned char minutesSinceLastDisambiguationSameApps : 1; } _has;
}

@property (nonatomic) unsigned int numAppDisambiguationsLastTwoMinutes;
@property (nonatomic) char hasNumAppDisambiguationsLastTwoMinutes;
@property (nonatomic) unsigned int numAppDisambiguationsLastTenMinutes;
@property (nonatomic) char hasNumAppDisambiguationsLastTenMinutes;
@property (nonatomic) unsigned int numAppDisambiguationsLastOneHour;
@property (nonatomic) char hasNumAppDisambiguationsLastOneHour;
@property (nonatomic) unsigned int numAppDisambiguationsLastSixHours;
@property (nonatomic) char hasNumAppDisambiguationsLastSixHours;
@property (nonatomic) unsigned int numAppDisambiguationsLastOneDay;
@property (nonatomic) char hasNumAppDisambiguationsLastOneDay;
@property (nonatomic) unsigned int numAppDisambiguationsLastSevenDays;
@property (nonatomic) char hasNumAppDisambiguationsLastSevenDays;
@property (nonatomic) unsigned int numAppDisambiguationsLastTwentyEightDays;
@property (nonatomic) char hasNumAppDisambiguationsLastTwentyEightDays;
@property (nonatomic) unsigned int numAppDisambiguationsLastInfinity;
@property (nonatomic) char hasNumAppDisambiguationsLastInfinity;
@property (nonatomic) unsigned int numSelectedAppDisambiguationsTwoMinutes;
@property (nonatomic) char hasNumSelectedAppDisambiguationsTwoMinutes;
@property (nonatomic) unsigned int numSelectedAppDisambiguationsLastTenMinutes;
@property (nonatomic) char hasNumSelectedAppDisambiguationsLastTenMinutes;
@property (nonatomic) unsigned int numSelectedAppDisambiguationsLastOneHour;
@property (nonatomic) char hasNumSelectedAppDisambiguationsLastOneHour;
@property (nonatomic) unsigned int numSelectedAppDisambiguationsLastSixHours;
@property (nonatomic) char hasNumSelectedAppDisambiguationsLastSixHours;
@property (nonatomic) unsigned int numSelectedAppDisambiguationsLastOneDay;
@property (nonatomic) char hasNumSelectedAppDisambiguationsLastOneDay;
@property (nonatomic) unsigned int numSelectedAppDisambiguationsLastSevenDays;
@property (nonatomic) char hasNumSelectedAppDisambiguationsLastSevenDays;
@property (nonatomic) unsigned int numSelectedAppDisambiguationsLastTwentyEightDays;
@property (nonatomic) char hasNumSelectedAppDisambiguationsLastTwentyEightDays;
@property (nonatomic) unsigned int numSelectedAppDisambiguationsLastInfinity;
@property (nonatomic) char hasNumSelectedAppDisambiguationsLastInfinity;
@property (nonatomic) char wasAppSelectedInLastDisambiguation;
@property (nonatomic) char hasWasAppSelectedInLastDisambiguation;
@property (nonatomic) unsigned int minutesSinceLastDisambiguationSameApps;
@property (nonatomic) char hasMinutesSinceLastDisambiguationSameApps;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteMinutesSinceLastDisambiguationSameApps;
- (void)deleteNumAppDisambiguationsLastInfinity;
- (void)deleteNumAppDisambiguationsLastOneDay;
- (void)deleteNumAppDisambiguationsLastOneHour;
- (void)deleteNumAppDisambiguationsLastSevenDays;
- (void)deleteNumAppDisambiguationsLastSixHours;
- (void)deleteNumAppDisambiguationsLastTenMinutes;
- (void)deleteNumAppDisambiguationsLastTwentyEightDays;
- (void)deleteNumAppDisambiguationsLastTwoMinutes;
- (void)deleteNumSelectedAppDisambiguationsLastInfinity;
- (void)deleteNumSelectedAppDisambiguationsLastOneDay;
- (void)deleteNumSelectedAppDisambiguationsLastOneHour;
- (void)deleteNumSelectedAppDisambiguationsLastSevenDays;
- (void)deleteNumSelectedAppDisambiguationsLastSixHours;
- (void)deleteNumSelectedAppDisambiguationsLastTenMinutes;
- (void)deleteNumSelectedAppDisambiguationsLastTwentyEightDays;
- (void)deleteNumSelectedAppDisambiguationsTwoMinutes;
- (void)deleteWasAppSelectedInLastDisambiguation;
- (id)suppressMessageUnderConditions;

@end
