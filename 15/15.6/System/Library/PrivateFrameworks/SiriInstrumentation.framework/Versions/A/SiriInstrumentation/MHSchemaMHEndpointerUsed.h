@class NSData;

@interface MHSchemaMHEndpointerUsed : SISchemaInstrumentationMessage {
    struct { unsigned char endpointer : 1; } _has;
}

@property (nonatomic) int endpointer;
@property (nonatomic) char hasEndpointer;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEndpointer;
- (id)suppressMessageUnderConditions;

@end
