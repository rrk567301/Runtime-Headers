@class NSData, SISchemaLocaleIdentifier;

@interface SISchemaDictationAlternativesViewed : SISchemaInstrumentationMessage {
    struct { unsigned char countOfWordsUnderlined : 1; unsigned char countOfAlternativesAvailable : 1; } _has;
}

@property (nonatomic) int countOfWordsUnderlined;
@property (nonatomic) BOOL hasCountOfWordsUnderlined;
@property (nonatomic) int countOfAlternativesAvailable;
@property (nonatomic) BOOL hasCountOfAlternativesAvailable;
@property (retain, nonatomic) SISchemaLocaleIdentifier *alternativesLocale;
@property (nonatomic) BOOL hasAlternativesLocale;
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
- (void)deleteAlternativesLocale;
- (void)deleteCountOfAlternativesAvailable;
- (void)deleteCountOfWordsUnderlined;

@end
