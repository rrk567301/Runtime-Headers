@class NSArray, IFTSchemaIFTTypeIdentifier, NSData;

@interface IFTSchemaIFTCollectionValue : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTTypeIdentifier *typeIdentifier;
@property (nonatomic) BOOL hasTypeIdentifier;
@property (copy, nonatomic) NSArray *values;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)valuesCount;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)clearValues;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addValues:(id)a0;
- (id)valuesAtIndex:(unsigned long long)a0;
- (void)deleteTypeIdentifier;
- (void)deleteValues;

@end
