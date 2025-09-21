@class NSData;

@interface CAARSchemaCAARActionLevelDisambiguationHistory : SISchemaInstrumentationMessage {
    struct { unsigned char numActionDisambiguationsLastTwoMinutes : 1; unsigned char numActionDisambiguationsLasTenMinutes : 1; unsigned char numActionDisambiguationsLastOneHour : 1; unsigned char numActionDisambiguationsLastSixHours : 1; unsigned char numActionDisambiguationsLastOneDay : 1; unsigned char numActionDisambiguationsLastSevenDays : 1; unsigned char numActionDisambiguationsLastTwentyEightDays : 1; unsigned char numActionDisambiguationsLastInfinity : 1; unsigned char numSelectedActionDisambiguationsLastTwoMinutes : 1; unsigned char numSelectedActionDisambiguationsLastTenMinutes : 1; unsigned char numSelectedActionDisambiguationsLastOneHour : 1; unsigned char numSelectedActionDisambiguationsLastSixHours : 1; unsigned char numSelectedActionDisambiguationsLastOneDay : 1; unsigned char numSelectedActionDisambiguationsLastSevenDays : 1; unsigned char numSelectedActionDisambiguationsLastTwentyEightDays : 1; unsigned char numSelectedActionDisambiguationsLastInfinity : 1; unsigned char minutesSinceLastDisambiguationSameActions : 1; unsigned char minutesSinceLastActionDisambiguationForThisAction : 1; unsigned char wasActionSelectedInLastDisambiguation : 1; unsigned char minutesSinceLastDisambiguationForSameActions : 1; } _has;
}

@property (nonatomic) unsigned int numActionDisambiguationsLastTwoMinutes;
@property (nonatomic) char hasNumActionDisambiguationsLastTwoMinutes;
@property (nonatomic) unsigned int numActionDisambiguationsLasTenMinutes;
@property (nonatomic) char hasNumActionDisambiguationsLasTenMinutes;
@property (nonatomic) unsigned int numActionDisambiguationsLastOneHour;
@property (nonatomic) char hasNumActionDisambiguationsLastOneHour;
@property (nonatomic) unsigned int numActionDisambiguationsLastSixHours;
@property (nonatomic) char hasNumActionDisambiguationsLastSixHours;
@property (nonatomic) unsigned int numActionDisambiguationsLastOneDay;
@property (nonatomic) char hasNumActionDisambiguationsLastOneDay;
@property (nonatomic) unsigned int numActionDisambiguationsLastSevenDays;
@property (nonatomic) char hasNumActionDisambiguationsLastSevenDays;
@property (nonatomic) unsigned int numActionDisambiguationsLastTwentyEightDays;
@property (nonatomic) char hasNumActionDisambiguationsLastTwentyEightDays;
@property (nonatomic) unsigned int numActionDisambiguationsLastInfinity;
@property (nonatomic) char hasNumActionDisambiguationsLastInfinity;
@property (nonatomic) unsigned int numSelectedActionDisambiguationsLastTwoMinutes;
@property (nonatomic) char hasNumSelectedActionDisambiguationsLastTwoMinutes;
@property (nonatomic) unsigned int numSelectedActionDisambiguationsLastTenMinutes;
@property (nonatomic) char hasNumSelectedActionDisambiguationsLastTenMinutes;
@property (nonatomic) unsigned int numSelectedActionDisambiguationsLastOneHour;
@property (nonatomic) char hasNumSelectedActionDisambiguationsLastOneHour;
@property (nonatomic) unsigned int numSelectedActionDisambiguationsLastSixHours;
@property (nonatomic) char hasNumSelectedActionDisambiguationsLastSixHours;
@property (nonatomic) unsigned int numSelectedActionDisambiguationsLastOneDay;
@property (nonatomic) char hasNumSelectedActionDisambiguationsLastOneDay;
@property (nonatomic) unsigned int numSelectedActionDisambiguationsLastSevenDays;
@property (nonatomic) char hasNumSelectedActionDisambiguationsLastSevenDays;
@property (nonatomic) unsigned int numSelectedActionDisambiguationsLastTwentyEightDays;
@property (nonatomic) char hasNumSelectedActionDisambiguationsLastTwentyEightDays;
@property (nonatomic) unsigned int numSelectedActionDisambiguationsLastInfinity;
@property (nonatomic) char hasNumSelectedActionDisambiguationsLastInfinity;
@property (nonatomic) char minutesSinceLastDisambiguationSameActions;
@property (nonatomic) char hasMinutesSinceLastDisambiguationSameActions;
@property (nonatomic) unsigned int minutesSinceLastActionDisambiguationForThisAction;
@property (nonatomic) char hasMinutesSinceLastActionDisambiguationForThisAction;
@property (nonatomic) char wasActionSelectedInLastDisambiguation;
@property (nonatomic) char hasWasActionSelectedInLastDisambiguation;
@property (nonatomic) unsigned int minutesSinceLastDisambiguationForSameActions;
@property (nonatomic) char hasMinutesSinceLastDisambiguationForSameActions;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteMinutesSinceLastActionDisambiguationForThisAction;
- (void)deleteMinutesSinceLastDisambiguationForSameActions;
- (void)deleteMinutesSinceLastDisambiguationSameActions;
- (void)deleteNumActionDisambiguationsLasTenMinutes;
- (void)deleteNumActionDisambiguationsLastInfinity;
- (void)deleteNumActionDisambiguationsLastOneDay;
- (void)deleteNumActionDisambiguationsLastOneHour;
- (void)deleteNumActionDisambiguationsLastSevenDays;
- (void)deleteNumActionDisambiguationsLastSixHours;
- (void)deleteNumActionDisambiguationsLastTwentyEightDays;
- (void)deleteNumActionDisambiguationsLastTwoMinutes;
- (void)deleteNumSelectedActionDisambiguationsLastInfinity;
- (void)deleteNumSelectedActionDisambiguationsLastOneDay;
- (void)deleteNumSelectedActionDisambiguationsLastOneHour;
- (void)deleteNumSelectedActionDisambiguationsLastSevenDays;
- (void)deleteNumSelectedActionDisambiguationsLastSixHours;
- (void)deleteNumSelectedActionDisambiguationsLastTenMinutes;
- (void)deleteNumSelectedActionDisambiguationsLastTwentyEightDays;
- (void)deleteNumSelectedActionDisambiguationsLastTwoMinutes;
- (void)deleteWasActionSelectedInLastDisambiguation;
- (id)suppressMessageUnderConditions;

@end
