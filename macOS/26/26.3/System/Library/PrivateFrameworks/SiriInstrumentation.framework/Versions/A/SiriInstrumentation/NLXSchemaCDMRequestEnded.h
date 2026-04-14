@class NSArray, NLXSchemaCDMLanguageVariantResult, NSData;

@interface NLXSchemaCDMRequestEnded : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *parses;
@property (retain, nonatomic) NLXSchemaCDMLanguageVariantResult *languageVariantClassifierResult;
@property (nonatomic) BOOL hasLanguageVariantClassifierResult;
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
- (void)addParses:(id)a0;
- (void)clearParses;
- (void)deleteLanguageVariantClassifierResult;
- (void)deleteParses;
- (id)parsesAtIndex:(unsigned long long)a0;
- (unsigned long long)parsesCount;

@end
