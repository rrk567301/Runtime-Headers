@class NSData, SISchemaLocaleIdentifier;

@interface SISchemaDictationAlternativesPresent : SISchemaInstrumentationMessage {
    struct { unsigned char numberOfUnderlines : 1; unsigned char countOfWordsUnderlined : 1; unsigned char multilingualIsLowConfidence : 1; } _has;
}

@property (nonatomic) int numberOfUnderlines;
@property (nonatomic) BOOL hasNumberOfUnderlines;
@property (nonatomic) int countOfWordsUnderlined;
@property (nonatomic) BOOL hasCountOfWordsUnderlined;
@property (retain, nonatomic) SISchemaLocaleIdentifier *alternativesLocale;
@property (nonatomic) BOOL hasAlternativesLocale;
@property (nonatomic) BOOL multilingualIsLowConfidence;
@property (nonatomic) BOOL hasMultilingualIsLowConfidence;
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
- (void)deleteCountOfWordsUnderlined;
- (void)deleteMultilingualIsLowConfidence;
- (void)deleteNumberOfUnderlines;

@end
