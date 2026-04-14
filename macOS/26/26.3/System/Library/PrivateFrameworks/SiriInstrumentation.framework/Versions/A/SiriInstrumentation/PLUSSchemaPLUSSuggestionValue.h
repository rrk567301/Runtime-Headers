@class PLUSSchemaPLUSUniversalSuggestion, PLUSSchemaPLUSMediaSuggestion, NSData;

@interface PLUSSchemaPLUSSuggestionValue : SISchemaInstrumentationMessage

@property (retain, nonatomic) PLUSSchemaPLUSUniversalSuggestion *universalSuggestion;
@property (nonatomic) BOOL hasUniversalSuggestion;
@property (retain, nonatomic) PLUSSchemaPLUSMediaSuggestion *mediaSuggestion;
@property (nonatomic) BOOL hasMediaSuggestion;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichSuggestion;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteMediaSuggestion;
- (void)deleteUniversalSuggestion;

@end
