@class NSArray, NSData, NLXSchemaCDMParser;

@interface NLXSchemaCDMLanguageVariantResult : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *multilingualVariants;
@property (retain, nonatomic) NLXSchemaCDMParser *cdmParser;
@property (nonatomic) char hasCdmParser;
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
- (void)deleteCdmParser;
- (void)addMultilingualVariants:(id)a0;
- (void)clearMultilingualVariants;
- (void)deleteMultilingualVariants;
- (id)multilingualVariantsAtIndex:(unsigned long long)a0;
- (unsigned long long)multilingualVariantsCount;
- (id)suppressMessageUnderConditions;

@end
