@class NSArray, NLXSchemaCDMLanguageVariantResult, NSData;

@interface NLXSchemaCDMRequestEnded : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *parses;
@property (retain, nonatomic) NLXSchemaCDMLanguageVariantResult *languageVariantClassifierResult;
@property (nonatomic) BOOL hasLanguageVariantClassifierResult;
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
- (void)addParses:(id)a0;
- (void)clearParses;
- (void)deleteLanguageVariantClassifierResult;
- (void)deleteParses;
- (id)parsesAtIndex:(unsigned long long)a0;
- (unsigned long long)parsesCount;

@end
