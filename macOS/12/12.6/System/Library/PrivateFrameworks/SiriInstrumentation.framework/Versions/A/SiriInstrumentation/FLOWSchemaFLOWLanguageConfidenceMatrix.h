@class NSArray, NSData;

@interface FLOWSchemaFLOWLanguageConfidenceMatrix : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *languageConfidenceArrays;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)clearLanguageConfidenceArrays;
- (void)addLanguageConfidenceArrays:(id)a0;
- (void)deleteLanguageConfidenceArrays;
- (unsigned long long)languageConfidenceArraysCount;
- (id)languageConfidenceArraysAtIndex:(unsigned long long)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
