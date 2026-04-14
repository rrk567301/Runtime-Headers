@class NSData;

@interface SUGSchemaSUGAutoCompleteSuggestionMetaData : SISchemaInstrumentationMessage {
    struct { unsigned char autoCompleteSuggestionSource : 1; } _has;
}

@property (nonatomic) int autoCompleteSuggestionSource;
@property (nonatomic) BOOL hasAutoCompleteSuggestionSource;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteAutoCompleteSuggestionSource;

@end
