@class NSArray, NSData, SISchemaUUID;

@interface NLXSchemaCDMContextUpdateEnded : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *contextId;
@property (nonatomic) BOOL hasContextId;
@property (copy, nonatomic) NSArray *reformedTurnInputBundles;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteContextId;
- (void)clearReformedTurnInputBundles;
- (void)deleteReformedTurnInputBundles;
- (void)addReformedTurnInputBundles:(id)a0;
- (unsigned long long)reformedTurnInputBundlesCount;
- (id)reformedTurnInputBundlesAtIndex:(unsigned long long)a0;

@end
