@class NSData;

@interface PEGASUSSchemaPEGASUSAlternateQuerySuggestion : SISchemaInstrumentationMessage {
    struct { unsigned char alternateQuerySuggestionCount : 1; } _has;
}

@property (nonatomic) int alternateQuerySuggestionCount;
@property (nonatomic) BOOL hasAlternateQuerySuggestionCount;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteAlternateQuerySuggestionCount;

@end
