@class NSData, DODMLASRSchemaDODMLASRTranscriptMetadata;

@interface DODMLASRSchemaDODMLASRTranscriptionMetrics : SISchemaInstrumentationMessage

@property (retain, nonatomic) DODMLASRSchemaDODMLASRTranscriptMetadata *train;
@property (nonatomic) char hasTrain;
@property (retain, nonatomic) DODMLASRSchemaDODMLASRTranscriptMetadata *dev;
@property (nonatomic) char hasDev;
@property (retain, nonatomic) DODMLASRSchemaDODMLASRTranscriptMetadata *test;
@property (nonatomic) char hasTest;
@property (retain, nonatomic) DODMLASRSchemaDODMLASRTranscriptMetadata *external;
@property (nonatomic) char hasExternal;
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
- (void)deleteDev;
- (void)deleteExternal;
- (void)deleteTest;
- (void)deleteTrain;
- (id)suppressMessageUnderConditions;

@end
