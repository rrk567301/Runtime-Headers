@class NSData, PFAPreprocessorExecutionMetrics;

@interface PFAPreprocessorExecutionFailed : SISchemaInstrumentationMessage {
    struct { unsigned char failedAtStep : 1; } _has;
}

@property (retain, nonatomic) PFAPreprocessorExecutionMetrics *preprocessorExecutionMetrics;
@property (nonatomic) BOOL hasPreprocessorExecutionMetrics;
@property (nonatomic) int failedAtStep;
@property (nonatomic) BOOL hasFailedAtStep;
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
- (void)deleteFailedAtStep;
- (void)deletePreprocessorExecutionMetrics;

@end
