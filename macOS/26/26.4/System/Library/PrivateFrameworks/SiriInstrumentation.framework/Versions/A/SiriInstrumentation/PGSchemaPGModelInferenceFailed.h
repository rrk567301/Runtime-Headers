@class IFTSchemaIFTIntelligenceFlowError, NSString, NSData;

@interface PGSchemaPGModelInferenceFailed : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTIntelligenceFlowError *criticalError;
@property (nonatomic) BOOL hasCriticalError;
@property (copy, nonatomic) NSString *modelIdentifier;
@property (nonatomic) BOOL hasModelIdentifier;
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
- (void)deleteCriticalError;
- (void)deleteModelIdentifier;

@end
