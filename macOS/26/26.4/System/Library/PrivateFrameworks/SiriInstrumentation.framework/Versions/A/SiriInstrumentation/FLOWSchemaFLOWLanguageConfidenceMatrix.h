@class NSArray, NSData;

@interface FLOWSchemaFLOWLanguageConfidenceMatrix : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *languageConfidenceArrays;
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
- (void)addLanguageConfidenceArrays:(id)a0;
- (void)clearLanguageConfidenceArrays;
- (void)deleteLanguageConfidenceArrays;
- (id)languageConfidenceArraysAtIndex:(unsigned long long)a0;
- (unsigned long long)languageConfidenceArraysCount;

@end
