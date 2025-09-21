@class IFTSchemaIFTEnumerationValue, IFTSchemaIFTQueryValue, IFTSchemaIFTPrimitiveValue, NSData, IFTSchemaIFTEntityValue;

@interface IFTSchemaIFTValue : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTPrimitiveValue *primitive;
@property (nonatomic) char hasPrimitive;
@property (retain, nonatomic) IFTSchemaIFTEnumerationValue *enumeration;
@property (nonatomic) char hasEnumeration;
@property (retain, nonatomic) IFTSchemaIFTEntityValue *entity;
@property (nonatomic) char hasEntity;
@property (retain, nonatomic) IFTSchemaIFTQueryValue *query;
@property (nonatomic) char hasQuery;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Value;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deletePrimitive;
- (void)deleteEntity;
- (void)deleteEnumeration;
- (void)deleteQuery;
- (id)suppressMessageUnderConditions;

@end
