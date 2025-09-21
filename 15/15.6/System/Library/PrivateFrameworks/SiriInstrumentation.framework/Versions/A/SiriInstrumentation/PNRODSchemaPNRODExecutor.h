@class PNRODSchemaPNRODMetricDuration, NSData, PNRODSchemaPNRODFailureInfo, SISchemaUUID;

@interface PNRODSchemaPNRODExecutor : SISchemaInstrumentationMessage {
    struct { unsigned char executorSearchToolQueryType : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *executorId;
@property (nonatomic) char hasExecutorId;
@property (retain, nonatomic) SISchemaUUID *planCycleId;
@property (nonatomic) char hasPlanCycleId;
@property (nonatomic) int executorSearchToolQueryType;
@property (nonatomic) char hasExecutorSearchToolQueryType;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *executorAppIntentHandleTime;
@property (nonatomic) char hasExecutorAppIntentHandleTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *executorAppIntentQueryHandleTime;
@property (nonatomic) char hasExecutorAppIntentQueryHandleTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *searchToolQueryTime;
@property (nonatomic) char hasSearchToolQueryTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *personQueryTime;
@property (nonatomic) char hasPersonQueryTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *stringQueryLocationTime;
@property (nonatomic) char hasStringQueryLocationTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *stringQueryEntityMatcherTime;
@property (nonatomic) char hasStringQueryEntityMatcherTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *stringQueryEntityTime;
@property (nonatomic) char hasStringQueryEntityTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *identifierQueryTime;
@property (nonatomic) char hasIdentifierQueryTime;
@property (retain, nonatomic) PNRODSchemaPNRODFailureInfo *failureInfo;
@property (nonatomic) char hasFailureInfo;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteExecutorAppIntentHandleTime;
- (void)deleteExecutorAppIntentQueryHandleTime;
- (void)deleteExecutorId;
- (void)deleteExecutorSearchToolQueryType;
- (void)deleteFailureInfo;
- (void)deleteIdentifierQueryTime;
- (void)deletePersonQueryTime;
- (void)deletePlanCycleId;
- (void)deleteSearchToolQueryTime;
- (void)deleteStringQueryEntityMatcherTime;
- (void)deleteStringQueryEntityTime;
- (void)deleteStringQueryLocationTime;
- (id)suppressMessageUnderConditions;

@end
