@class IFTSchemaIFTCollectionValue, IFTSchemaIFTValue, NSData;

@interface IFTSchemaIFTTypedValue : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTValue *value;
@property (nonatomic) char hasValue;
@property (retain, nonatomic) IFTSchemaIFTCollectionValue *collection;
@property (nonatomic) char hasCollection;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Typedvalue;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteCollection;
- (void)deleteValue;
- (id)suppressMessageUnderConditions;

@end
