@class ExecutorSiriSchemaExecutorRequestCanceled, NSData, ExecutorSiriSchemaExecutorRequestEnded, ExecutorSiriSchemaExecutorRequestFailed, ExecutorSiriSchemaExecutorRequestStarted;

@interface ExecutorSiriSchemaExecutorRequestContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) ExecutorSiriSchemaExecutorRequestStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) ExecutorSiriSchemaExecutorRequestEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) ExecutorSiriSchemaExecutorRequestFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (retain, nonatomic) ExecutorSiriSchemaExecutorRequestCanceled *canceled;
@property (nonatomic) BOOL hasCanceled;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCanceled;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStartedOrChanged;

@end
