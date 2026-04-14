@class NSData, ASRSchemaASRFullPayloadCorrectionContext, SISchemaUUID;

@interface DODMLASRSchemaDODMLASRFullPayloadCorrectionExperimentContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *originalAsrId;
@property (nonatomic) BOOL hasOriginalAsrId;
@property (retain, nonatomic) ASRSchemaASRFullPayloadCorrectionContext *fullPayloadCorrectionContext;
@property (nonatomic) BOOL hasFullPayloadCorrectionContext;
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
- (void)deleteFullPayloadCorrectionContext;
- (void)deleteOriginalAsrId;

@end
