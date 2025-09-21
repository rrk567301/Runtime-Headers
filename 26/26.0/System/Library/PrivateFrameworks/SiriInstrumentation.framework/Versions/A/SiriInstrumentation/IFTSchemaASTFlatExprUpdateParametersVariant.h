@class NSArray, NSData;

@interface IFTSchemaASTFlatExprUpdateParametersVariant : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *updates;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)clearUpdates;
- (void).cxx_destruct;
- (id)updatesAtIndex:(unsigned long long)a0;
- (void)addUpdates:(id)a0;
- (void)deleteUpdates;
- (unsigned long long)updatesCount;

@end
