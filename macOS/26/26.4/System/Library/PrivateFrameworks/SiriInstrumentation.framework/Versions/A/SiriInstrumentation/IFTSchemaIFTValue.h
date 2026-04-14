@class IFTSchemaIFTEnumerationValue, IFTSchemaIFTQueryValue, IFTSchemaIFTPrimitiveValue, NSData, IFTSchemaIFTEntityValue;

@interface IFTSchemaIFTValue : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTPrimitiveValue *primitive;
@property (nonatomic) BOOL hasPrimitive;
@property (retain, nonatomic) IFTSchemaIFTEnumerationValue *enumeration;
@property (nonatomic) BOOL hasEnumeration;
@property (retain, nonatomic) IFTSchemaIFTEntityValue *entity;
@property (nonatomic) BOOL hasEntity;
@property (retain, nonatomic) IFTSchemaIFTQueryValue *query;
@property (nonatomic) BOOL hasQuery;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Value;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deletePrimitive;
- (void)deleteEntity;
- (void)deleteEnumeration;
- (void)deleteQuery;

@end
