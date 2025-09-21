@class IFTSchemaIFTIntelligenceFlowError, NSData;

@interface IFTSchemaIFTExecutorError : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTIntelligenceFlowError *other;
@property (nonatomic) char hasOther;
@property (nonatomic) char failedToExecute;
@property (nonatomic) char hasFailedToExecute;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Executorerror;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteFailedToExecute;
- (void)deleteOther;
- (id)suppressMessageUnderConditions;

@end
