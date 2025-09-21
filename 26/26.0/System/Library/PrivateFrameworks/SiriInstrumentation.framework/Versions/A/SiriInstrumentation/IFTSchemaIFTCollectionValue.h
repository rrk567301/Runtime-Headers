@class NSArray, IFTSchemaIFTTypeIdentifier, NSData;

@interface IFTSchemaIFTCollectionValue : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTTypeIdentifier *typeIdentifier;
@property (nonatomic) BOOL hasTypeIdentifier;
@property (copy, nonatomic) NSArray *values;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (void)clearValues;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)valuesCount;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addValues:(id)a0;
- (id)valuesAtIndex:(unsigned long long)a0;
- (void)deleteTypeIdentifier;
- (void)deleteValues;

@end
