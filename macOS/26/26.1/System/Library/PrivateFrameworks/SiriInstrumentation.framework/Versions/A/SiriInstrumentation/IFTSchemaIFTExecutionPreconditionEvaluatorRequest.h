@class NSData, IFTSchemaIFTExecutionPreconditionEvaluatorRequestActionRequest;

@interface IFTSchemaIFTExecutionPreconditionEvaluatorRequest : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTExecutionPreconditionEvaluatorRequestActionRequest *request;
@property (nonatomic) BOOL hasRequest;
@property (readonly, nonatomic) NSData *jsonData;

- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)deleteRequest;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
