@class NSArray, NSData, SISchemaUUID;

@interface EXPSearchSchemaEXPSearchSessionExperiments : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *searchSessionId;
@property (nonatomic) BOOL hasSearchSessionId;
@property (copy, nonatomic) NSArray *activeExperiments;
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
- (void)deleteSearchSessionId;
- (void)clearActiveExperiments;
- (void)deleteActiveExperiments;
- (void)addActiveExperiments:(id)a0;
- (unsigned long long)activeExperimentsCount;
- (id)activeExperimentsAtIndex:(unsigned long long)a0;

@end
