@class PGSchemaPGGeneratePlanFailed, PGSchemaPGGeneratePlanEnded, NSData, PGSchemaPGGeneratePlanStarted;

@interface PGSchemaPGGeneratePlanContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) PGSchemaPGGeneratePlanStarted *startedOrChanged;
@property (nonatomic) char hasStartedOrChanged;
@property (retain, nonatomic) PGSchemaPGGeneratePlanEnded *ended;
@property (nonatomic) char hasEnded;
@property (retain, nonatomic) PGSchemaPGGeneratePlanFailed *failed;
@property (nonatomic) char hasFailed;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStartedOrChanged;
- (id)suppressMessageUnderConditions;

@end
