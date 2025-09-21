@class IFTSchemaIFTPlanGenerationError, NSData;

@interface IFTSchemaIFTRecoverableError : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTPlanGenerationError *planGenerationError;
@property (nonatomic) BOOL hasPlanGenerationError;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Recoverableerror;

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
- (void)deletePlanGenerationError;

@end
