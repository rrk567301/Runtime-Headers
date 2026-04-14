@class NSArray, NSData;

@interface MTSchemaMTLanguageDisambiguationUIShown : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *locales;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addLocale:(int)a0;
- (void)clearLocale;
- (void)deleteLocale;
- (int)localeAtIndex:(unsigned long long)a0;
- (unsigned long long)localeCount;

@end
