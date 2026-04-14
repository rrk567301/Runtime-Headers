@class PLUSSchemaPLUSUniversalSuggestion, PLUSSchemaPLUSMediaSuggestion, NSData;

@interface PLUSSchemaPLUSSuggestionValue : SISchemaInstrumentationMessage

@property (retain, nonatomic) PLUSSchemaPLUSUniversalSuggestion *universalSuggestion;
@property (nonatomic) BOOL hasUniversalSuggestion;
@property (retain, nonatomic) PLUSSchemaPLUSMediaSuggestion *mediaSuggestion;
@property (nonatomic) BOOL hasMediaSuggestion;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichSuggestion;

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
- (void)deleteMediaSuggestion;
- (void)deleteUniversalSuggestion;

@end
