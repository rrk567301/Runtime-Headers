@class NSArray, ASRSchemaASRRecognitionResultTier1, NSData, SISchemaUUID;

@interface DODMLASRSchemaDODMLASRAudioFileResultTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) ASRSchemaASRRecognitionResultTier1 *recognitionResult;
@property (nonatomic) BOOL hasRecognitionResult;
@property (copy, nonatomic) NSArray *oneBestTranscripts;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
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
- (void)addOneBestTranscripts:(id)a0;
- (void)clearOneBestTranscripts;
- (void)deleteLinkId;
- (void)deleteOneBestTranscripts;
- (void)deleteRecognitionResult;
- (id)oneBestTranscriptsAtIndex:(unsigned long long)a0;
- (unsigned long long)oneBestTranscriptsCount;

@end
