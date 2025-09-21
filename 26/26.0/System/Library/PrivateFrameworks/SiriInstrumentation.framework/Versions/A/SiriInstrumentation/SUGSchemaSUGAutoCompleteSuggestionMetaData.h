@class NSData;

@interface SUGSchemaSUGAutoCompleteSuggestionMetaData : SISchemaInstrumentationMessage {
    struct { unsigned char autoCompleteSuggestionSource : 1; } _has;
}

@property (nonatomic) int autoCompleteSuggestionSource;
@property (nonatomic) BOOL hasAutoCompleteSuggestionSource;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteAutoCompleteSuggestionSource;

@end
