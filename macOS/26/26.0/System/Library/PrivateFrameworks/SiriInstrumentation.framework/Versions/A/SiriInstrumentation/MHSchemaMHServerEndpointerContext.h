@class NSData;

@interface MHSchemaMHServerEndpointerContext : SISchemaInstrumentationMessage {
    struct { unsigned char enabled : 1; } _has;
}

@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL hasEnabled;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteEnabled;

@end
