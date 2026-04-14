@class NSData, IFTSchemaIFTPlanGenerationModelOutputError;

@interface IFTSchemaIFTPlanGenerationError : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTPlanGenerationModelOutputError *planGenerationModelOutputError;
@property (nonatomic) BOOL hasPlanGenerationModelOutputError;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Plangenerationerror;

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
- (void)deletePlanGenerationModelOutputError;

@end
