@class IFTSchemaIFTCollectionValue, IFTSchemaIFTValue, NSData;

@interface IFTSchemaIFTTypedValue : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTValue *value;
@property (nonatomic) BOOL hasValue;
@property (retain, nonatomic) IFTSchemaIFTCollectionValue *collection;
@property (nonatomic) BOOL hasCollection;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Typedvalue;

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
- (void)deleteCollection;
- (void)deleteValue;

@end
