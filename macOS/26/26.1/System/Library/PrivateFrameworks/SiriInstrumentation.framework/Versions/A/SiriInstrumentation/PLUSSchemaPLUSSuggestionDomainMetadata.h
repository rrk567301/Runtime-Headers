@class NSData;

@interface PLUSSchemaPLUSSuggestionDomainMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char suggestionGenerationDomain : 1; } _has;
}

@property (nonatomic) int suggestionGenerationDomain;
@property (nonatomic) BOOL hasSuggestionGenerationDomain;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteSuggestionGenerationDomain;

@end
