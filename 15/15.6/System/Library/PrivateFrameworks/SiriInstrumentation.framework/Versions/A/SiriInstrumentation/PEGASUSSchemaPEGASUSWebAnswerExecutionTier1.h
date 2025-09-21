@class NSString, NSData;

@interface PEGASUSSchemaPEGASUSWebAnswerExecutionTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *answerId;
@property (nonatomic) char hasAnswerId;
@property (copy, nonatomic) NSString *entityUrl;
@property (nonatomic) char hasEntityUrl;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteEntityUrl;
- (void)deleteAnswerId;
- (id)suppressMessageUnderConditions;

@end
