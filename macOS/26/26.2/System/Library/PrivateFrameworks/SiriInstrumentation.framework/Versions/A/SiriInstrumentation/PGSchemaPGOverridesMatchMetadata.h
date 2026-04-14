@class NSData;

@interface PGSchemaPGOverridesMatchMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char isMatched : 1; } _has;
}

@property (nonatomic) BOOL isMatched;
@property (nonatomic) BOOL hasIsMatched;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteIsMatched;

@end
