@class NSData, ASRSchemaASRFullPayloadCorrectionInfoTier1;

@interface DODMLASRSchemaDODMLASRFullPayloadCorrectionExperimentInfoTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) ASRSchemaASRFullPayloadCorrectionInfoTier1 *infoTier1;
@property (nonatomic) BOOL hasInfoTier1;
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
- (void)deleteInfoTier1;

@end
