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

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteDev;
- (void)deleteExternal;
- (void)deleteTest;
- (void)deleteTrain;

@end
