@class NSArray, NSData;

@interface NLXSchemaCDMSystemGaveOptions : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *choices;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)clearChoices;
- (void)deleteChoices;
- (void)addChoices:(id)a0;
- (unsigned long long)choicesCount;
- (id)choicesAtIndex:(unsigned long long)a0;

@end
