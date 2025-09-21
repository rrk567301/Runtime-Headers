@class NSData, PLUSSchemaPLUSContactGroundTruth, SISchemaUUID;

@interface PLUSSchemaPLUSContactGroundTruthGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *originalPlusId;
@property (nonatomic) char hasOriginalPlusId;
@property (retain, nonatomic) PLUSSchemaPLUSContactGroundTruth *groundTruth;
@property (nonatomic) char hasGroundTruth;
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
- (id)suppressMessageUnderConditions;

@end
