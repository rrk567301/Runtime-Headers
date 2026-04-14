@class NSArray, NSData;

@interface NLXSchemaCDMSystemGaveOptions : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *choices;
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
- (id)initWithJSON:(id)a0;
- (id)choicesAtIndex:(unsigned long long)a0;
- (void)addChoices:(id)a0;
- (unsigned long long)choicesCount;
- (void)clearChoices;
- (void)deleteChoices;

@end
