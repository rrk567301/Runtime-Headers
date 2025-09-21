@class PLUSSchemaPLUSTMDCGroundTruth, NSData, SISchemaUUID;

@interface PLUSSchemaPLUSTMDCGroundTruthGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *originalPlusId;
@property (nonatomic) char hasOriginalPlusId;
@property (retain, nonatomic) PLUSSchemaPLUSTMDCGroundTruth *groundTruth;
@property (nonatomic) char hasGroundTruth;
@property (retain, nonatomic) SISchemaUUID *originalRequestId;
@property (nonatomic) char hasOriginalRequestId;
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
- (void)deleteGroundTruth;
- (void)deleteOriginalPlusId;
- (void)deleteOriginalRequestId;
- (id)suppressMessageUnderConditions;

@end
