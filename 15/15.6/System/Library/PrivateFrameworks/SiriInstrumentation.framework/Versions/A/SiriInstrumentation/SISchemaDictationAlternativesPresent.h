@class NSData, SISchemaLocaleIdentifier;

@interface SISchemaDictationAlternativesPresent : SISchemaInstrumentationMessage {
    struct { unsigned char numberOfUnderlines : 1; unsigned char countOfWordsUnderlined : 1; unsigned char multilingualIsLowConfidence : 1; } _has;
}

@property (nonatomic) int numberOfUnderlines;
@property (nonatomic) char hasNumberOfUnderlines;
@property (nonatomic) int countOfWordsUnderlined;
@property (nonatomic) char hasCountOfWordsUnderlined;
@property (retain, nonatomic) SISchemaLocaleIdentifier *alternativesLocale;
@property (nonatomic) char hasAlternativesLocale;
@property (nonatomic) char multilingualIsLowConfidence;
@property (nonatomic) char hasMultilingualIsLowConfidence;
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
- (void)deleteCountOfWordsUnderlined;
- (void)deleteMultilingualIsLowConfidence;
- (void)deleteNumberOfUnderlines;
- (id)suppressMessageUnderConditions;

@end
