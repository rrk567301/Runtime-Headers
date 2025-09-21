@class NSData, SISchemaLocaleIdentifier;

@interface SISchemaDictationAlternativeSelected : SISchemaInstrumentationMessage {
    struct { unsigned char countOfWordsReplaced : 1; unsigned char countOfAlternativesAvailable : 1; unsigned char alternativeListPosition : 1; } _has;
}

@property (nonatomic) int countOfWordsReplaced;
@property (nonatomic) char hasCountOfWordsReplaced;
@property (nonatomic) int countOfAlternativesAvailable;
@property (nonatomic) char hasCountOfAlternativesAvailable;
@property (nonatomic) int alternativeListPosition;
@property (nonatomic) char hasAlternativeListPosition;
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
- (void)deleteAlternativeListPosition;
- (void)deleteAlternativesLocale;
- (void)deleteCountOfAlternativesAvailable;
- (void)deleteCountOfWordsReplaced;
- (id)suppressMessageUnderConditions;

@end
