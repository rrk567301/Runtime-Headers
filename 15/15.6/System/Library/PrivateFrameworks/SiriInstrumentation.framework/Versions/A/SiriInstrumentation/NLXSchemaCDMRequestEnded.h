@class NSArray, NLXSchemaCDMLanguageVariantResult, NSData;

@interface NLXSchemaCDMRequestEnded : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *parses;
@property (retain, nonatomic) NLXSchemaCDMLanguageVariantResult *languageVariantClassifierResult;
@property (nonatomic) char hasLanguageVariantClassifierResult;
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
- (void)addParses:(id)a0;
- (void)clearParses;
- (void)deleteLanguageVariantClassifierResult;
- (void)deleteParses;
- (id)parsesAtIndex:(unsigned long long)a0;
- (unsigned long long)parsesCount;
- (id)suppressMessageUnderConditions;

@end
