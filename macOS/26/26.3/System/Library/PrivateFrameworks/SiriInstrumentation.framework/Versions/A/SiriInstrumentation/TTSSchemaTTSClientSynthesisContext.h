@class TTSSchemaTTSSynthesisStarted, TTSSchemaTTSSynthesisEnded, TTSSchemaTTSSynthesisCancelled, NSData, SISchemaUUID, TTSSchemaTTSSynthesisFailed;

@interface TTSSchemaTTSClientSynthesisContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *contextId;
@property (nonatomic) BOOL hasContextId;
@property (retain, nonatomic) TTSSchemaTTSSynthesisStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) TTSSchemaTTSSynthesisEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) TTSSchemaTTSSynthesisFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (retain, nonatomic) TTSSchemaTTSSynthesisCancelled *cancelled;
@property (nonatomic) BOOL hasCancelled;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteContextId;
- (void)deleteCancelled;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStartedOrChanged;

@end
