@class NSData, IFTSchemaIFTPlanGenerationModelOutputError;

@interface IFTSchemaIFTPlanGenerationError : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTPlanGenerationModelOutputError *planGenerationModelOutputError;
@property (nonatomic) BOOL hasPlanGenerationModelOutputError;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Plangenerationerror;

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
- (void)deletePlanGenerationModelOutputError;

@end
