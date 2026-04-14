@class NSData, DODMLASRSchemaDODMLASRTranscriptMetadata;

@interface DODMLASRSchemaDODMLASRTranscriptionMetrics : SISchemaInstrumentationMessage

@property (retain, nonatomic) DODMLASRSchemaDODMLASRTranscriptMetadata *train;
@property (nonatomic) BOOL hasTrain;
@property (retain, nonatomic) DODMLASRSchemaDODMLASRTranscriptMetadata *dev;
@property (nonatomic) BOOL hasDev;
@property (retain, nonatomic) DODMLASRSchemaDODMLASRTranscriptMetadata *test;
@property (nonatomic) BOOL hasTest;
@property (retain, nonatomic) DODMLASRSchemaDODMLASRTranscriptMetadata *external;
@property (nonatomic) BOOL hasExternal;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteTrain;
- (void)deleteDev;
- (void)deleteTest;
- (void)deleteExternal;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
