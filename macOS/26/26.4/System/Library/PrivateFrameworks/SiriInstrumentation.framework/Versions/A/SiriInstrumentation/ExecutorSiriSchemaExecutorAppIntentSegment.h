@class NSData, SISchemaUUID;

@interface ExecutorSiriSchemaExecutorAppIntentSegment : SISchemaInstrumentationMessage {
    struct { unsigned char executorAppIntentTask : 1; unsigned char executorAppIntentAttribution : 1; unsigned char machTimeStart : 1; unsigned char machTimeEnd : 1; } _has;
}

@property (nonatomic) int executorAppIntentTask;
@property (nonatomic) BOOL hasExecutorAppIntentTask;
@property (nonatomic) int executorAppIntentAttribution;
@property (nonatomic) BOOL hasExecutorAppIntentAttribution;
@property (nonatomic) long long machTimeStart;
@property (nonatomic) BOOL hasMachTimeStart;
@property (nonatomic) long long machTimeEnd;
@property (nonatomic) BOOL hasMachTimeEnd;
@property (retain, nonatomic) SISchemaUUID *sessionUUID;
@property (nonatomic) BOOL hasSessionUUID;
@property (retain, nonatomic) SISchemaUUID *requestUUID;
@property (nonatomic) BOOL hasRequestUUID;
@property (readonly, nonatomic) NSData *jsonData;

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
- (void)deleteExecutorAppIntentAttribution;
- (void)deleteExecutorAppIntentTask;
- (void)deleteMachTimeEnd;
- (void)deleteMachTimeStart;
- (void)deleteRequestUUID;
- (void)deleteSessionUUID;

@end
