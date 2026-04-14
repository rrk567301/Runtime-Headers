@class NSArray, NSData, SISchemaUUID;

@interface NLXSchemaCDMContextUpdateEnded : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *contextId;
@property (nonatomic) BOOL hasContextId;
@property (copy, nonatomic) NSArray *reformedTurnInputBundles;
@property (readonly, nonatomic) NSData *jsonData;

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
- (void)deleteContextId;
- (void)addReformedTurnInputBundles:(id)a0;
- (void)clearReformedTurnInputBundles;
- (void)deleteReformedTurnInputBundles;
- (id)reformedTurnInputBundlesAtIndex:(unsigned long long)a0;
- (unsigned long long)reformedTurnInputBundlesCount;

@end
