@class NSArray, IFTSchemaIFTTypeIdentifier, NSData;

@interface IFTSchemaIFTCollectionValue : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTTypeIdentifier *typeIdentifier;
@property (nonatomic) BOOL hasTypeIdentifier;
@property (copy, nonatomic) NSArray *values;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (void)clearValues;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)valuesCount;
- (void)addValues:(id)a0;
- (id)valuesAtIndex:(unsigned long long)a0;
- (void)deleteTypeIdentifier;
- (void)deleteValues;

@end
