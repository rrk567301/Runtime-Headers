@class NSArray, NSData;

@interface SADSchemaSADAvailableAssetDailyStatus : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *namespaceStatus;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)clearNamespaceStatus;
- (void)addNamespaceStatus:(id)a0;
- (void)deleteNamespaceStatus;
- (unsigned long long)namespaceStatusCount;
- (id)namespaceStatusAtIndex:(unsigned long long)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
