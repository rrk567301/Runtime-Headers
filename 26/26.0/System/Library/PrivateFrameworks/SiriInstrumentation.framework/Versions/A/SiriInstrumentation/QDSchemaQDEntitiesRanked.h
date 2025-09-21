@class NSArray, NSData;

@interface QDSchemaQDEntitiesRanked : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *retrievedTools;
@property (copy, nonatomic) NSArray *spanMatchedEntities;
@property (copy, nonatomic) NSArray *utteranceContexts;
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
- (void)addRetrievedTools:(id)a0;
- (void)addSpanMatchedEntities:(id)a0;
- (void)addUtteranceContext:(id)a0;
- (void)clearRetrievedTools;
- (void)clearSpanMatchedEntities;
- (void)clearUtteranceContext;
- (void)deleteRetrievedTools;
- (void)deleteSpanMatchedEntities;
- (void)deleteUtteranceContext;
- (id)retrievedToolsAtIndex:(unsigned long long)a0;
- (unsigned long long)retrievedToolsCount;
- (id)spanMatchedEntitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)spanMatchedEntitiesCount;
- (id)utteranceContextAtIndex:(unsigned long long)a0;
- (unsigned long long)utteranceContextCount;

@end
