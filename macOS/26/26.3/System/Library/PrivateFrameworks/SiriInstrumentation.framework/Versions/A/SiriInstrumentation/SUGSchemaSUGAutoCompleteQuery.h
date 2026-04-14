@class NSData;

@interface SUGSchemaSUGAutoCompleteQuery : SISchemaInstrumentationMessage {
    struct { unsigned char numCharactersInQuery : 1; unsigned char numWordsInQuery : 1; } _has;
}

@property (nonatomic) int numCharactersInQuery;
@property (nonatomic) BOOL hasNumCharactersInQuery;
@property (nonatomic) int numWordsInQuery;
@property (nonatomic) BOOL hasNumWordsInQuery;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteNumCharactersInQuery;
- (void)deleteNumWordsInQuery;

@end
