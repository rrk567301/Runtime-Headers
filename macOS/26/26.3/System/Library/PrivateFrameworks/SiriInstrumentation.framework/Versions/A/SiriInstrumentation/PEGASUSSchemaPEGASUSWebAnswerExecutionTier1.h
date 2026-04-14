@class NSString, NSData;

@interface PEGASUSSchemaPEGASUSWebAnswerExecutionTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *answerId;
@property (nonatomic) BOOL hasAnswerId;
@property (copy, nonatomic) NSString *entityUrl;
@property (nonatomic) BOOL hasEntityUrl;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteEntityUrl;
- (void)deleteAnswerId;

@end
