@class NSData;

@interface GATSchemaGATTextMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char characterCount : 1; } _has;
}

@property (nonatomic) unsigned int characterCount;
@property (nonatomic) BOOL hasCharacterCount;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteCharacterCount;

@end
