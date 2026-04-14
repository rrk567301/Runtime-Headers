@class NSData;

@interface ORCHSchemaORCHUnsupportedLanguageDetected : SISchemaInstrumentationMessage {
    struct { unsigned char languageDetected : 1; } _has;
}

@property (nonatomic) int languageDetected;
@property (nonatomic) BOOL hasLanguageDetected;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteLanguageDetected;

@end
