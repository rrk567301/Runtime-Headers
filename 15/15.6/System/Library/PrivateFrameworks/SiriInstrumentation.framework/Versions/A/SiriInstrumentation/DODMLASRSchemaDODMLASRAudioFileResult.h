@class NSArray, NSData, SISchemaUUID;

@interface DODMLASRSchemaDODMLASRAudioFileResult : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *asrId;
@property (nonatomic) char hasAsrId;
@property (copy, nonatomic) NSArray *decodingResults;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) char hasLinkId;
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
- (void)addDecodingResults:(id)a0;
- (void)clearDecodingResults;
- (id)decodingResultsAtIndex:(unsigned long long)a0;
- (unsigned long long)decodingResultsCount;
- (void)deleteAsrId;
- (void)deleteDecodingResults;
- (void)deleteLinkId;
- (id)suppressMessageUnderConditions;

@end
