@class NSArray, NSData;

@interface IFTSchemaASTFlatExprUpdateParametersVariant : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *updates;
@property (readonly, nonatomic) NSData *jsonData;

- (void)clearUpdates;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)updatesAtIndex:(unsigned long long)a0;
- (void)addUpdates:(id)a0;
- (void)deleteUpdates;
- (unsigned long long)updatesCount;

@end
