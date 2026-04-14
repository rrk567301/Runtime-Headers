@class NSData, CHSchemaCHEvaluatorMetadata, CHSchemaCHUserAlignmentInferenceMetadata;

@interface CHSchemaCHUserAlignmentInferenceGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) CHSchemaCHEvaluatorMetadata *evaluatorMetadata;
@property (nonatomic) BOOL hasEvaluatorMetadata;
@property (retain, nonatomic) CHSchemaCHUserAlignmentInferenceMetadata *userAlignmentInferenceMetadata;
@property (nonatomic) BOOL hasUserAlignmentInferenceMetadata;
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
- (void)deleteEvaluatorMetadata;
- (void)deleteUserAlignmentInferenceMetadata;

@end
