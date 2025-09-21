@class NSString, NSData;

@interface SISchemaLocaleIdentifier : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *countryCode;
@property (nonatomic) char hasCountryCode;
@property (copy, nonatomic) NSString *languageCode;
@property (nonatomic) char hasLanguageCode;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCountryCode;
- (void)deleteLanguageCode;
- (id)suppressMessageUnderConditions;

@end
