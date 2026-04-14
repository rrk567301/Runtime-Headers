@class NSArray, NSData, SISchemaUUID;

@interface NLXSchemaCDMSetupMissingAssetsDetected : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *contextId;
@property (nonatomic) BOOL hasContextId;
@property (copy, nonatomic) NSArray *servicesMissingAssets;
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
- (void)addServicesMissingAsset:(int)a0;
- (void)clearServicesMissingAsset;
- (void)deleteServicesMissingAsset;
- (int)servicesMissingAssetAtIndex:(unsigned long long)a0;
- (unsigned long long)servicesMissingAssetCount;

@end
