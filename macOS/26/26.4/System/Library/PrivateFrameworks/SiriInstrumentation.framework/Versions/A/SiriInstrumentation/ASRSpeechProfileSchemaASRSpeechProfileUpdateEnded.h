@class NSArray, NSData, ASRSpeechProfileSchemaASRSpeechProfileEntityCleanupMetrics, ASRSpeechProfileSchemaASRSpeechProfileEntityExtractionMetrics;

@interface ASRSpeechProfileSchemaASRSpeechProfileUpdateEnded : SISchemaInstrumentationMessage {
    struct { unsigned char totalNumEntitiesReceived : 1; } _has;
}

@property (nonatomic) unsigned int totalNumEntitiesReceived;
@property (nonatomic) BOOL hasTotalNumEntitiesReceived;
@property (retain, nonatomic) ASRSpeechProfileSchemaASRSpeechProfileEntityCleanupMetrics *entityCleanupMetrics;
@property (nonatomic) BOOL hasEntityCleanupMetrics;
@property (retain, nonatomic) ASRSpeechProfileSchemaASRSpeechProfileEntityExtractionMetrics *entityExtractionMetrics;
@property (nonatomic) BOOL hasEntityExtractionMetrics;
@property (copy, nonatomic) NSArray *entityMetrics;
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
- (void)addEntityMetrics:(id)a0;
- (void)clearEntityMetrics;
- (void)deleteEntityCleanupMetrics;
- (void)deleteEntityExtractionMetrics;
- (void)deleteEntityMetrics;
- (void)deleteTotalNumEntitiesReceived;
- (id)entityMetricsAtIndex:(unsigned long long)a0;
- (unsigned long long)entityMetricsCount;

@end
