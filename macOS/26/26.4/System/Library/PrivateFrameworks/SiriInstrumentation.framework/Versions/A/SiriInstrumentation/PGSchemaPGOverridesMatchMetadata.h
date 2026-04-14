@class NSData;

@interface PGSchemaPGOverridesMatchMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char isMatched : 1; } _has;
}

@property (nonatomic) BOOL isMatched;
@property (nonatomic) BOOL hasIsMatched;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsMatched;

@end
