@class NSData;

@interface SISchemaISOLocale : SISchemaInstrumentationMessage {
    struct { unsigned char languageCode : 1; unsigned char countryCode : 1; } _has;
}

@property (nonatomic) int languageCode;
@property (nonatomic) char hasLanguageCode;
@property (nonatomic) int countryCode;
@property (nonatomic) char hasCountryCode;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCountryCode;
- (void)deleteLanguageCode;
- (id)suppressMessageUnderConditions;

@end
