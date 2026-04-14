@class NSString, NSData;

@interface SISchemaLocaleIdentifier : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *countryCode;
@property (nonatomic) BOOL hasCountryCode;
@property (copy, nonatomic) NSString *languageCode;
@property (nonatomic) BOOL hasLanguageCode;
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
- (void)deleteCountryCode;
- (void)deleteLanguageCode;

@end
