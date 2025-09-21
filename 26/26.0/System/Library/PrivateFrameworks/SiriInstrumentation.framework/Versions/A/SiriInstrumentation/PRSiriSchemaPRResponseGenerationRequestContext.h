@class PRSiriSchemaPRResponseGenerationRequestStart, PRSiriSchemaPRResponseGenerationRequestFailed, NSData, PRSiriSchemaPRResponseGenerationRequestEnded;

@interface PRSiriSchemaPRResponseGenerationRequestContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) PRSiriSchemaPRResponseGenerationRequestStart *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) PRSiriSchemaPRResponseGenerationRequestEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) PRSiriSchemaPRResponseGenerationRequestFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStartedOrChanged;

@end
