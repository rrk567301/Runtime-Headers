@class STSchemaLLMQUPerfMetrics, NSString, NSData, STSchemaLLMQUQueryArguments;

@interface STSchemaSTLLMQURequestEnded : SISchemaInstrumentationMessage {
    struct { unsigned char requestLength : 1; unsigned char responseLength : 1; } _has;
}

@property (copy, nonatomic) NSString *modelNumber;
@property (nonatomic) char hasModelNumber;
@property (nonatomic) unsigned int requestLength;
@property (nonatomic) char hasRequestLength;
@property (nonatomic) unsigned int responseLength;
@property (nonatomic) char hasResponseLength;
@property (retain, nonatomic) STSchemaLLMQUQueryArguments *queryArguments;
@property (nonatomic) char hasQueryArguments;
@property (retain, nonatomic) STSchemaLLMQUPerfMetrics *llmquPerfMetrics;
@property (nonatomic) char hasLlmquPerfMetrics;
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
- (void)deleteLlmquPerfMetrics;
- (void)deleteModelNumber;
- (void)deleteQueryArguments;
- (void)deleteRequestLength;
- (void)deleteResponseLength;
- (id)suppressMessageUnderConditions;

@end
