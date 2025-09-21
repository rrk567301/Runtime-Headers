@class ExecutorSiriSchemaExecutorStringQueryLocationCallContext, ExecutorSiriSchemaExecutorSearchToolQueryCallContext, SISchemaInstrumentationMessage, ExecutorSiriSchemaExecutorIdentifierQueryCallContext, ExecutorSiriSchemaExecutorPersonQueryCallContext, ExecutorSiriSchemaExecutorAppIntentCallContext, NSData, ExecutorSiriSchemaExecutorStringQueryEntityMatcherCallContext, ExecutorSiriSchemaExecutorStringQueryEntityCallContext, ExecutorSiriSchemaExecutorClientEventMetadata;

@interface ExecutorSiriSchemaExecutorClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) ExecutorSiriSchemaExecutorClientEventMetadata *eventMetadata;
@property (nonatomic) char hasEventMetadata;
@property (retain, nonatomic) ExecutorSiriSchemaExecutorAppIntentCallContext *executorAppIntentCallContext;
@property (nonatomic) char hasExecutorAppIntentCallContext;
@property (retain, nonatomic) ExecutorSiriSchemaExecutorSearchToolQueryCallContext *executorSearchToolQueryCallContext;
@property (nonatomic) char hasExecutorSearchToolQueryCallContext;
@property (retain, nonatomic) ExecutorSiriSchemaExecutorPersonQueryCallContext *executorPersonQueryCallContext;
@property (nonatomic) char hasExecutorPersonQueryCallContext;
@property (retain, nonatomic) ExecutorSiriSchemaExecutorStringQueryLocationCallContext *executorStringQueryLocationCallContext;
@property (nonatomic) char hasExecutorStringQueryLocationCallContext;
@property (retain, nonatomic) ExecutorSiriSchemaExecutorStringQueryEntityMatcherCallContext *executorStringQueryEntityMatcherCallContext;
@property (nonatomic) char hasExecutorStringQueryEntityMatcherCallContext;
@property (retain, nonatomic) ExecutorSiriSchemaExecutorStringQueryEntityCallContext *executorStringQueryEntityCallContext;
@property (nonatomic) char hasExecutorStringQueryEntityCallContext;
@property (retain, nonatomic) ExecutorSiriSchemaExecutorIdentifierQueryCallContext *executorIdentifierQueryCallContext;
@property (nonatomic) char hasExecutorIdentifierQueryCallContext;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (int)componentName;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (int)getAnyEventType;
- (void)deleteEventMetadata;
- (void)deleteExecutorAppIntentCallContext;
- (void)deleteExecutorIdentifierQueryCallContext;
- (void)deleteExecutorPersonQueryCallContext;
- (void)deleteExecutorSearchToolQueryCallContext;
- (void)deleteExecutorStringQueryEntityCallContext;
- (void)deleteExecutorStringQueryEntityMatcherCallContext;
- (void)deleteExecutorStringQueryLocationCallContext;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
