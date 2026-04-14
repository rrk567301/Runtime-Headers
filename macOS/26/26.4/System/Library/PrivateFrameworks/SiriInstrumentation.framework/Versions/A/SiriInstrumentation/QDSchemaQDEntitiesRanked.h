@class NSArray, NSData;

@interface QDSchemaQDEntitiesRanked : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *retrievedTools;
@property (copy, nonatomic) NSArray *spanMatchedEntities;
@property (copy, nonatomic) NSArray *utteranceContexts;
@property (readonly, nonatomic) NSData *jsonData;

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
