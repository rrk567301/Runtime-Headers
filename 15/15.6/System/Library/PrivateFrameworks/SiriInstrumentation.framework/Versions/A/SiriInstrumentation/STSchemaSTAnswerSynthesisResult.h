@class NSString, NSData, STSchemaSTAnswerSynthesisDataMetrics, STSchemaSTAnswerSynthesisPerfMetrics;

@interface STSchemaSTAnswerSynthesisResult : SISchemaInstrumentationMessage {
    struct { unsigned char isContentSearchFallback : 1; } _has;
}

@property (copy, nonatomic) NSString *modelNumber;
@property (nonatomic) char hasModelNumber;
@property (retain, nonatomic) STSchemaSTAnswerSynthesisPerfMetrics *perfMetrics;
@property (nonatomic) char hasPerfMetrics;
@property (retain, nonatomic) STSchemaSTAnswerSynthesisDataMetrics *dataMetrics;
@property (nonatomic) char hasDataMetrics;
@property (nonatomic) char isContentSearchFallback;
@property (nonatomic) char hasIsContentSearchFallback;
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
- (void)deleteDataMetrics;
- (void)deleteIsContentSearchFallback;
- (void)deleteModelNumber;
- (void)deletePerfMetrics;
- (id)suppressMessageUnderConditions;

@end
