@class NSData, IFTSchemaIFTExecutionPreconditionEvaluatorRequestActionRequest;

@interface IFTSchemaIFTExecutionPreconditionEvaluatorRequest : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTExecutionPreconditionEvaluatorRequestActionRequest *request;
@property (nonatomic) BOOL hasRequest;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteRequest;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)suppressMessageUnderConditions;

@end
