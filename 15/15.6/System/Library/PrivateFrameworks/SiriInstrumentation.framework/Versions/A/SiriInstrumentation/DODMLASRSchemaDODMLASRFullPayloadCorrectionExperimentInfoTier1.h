@class NSData, ASRSchemaASRFullPayloadCorrectionInfoTier1;

@interface DODMLASRSchemaDODMLASRFullPayloadCorrectionExperimentInfoTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) ASRSchemaASRFullPayloadCorrectionInfoTier1 *infoTier1;
@property (nonatomic) char hasInfoTier1;
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
- (void)deleteInfoTier1;
- (id)suppressMessageUnderConditions;

@end
