@class NSData;

@interface ASRSpeechProfileSchemaASRSpeechProfileEntityExtractionMetrics : SISchemaInstrumentationMessage {
    struct { unsigned char isExtractionIngestionEnabled : 1; unsigned char isExtractionSetupSuccessful : 1; unsigned char numEntitiesExtractionAttempted : 1; unsigned char numEntitiesContainingExtractions : 1; unsigned char numEntitiesExtracted : 1; } _has;
}

@property (nonatomic) BOOL isExtractionIngestionEnabled;
@property (nonatomic) BOOL hasIsExtractionIngestionEnabled;
@property (nonatomic) BOOL isExtractionSetupSuccessful;
@property (nonatomic) BOOL hasIsExtractionSetupSuccessful;
@property (nonatomic) unsigned int numEntitiesExtractionAttempted;
@property (nonatomic) BOOL hasNumEntitiesExtractionAttempted;
@property (nonatomic) unsigned int numEntitiesContainingExtractions;
@property (nonatomic) BOOL hasNumEntitiesContainingExtractions;
@property (nonatomic) unsigned int numEntitiesExtracted;
@property (nonatomic) BOOL hasNumEntitiesExtracted;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteIsExtractionIngestionEnabled;
- (void)deleteIsExtractionSetupSuccessful;
- (void)deleteNumEntitiesContainingExtractions;
- (void)deleteNumEntitiesExtracted;
- (void)deleteNumEntitiesExtractionAttempted;

@end
