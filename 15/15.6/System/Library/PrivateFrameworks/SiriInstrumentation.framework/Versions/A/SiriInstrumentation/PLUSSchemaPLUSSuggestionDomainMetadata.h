@class NSData;

@interface PLUSSchemaPLUSSuggestionDomainMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char suggestionGenerationDomain : 1; } _has;
}

@property (nonatomic) int suggestionGenerationDomain;
@property (nonatomic) char hasSuggestionGenerationDomain;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteSuggestionGenerationDomain;
- (id)suppressMessageUnderConditions;

@end
