@class NSData;

@interface SUGSchemaSUGAutoCompleteQuery : SISchemaInstrumentationMessage {
    struct { unsigned char numCharactersInQuery : 1; unsigned char numWordsInQuery : 1; } _has;
}

@property (nonatomic) int numCharactersInQuery;
@property (nonatomic) BOOL hasNumCharactersInQuery;
@property (nonatomic) int numWordsInQuery;
@property (nonatomic) BOOL hasNumWordsInQuery;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteNumCharactersInQuery;
- (void)deleteNumWordsInQuery;

@end
