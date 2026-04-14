@class NSData, IFTSchemaIFTExecutionPreconditionEvaluatorRequestActionRequest;

@interface IFTSchemaIFTExecutionPreconditionEvaluatorRequest : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTExecutionPreconditionEvaluatorRequestActionRequest *request;
@property (nonatomic) BOOL hasRequest;
@property (readonly, nonatomic) NSData *jsonData;

- (void)deleteRequest;
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

@end
