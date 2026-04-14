@class NSArray, NSData;

@interface IFTSchemaASTFlatExprUpdateParametersVariant : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *updates;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)clearUpdates;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)updatesAtIndex:(unsigned long long)a0;
- (void)addUpdates:(id)a0;
- (void)deleteUpdates;
- (unsigned long long)updatesCount;

@end
