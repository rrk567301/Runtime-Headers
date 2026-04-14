@class NSArray, NSData;

@interface MTSchemaMTLanguageDisambiguationUIShown : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *locales;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addLocale:(int)a0;
- (void)clearLocale;
- (void)deleteLocale;
- (int)localeAtIndex:(unsigned long long)a0;
- (unsigned long long)localeCount;

@end
