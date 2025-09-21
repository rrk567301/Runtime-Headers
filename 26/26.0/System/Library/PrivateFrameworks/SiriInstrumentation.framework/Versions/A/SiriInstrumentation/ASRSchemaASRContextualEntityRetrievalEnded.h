@class NSArray, NSData;

@interface ASRSchemaASRContextualEntityRetrievalEnded : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *retrievedEntityStates;
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
- (void).cxx_destruct;
- (void)addRetrievedEntityStates:(id)a0;
- (void)clearRetrievedEntityStates;
- (void)deleteRetrievedEntityStates;
- (id)retrievedEntityStatesAtIndex:(unsigned long long)a0;
- (unsigned long long)retrievedEntityStatesCount;

@end
