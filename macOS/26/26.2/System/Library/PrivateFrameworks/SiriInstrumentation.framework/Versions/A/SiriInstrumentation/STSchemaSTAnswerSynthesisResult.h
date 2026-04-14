@class NSString, NSData, STSchemaSTAnswerSynthesisDataMetrics, STSchemaSTAnswerSynthesisPerfMetrics;

@interface STSchemaSTAnswerSynthesisResult : SISchemaInstrumentationMessage {
    struct { unsigned char isContentSearchFallback : 1; } _has;
}

@property (copy, nonatomic) NSString *modelNumber;
@property (nonatomic) BOOL hasModelNumber;
@property (retain, nonatomic) STSchemaSTAnswerSynthesisPerfMetrics *perfMetrics;
@property (nonatomic) BOOL hasPerfMetrics;
@property (retain, nonatomic) STSchemaSTAnswerSynthesisDataMetrics *dataMetrics;
@property (nonatomic) BOOL hasDataMetrics;
@property (nonatomic) BOOL isContentSearchFallback;
@property (nonatomic) BOOL hasIsContentSearchFallback;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteDataMetrics;
- (void)deleteIsContentSearchFallback;
- (void)deleteModelNumber;
- (void)deletePerfMetrics;

@end
