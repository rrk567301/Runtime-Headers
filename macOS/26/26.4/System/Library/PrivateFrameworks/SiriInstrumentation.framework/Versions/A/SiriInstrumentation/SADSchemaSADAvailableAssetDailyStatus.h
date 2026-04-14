@class NSArray, NSData;

@interface SADSchemaSADAvailableAssetDailyStatus : SISchemaInstrumentationMessage {
    struct { unsigned char statusReason : 1; } _has;
}

@property (copy, nonatomic) NSArray *namespaceStatus;
@property (copy, nonatomic) NSArray *assetSetStatus;
@property (nonatomic) int statusReason;
@property (nonatomic) BOOL hasStatusReason;
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
- (void)addAssetSetStatus:(id)a0;
- (void)addNamespaceStatus:(id)a0;
- (id)assetSetStatusAtIndex:(unsigned long long)a0;
- (unsigned long long)assetSetStatusCount;
- (void)clearAssetSetStatus;
- (void)clearNamespaceStatus;
- (void)deleteAssetSetStatus;
- (void)deleteNamespaceStatus;
- (void)deleteStatusReason;
- (id)namespaceStatusAtIndex:(unsigned long long)a0;
- (unsigned long long)namespaceStatusCount;

@end
