@class NSString, NSData;

@interface FLOWSchemaFLOWWebAnswerExecutionTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *answerId;
@property (nonatomic) char hasAnswerId;
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
- (void)deleteAnswerId;
- (id)suppressMessageUnderConditions;

@end
