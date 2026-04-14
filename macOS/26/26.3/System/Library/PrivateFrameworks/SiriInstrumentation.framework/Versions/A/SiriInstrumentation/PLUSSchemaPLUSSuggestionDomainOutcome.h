@class PLUSSchemaPLUSMediaSuggestionOutcome, NSData;

@interface PLUSSchemaPLUSSuggestionDomainOutcome : SISchemaInstrumentationMessage

@property (retain, nonatomic) PLUSSchemaPLUSMediaSuggestionOutcome *mediaOutcome;
@property (nonatomic) BOOL hasMediaOutcome;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichDomainsuggestionoutcome;

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
- (void)deleteMediaOutcome;

@end
