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
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)clearSportName;
- (void)deleteSportName;
- (void)addSportName:(int)a0;
- (unsigned long long)sportNameCount;
- (int)sportNameAtIndex:(unsigned long long)a0;
- (void)clearLeague;
- (void)deleteLeague;
- (void)addLeague:(id)a0;
- (unsigned long long)leagueCount;
- (id)leagueAtIndex:(unsigned long long)a0;
- (void)clearAthleteEntities;
- (void)deleteAthleteEntities;
- (void)addAthleteEntities:(id)a0;
- (unsigned long long)athleteEntitiesCount;
- (id)athleteEntitiesAtIndex:(unsigned long long)a0;
- (void)clearTeamEntities;
- (void)deleteTeamEntities;
- (void)addTeamEntities:(id)a0;
- (unsigned long long)teamEntitiesCount;
- (id)teamEntitiesAtIndex:(unsigned long long)a0;
- (void)clearEventEntities;
- (void)deleteEventEntities;
- (void)addEventEntities:(id)a0;
- (unsigned long long)eventEntitiesCount;
- (id)eventEntitiesAtIndex:(unsigned long long)a0;

@end
