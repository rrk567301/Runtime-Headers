@class NSData, PLUSSchemaPLUSSuggesterMediaSuggestionMetadata;

@interface PLUSSchemaPLUSSuggesterDomainSuggestionMetadata : SISchemaInstrumentationMessage

@property (retain, nonatomic) PLUSSchemaPLUSSuggesterMediaSuggestionMetadata *mediaMetadata;
@property (nonatomic) char hasMediaMetadata;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichDomainsuggestionmetadata;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteMediaMetadata;
- (id)suppressMessageUnderConditions;

@end
