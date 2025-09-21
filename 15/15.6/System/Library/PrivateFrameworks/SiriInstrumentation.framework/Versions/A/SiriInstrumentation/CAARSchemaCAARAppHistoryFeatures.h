@class NSData;

@interface CAARSchemaCAARAppHistoryFeatures : SISchemaInstrumentationMessage {
    struct { unsigned char numMinutesSinceAppInstalled : 1; unsigned char numMinutesSinceAppLastLaunched : 1; unsigned char numAppLaunchesLastTwoMinutes : 1; unsigned char numAppLaunchesLastTenMinutes : 1; unsigned char numAppLaunchesLastOneHour : 1; unsigned char numAppLaunchesLastSixHours : 1; unsigned char numAppLaunchesLastOneDay : 1; unsigned char numAppLaunchesLastSevenDays : 1; unsigned char numAppLaunchesLastTwentyEightDays : 1; unsigned char numAppLaunchesLastInfinity : 1; } _has;
}

@property (nonatomic) unsigned int numMinutesSinceAppInstalled;
@property (nonatomic) char hasNumMinutesSinceAppInstalled;
@property (nonatomic) unsigned int numMinutesSinceAppLastLaunched;
@property (nonatomic) char hasNumMinutesSinceAppLastLaunched;
@property (nonatomic) unsigned int numAppLaunchesLastTwoMinutes;
@property (nonatomic) char hasNumAppLaunchesLastTwoMinutes;
@property (nonatomic) unsigned int numAppLaunchesLastTenMinutes;
@property (nonatomic) char hasNumAppLaunchesLastTenMinutes;
@property (nonatomic) unsigned int numAppLaunchesLastOneHour;
@property (nonatomic) char hasNumAppLaunchesLastOneHour;
@property (nonatomic) unsigned int numAppLaunchesLastSixHours;
@property (nonatomic) char hasNumAppLaunchesLastSixHours;
@property (nonatomic) unsigned int numAppLaunchesLastOneDay;
@property (nonatomic) char hasNumAppLaunchesLastOneDay;
@property (nonatomic) unsigned int numAppLaunchesLastSevenDays;
@property (nonatomic) char hasNumAppLaunchesLastSevenDays;
@property (nonatomic) unsigned int numAppLaunchesLastTwentyEightDays;
@property (nonatomic) char hasNumAppLaunchesLastTwentyEightDays;
@property (nonatomic) unsigned int numAppLaunchesLastInfinity;
@property (nonatomic) char hasNumAppLaunchesLastInfinity;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteNumAppLaunchesLastOneHour;
- (void)deleteNumAppLaunchesLastInfinity;
- (void)deleteNumAppLaunchesLastOneDay;
- (void)deleteNumAppLaunchesLastSevenDays;
- (void)deleteNumAppLaunchesLastSixHours;
- (void)deleteNumAppLaunchesLastTenMinutes;
- (void)deleteNumAppLaunchesLastTwentyEightDays;
- (void)deleteNumAppLaunchesLastTwoMinutes;
- (void)deleteNumMinutesSinceAppInstalled;
- (void)deleteNumMinutesSinceAppLastLaunched;
- (id)suppressMessageUnderConditions;

@end
