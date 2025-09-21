@class NSData;

@interface PGSchemaPGOverridesMatchMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char isMatched : 1; } _has;
}

@property (nonatomic) char isMatched;
@property (nonatomic) char hasIsMatched;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsMatched;
- (id)suppressMessageUnderConditions;

@end
