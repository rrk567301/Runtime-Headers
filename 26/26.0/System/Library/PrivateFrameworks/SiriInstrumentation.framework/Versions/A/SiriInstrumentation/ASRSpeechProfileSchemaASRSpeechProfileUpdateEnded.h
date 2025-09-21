@class ASRSpeechProfileSchemaASRSpeechProfileEntityExtractionMetrics, ASRSpeechProfileSchemaASRSpeechProfileEntityCleanupMetrics, NSData;

@interface ASRSpeechProfileSchemaASRSpeechProfileUpdateEnded : SISchemaInstrumentationMessage {
    struct { unsigned char totalNumEntitiesReceived : 1; } _has;
}

@property (nonatomic) unsigned int totalNumEntitiesReceived;
@property (nonatomic) BOOL hasTotalNumEntitiesReceived;
@property (retain, nonatomic) ASRSpeechProfileSchemaASRSpeechProfileEntityCleanupMetrics *entityCleanupMetrics;
@property (nonatomic) BOOL hasEntityCleanupMetrics;
@property (retain, nonatomic) ASRSpeechProfileSchemaASRSpeechProfileEntityExtractionMetrics *entityExtractionMetrics;
@property (nonatomic) BOOL hasEntityExtractionMetrics;
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
- (void)deleteEntityCleanupMetrics;
- (void)deleteEntityExtractionMetrics;
- (void)deleteTotalNumEntitiesReceived;

@end
