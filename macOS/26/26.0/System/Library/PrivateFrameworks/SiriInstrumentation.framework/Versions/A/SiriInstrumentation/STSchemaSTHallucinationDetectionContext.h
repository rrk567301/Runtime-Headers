@class STSchemaSTHallucinationDetectionStarted, STSchemaSTHallucinationDetectionFailed, NSData, STSchemaSTHallucinationDetectionEnded, SISchemaUUID;

@interface STSchemaSTHallucinationDetectionContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) STSchemaSTHallucinationDetectionStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) STSchemaSTHallucinationDetectionEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) STSchemaSTHallucinationDetectionFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (retain, nonatomic) SISchemaUUID *contextId;
@property (nonatomic) BOOL hasContextId;
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
- (void)deleteContextId;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStartedOrChanged;

@end
