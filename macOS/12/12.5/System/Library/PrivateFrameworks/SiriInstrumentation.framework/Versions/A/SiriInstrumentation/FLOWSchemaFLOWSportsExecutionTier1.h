@class NSArray, NSData;

@interface FLOWSchemaFLOWSportsExecutionTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *sportNames;
@property (copy, nonatomic) NSArray *leagues;
@property (copy, nonatomic) NSArray *athleteEntities;
@property (copy, nonatomic) NSArray *teamEntities;
@property (copy, nonatomic) NSArray *eventEntities;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)clearSportName;
- (void)clearLeague;
- (void)clearAthleteEntities;
- (void)clearTeamEntities;
- (void)clearEventEntities;
- (void)addSportName:(int)a0;
- (void)addLeague:(id)a0;
- (void)addAthleteEntities:(id)a0;
- (void)addTeamEntities:(id)a0;
- (void)addEventEntities:(id)a0;
- (void)deleteSportName;
- (unsigned long long)sportNameCount;
- (int)sportNameAtIndex:(unsigned long long)a0;
- (void)deleteLeague;
- (unsigned long long)leagueCount;
- (id)leagueAtIndex:(unsigned long long)a0;
- (void)deleteAthleteEntities;
- (unsigned long long)athleteEntitiesCount;
- (id)athleteEntitiesAtIndex:(unsigned long long)a0;
- (void)deleteTeamEntities;
- (unsigned long long)teamEntitiesCount;
- (id)teamEntitiesAtIndex:(unsigned long long)a0;
- (void)deleteEventEntities;
- (unsigned long long)eventEntitiesCount;
- (id)eventEntitiesAtIndex:(unsigned long long)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
