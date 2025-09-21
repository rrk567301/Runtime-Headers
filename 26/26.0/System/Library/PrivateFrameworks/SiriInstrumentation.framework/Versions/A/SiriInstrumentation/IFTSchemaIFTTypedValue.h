@class IFTSchemaIFTCollectionValue, IFTSchemaIFTValue, NSData;

@interface IFTSchemaIFTTypedValue : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTValue *value;
@property (nonatomic) BOOL hasValue;
@property (retain, nonatomic) IFTSchemaIFTCollectionValue *collection;
@property (nonatomic) BOOL hasCollection;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Typedvalue;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteCollection;
- (void)deleteValue;

@end
