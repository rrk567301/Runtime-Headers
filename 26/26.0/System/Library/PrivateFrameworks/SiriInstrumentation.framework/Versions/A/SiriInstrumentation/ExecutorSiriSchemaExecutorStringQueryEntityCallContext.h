@class ExecutorSiriSchemaExecutorStringQueryEntityCallFailed, ExecutorSiriSchemaExecutorStringQueryEntityCallEnded, NSData, ExecutorSiriSchemaExecutorStringQueryEntityCallStarted;

@interface ExecutorSiriSchemaExecutorStringQueryEntityCallContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) ExecutorSiriSchemaExecutorStringQueryEntityCallStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) ExecutorSiriSchemaExecutorStringQueryEntityCallEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) ExecutorSiriSchemaExecutorStringQueryEntityCallFailed *failed;
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
