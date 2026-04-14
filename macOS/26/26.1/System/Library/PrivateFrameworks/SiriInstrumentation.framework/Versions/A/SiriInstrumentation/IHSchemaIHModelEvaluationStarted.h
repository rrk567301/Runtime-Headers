@class NSString, NSData;

@interface IHSchemaIHModelEvaluationStarted : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *modelId;
@property (nonatomic) BOOL hasModelId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteModelId;

@end
