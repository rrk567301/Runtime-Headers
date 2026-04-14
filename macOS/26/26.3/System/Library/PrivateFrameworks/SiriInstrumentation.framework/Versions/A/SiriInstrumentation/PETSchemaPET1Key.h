@class NSString, NSData;

@interface PETSchemaPET1Key : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *key;
@property (nonatomic) BOOL hasKey;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteKey;

@end
