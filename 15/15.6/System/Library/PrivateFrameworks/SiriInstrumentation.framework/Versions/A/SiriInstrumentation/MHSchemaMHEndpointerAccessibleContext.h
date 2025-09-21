@class NSData;

@interface MHSchemaMHEndpointerAccessibleContext : SISchemaInstrumentationMessage {
    struct { unsigned char accessibleEndpointerLevel : 1; } _has;
}

@property (nonatomic) int accessibleEndpointerLevel;
@property (nonatomic) char hasAccessibleEndpointerLevel;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAccessibleEndpointerLevel;
- (id)suppressMessageUnderConditions;

@end
