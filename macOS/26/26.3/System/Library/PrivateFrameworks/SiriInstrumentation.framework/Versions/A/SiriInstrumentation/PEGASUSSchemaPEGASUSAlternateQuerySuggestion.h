@class NSData;

@interface PEGASUSSchemaPEGASUSAlternateQuerySuggestion : SISchemaInstrumentationMessage {
    struct { unsigned char alternateQuerySuggestionCount : 1; } _has;
}

@property (nonatomic) int alternateQuerySuggestionCount;
@property (nonatomic) BOOL hasAlternateQuerySuggestionCount;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteAlternateQuerySuggestionCount;

@end
