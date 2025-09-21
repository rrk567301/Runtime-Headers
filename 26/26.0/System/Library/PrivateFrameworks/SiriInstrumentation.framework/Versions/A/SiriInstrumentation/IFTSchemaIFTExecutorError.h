@class IFTSchemaIFTIntelligenceFlowError, NSData;

@interface IFTSchemaIFTExecutorError : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTIntelligenceFlowError *other;
@property (nonatomic) BOOL hasOther;
@property (nonatomic) BOOL failedToExecute;
@property (nonatomic) BOOL hasFailedToExecute;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Executorerror;

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
- (void)deleteFailedToExecute;
- (void)deleteOther;

@end
