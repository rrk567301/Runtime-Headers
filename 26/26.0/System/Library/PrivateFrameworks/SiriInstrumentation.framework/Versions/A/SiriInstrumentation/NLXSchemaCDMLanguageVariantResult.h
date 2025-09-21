@class NSArray, NSData, NLXSchemaCDMParser;

@interface NLXSchemaCDMLanguageVariantResult : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *multilingualVariants;
@property (retain, nonatomic) NLXSchemaCDMParser *cdmParser;
@property (nonatomic) BOOL hasCdmParser;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteCdmParser;
- (void)addMultilingualVariants:(id)a0;
- (void)clearMultilingualVariants;
- (void)deleteMultilingualVariants;
- (id)multilingualVariantsAtIndex:(unsigned long long)a0;
- (unsigned long long)multilingualVariantsCount;

@end
