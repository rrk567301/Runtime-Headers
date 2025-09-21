@class NSArray, NSData;

@interface FLOWSchemaFLOWSportsExecutionTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *sportNames;
@property (copy, nonatomic) NSArray *leagues;
@property (copy, nonatomic) NSArray *athleteEntities;
@property (copy, nonatomic) NSArray *teamEntities;
@property (copy, nonatomic) NSArray *eventEntities;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteSportName;
- (void)addAthleteEntities:(id)a0;
- (void)addEventEntities:(id)a0;
- (void)addLeague:(id)a0;
- (void)addSportName:(int)a0;
- (void)addTeamEntities:(id)a0;
- (id)athleteEntitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)athleteEntitiesCount;
- (void)clearAthleteEntities;
- (void)clearEventEntities;
- (void)clearLeague;
- (void)clearSportName;
- (void)clearTeamEntities;
- (void)deleteAthleteEntities;
- (void)deleteEventEntities;
- (void)deleteLeague;
- (void)deleteTeamEntities;
- (id)eventEntitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)eventEntitiesCount;
- (id)leagueAtIndex:(unsigned long long)a0;
- (unsigned long long)leagueCount;
- (int)sportNameAtIndex:(unsigned long long)a0;
- (unsigned long long)sportNameCount;
- (id)suppressMessageUnderConditions;
- (id)teamEntitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)teamEntitiesCount;

@end
