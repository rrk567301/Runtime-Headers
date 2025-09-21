@class NSData, ASRSchemaASRFullPayloadCorrectionContext, SISchemaUUID;

@interface DODMLASRSchemaDODMLASRFullPayloadCorrectionExperimentContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *originalAsrId;
@property (nonatomic) char hasOriginalAsrId;
@property (retain, nonatomic) ASRSchemaASRFullPayloadCorrectionContext *fullPayloadCorrectionContext;
@property (nonatomic) char hasFullPayloadCorrectionContext;
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
- (void)deleteFullPayloadCorrectionContext;
- (void)deleteOriginalAsrId;
- (id)suppressMessageUnderConditions;

@end
