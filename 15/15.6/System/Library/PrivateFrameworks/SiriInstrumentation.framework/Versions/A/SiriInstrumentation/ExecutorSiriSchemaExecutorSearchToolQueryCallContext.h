@class SISchemaUUID, NSData, ExecutorSiriSchemaExecutorSearchToolQueryCallFailed, ExecutorSiriSchemaExecutorSearchToolQueryCallEnded, ExecutorSiriSchemaExecutorSearchToolQueryCallStarted;

@interface ExecutorSiriSchemaExecutorSearchToolQueryCallContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) ExecutorSiriSchemaExecutorSearchToolQueryCallStarted *startedOrChanged;
@property (nonatomic) char hasStartedOrChanged;
@property (retain, nonatomic) ExecutorSiriSchemaExecutorSearchToolQueryCallEnded *ended;
@property (nonatomic) char hasEnded;
@property (retain, nonatomic) ExecutorSiriSchemaExecutorSearchToolQueryCallFailed *failed;
@property (nonatomic) char hasFailed;
@property (retain, nonatomic) SISchemaUUID *traceId;
@property (nonatomic) char hasTraceId;
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
- (void)deleteTraceId;
- (id)suppressMessageUnderConditions;

@end
