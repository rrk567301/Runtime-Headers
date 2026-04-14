@class NSData, IFTSchemaIFTExecutionPreconditionEvaluatorRequestActionRequest;

@interface IFTSchemaIFTExecutionPreconditionEvaluatorRequest : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTExecutionPreconditionEvaluatorRequestActionRequest *request;
@property (nonatomic) BOOL hasRequest;
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
- (void)deleteRequest;
- (id)initWithJSON:(id)a0;

@end
