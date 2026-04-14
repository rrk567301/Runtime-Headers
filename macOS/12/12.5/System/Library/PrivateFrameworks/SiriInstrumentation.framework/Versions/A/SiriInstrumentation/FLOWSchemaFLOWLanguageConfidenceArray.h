@class NSArray, NSData;

@interface FLOWSchemaFLOWLanguageConfidenceArray : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *languageConfidences;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)clearLanguageConfidences;
- (void)addLanguageConfidences:(id)a0;
- (void)deleteLanguageConfidences;
- (unsigned long long)languageConfidencesCount;
- (id)languageConfidencesAtIndex:(unsigned long long)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
