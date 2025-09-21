@class NSData, SISchemaLocaleIdentifier;

@interface SISchemaDictationAlternativesViewed : SISchemaInstrumentationMessage {
    struct { unsigned char countOfWordsUnderlined : 1; unsigned char countOfAlternativesAvailable : 1; } _has;
}

@property (nonatomic) int countOfWordsUnderlined;
@property (nonatomic) char hasCountOfWordsUnderlined;
@property (nonatomic) int countOfAlternativesAvailable;
@property (nonatomic) char hasCountOfAlternativesAvailable;
@property (retain, nonatomic) SISchemaLocaleIdentifier *alternativesLocale;
@property (nonatomic) char hasAlternativesLocale;
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
- (void)deleteAlternativesLocale;
- (void)deleteCountOfAlternativesAvailable;
- (void)deleteCountOfWordsUnderlined;
- (id)suppressMessageUnderConditions;

@end
