@class STSchemaLLMQUPerfMetrics, NSString, NSData, STSchemaLLMQUQueryArguments;

@interface STSchemaSTLLMQURequestEnded : SISchemaInstrumentationMessage {
    struct { unsigned char requestLength : 1; unsigned char responseLength : 1; } _has;
}

@property (copy, nonatomic) NSString *modelNumber;
@property (nonatomic) BOOL hasModelNumber;
@property (nonatomic) unsigned int requestLength;
@property (nonatomic) BOOL hasRequestLength;
@property (nonatomic) unsigned int responseLength;
@property (nonatomic) BOOL hasResponseLength;
@property (retain, nonatomic) STSchemaLLMQUQueryArguments *queryArguments;
@property (nonatomic) BOOL hasQueryArguments;
@property (retain, nonatomic) STSchemaLLMQUPerfMetrics *llmquPerfMetrics;
@property (nonatomic) BOOL hasLlmquPerfMetrics;
@property (readonly, nonatomic) NSData *jsonData;

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
- (void)deleteLlmquPerfMetrics;
- (void)deleteModelNumber;
- (void)deleteQueryArguments;
- (void)deleteRequestLength;
- (void)deleteResponseLength;

@end
