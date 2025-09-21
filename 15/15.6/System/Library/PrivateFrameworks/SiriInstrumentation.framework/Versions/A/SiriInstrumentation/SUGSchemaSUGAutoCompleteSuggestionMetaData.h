@class NSData;

@interface SUGSchemaSUGAutoCompleteSuggestionMetaData : SISchemaInstrumentationMessage {
    struct { unsigned char autoCompleteSuggestionSource : 1; } _has;
}

@property (nonatomic) int autoCompleteSuggestionSource;
@property (nonatomic) char hasAutoCompleteSuggestionSource;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAutoCompleteSuggestionSource;
- (id)suppressMessageUnderConditions;

@end
