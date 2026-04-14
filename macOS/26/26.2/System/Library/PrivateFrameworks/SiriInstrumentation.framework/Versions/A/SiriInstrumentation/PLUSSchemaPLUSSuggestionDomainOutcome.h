@class PLUSSchemaPLUSMediaSuggestionOutcome, NSData;

@interface PLUSSchemaPLUSSuggestionDomainOutcome : SISchemaInstrumentationMessage

@property (retain, nonatomic) PLUSSchemaPLUSMediaSuggestionOutcome *mediaOutcome;
@property (nonatomic) BOOL hasMediaOutcome;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichDomainsuggestionoutcome;

- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteMediaOutcome;

@end
