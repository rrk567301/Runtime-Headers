@class PLUSSchemaPLUSUniversalSuggestion, PLUSSchemaPLUSMediaSuggestion, NSData;

@interface PLUSSchemaPLUSSuggestionValue : SISchemaInstrumentationMessage

@property (retain, nonatomic) PLUSSchemaPLUSUniversalSuggestion *universalSuggestion;
@property (nonatomic) char hasUniversalSuggestion;
@property (retain, nonatomic) PLUSSchemaPLUSMediaSuggestion *mediaSuggestion;
@property (nonatomic) char hasMediaSuggestion;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichSuggestion;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteMediaSuggestion;
- (void)deleteUniversalSuggestion;
- (id)suppressMessageUnderConditions;

@end
