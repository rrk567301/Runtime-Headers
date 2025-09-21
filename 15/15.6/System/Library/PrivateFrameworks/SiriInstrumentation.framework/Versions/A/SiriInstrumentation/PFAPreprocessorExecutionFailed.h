@class NSData, PFAPreprocessorExecutionMetrics;

@interface PFAPreprocessorExecutionFailed : SISchemaInstrumentationMessage {
    struct { unsigned char failedAtStep : 1; } _has;
}

@property (retain, nonatomic) PFAPreprocessorExecutionMetrics *preprocessorExecutionMetrics;
@property (nonatomic) char hasPreprocessorExecutionMetrics;
@property (nonatomic) int failedAtStep;
@property (nonatomic) char hasFailedAtStep;
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
- (void)deleteFailedAtStep;
- (void)deletePreprocessorExecutionMetrics;
- (id)suppressMessageUnderConditions;

@end
