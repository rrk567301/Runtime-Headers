@class NSData;

@interface MHSchemaMHServerEndpointerContext : SISchemaInstrumentationMessage {
    struct { unsigned char enabled : 1; } _has;
}

@property (nonatomic) char enabled;
@property (nonatomic) char hasEnabled;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEnabled;
- (id)suppressMessageUnderConditions;

@end
