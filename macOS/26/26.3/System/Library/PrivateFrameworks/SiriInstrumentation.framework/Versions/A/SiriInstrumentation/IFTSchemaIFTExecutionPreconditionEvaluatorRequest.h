@class NSData, IFTSchemaIFTExecutionPreconditionEvaluatorRequestActionRequest;

@interface IFTSchemaIFTExecutionPreconditionEvaluatorRequest : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTExecutionPreconditionEvaluatorRequestActionRequest *request;
@property (nonatomic) BOOL hasRequest;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void)deleteRequest;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
