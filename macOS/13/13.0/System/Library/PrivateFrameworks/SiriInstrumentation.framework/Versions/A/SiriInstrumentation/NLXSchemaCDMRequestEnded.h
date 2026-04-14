@class NSArray, NSData;

@interface NLXSchemaCDMRequestEnded : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *parses;
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
- (void)clearParses;
- (void)deleteParses;
- (void)addParses:(id)a0;
- (unsigned long long)parsesCount;
- (id)parsesAtIndex:(unsigned long long)a0;

@end
