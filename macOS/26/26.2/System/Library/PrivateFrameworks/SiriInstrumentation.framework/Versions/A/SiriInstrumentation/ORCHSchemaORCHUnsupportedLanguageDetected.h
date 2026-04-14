@class NSData;

@interface ORCHSchemaORCHUnsupportedLanguageDetected : SISchemaInstrumentationMessage {
    struct { unsigned char languageDetected : 1; } _has;
}

@property (nonatomic) int languageDetected;
@property (nonatomic) BOOL hasLanguageDetected;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteLanguageDetected;

@end
