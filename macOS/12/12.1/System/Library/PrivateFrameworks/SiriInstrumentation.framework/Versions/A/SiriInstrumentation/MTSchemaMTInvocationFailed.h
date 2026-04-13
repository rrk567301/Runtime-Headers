@class NSData, MTSchemaMTError;

@interface MTSchemaMTInvocationFailed : SISchemaInstrumentationMessage

@property (retain, nonatomic) MTSchemaMTError *error;
@property (nonatomic) BOOL hasError;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;

@end
