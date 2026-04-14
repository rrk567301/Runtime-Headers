@class NSArray, NSData;

@interface SADSchemaSADAvailableAssetDailyStatus : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *namespaceStatus;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addNamespaceStatus:(id)a0;
- (void)clearNamespaceStatus;
- (void)deleteNamespaceStatus;
- (id)namespaceStatusAtIndex:(unsigned long long)a0;
- (unsigned long long)namespaceStatusCount;
- (id)suppressMessageUnderConditions;

@end
