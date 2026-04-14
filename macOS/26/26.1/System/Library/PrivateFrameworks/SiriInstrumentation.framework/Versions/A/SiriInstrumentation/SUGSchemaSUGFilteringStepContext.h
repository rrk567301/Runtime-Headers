@class SUGSchemaSUGFilteringStepStarted, NSData, SUGSchemaSUGFilteringStepEnded;

@interface SUGSchemaSUGFilteringStepContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SUGSchemaSUGFilteringStepStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) SUGSchemaSUGFilteringStepEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteEnded;
- (void)deleteStartedOrChanged;

@end
