@class NSData, UAFSchemaUAFDeviceMetadata, SADSchemaSADAvailableAssetDailyStatus;

@interface UAFSchemaUAFAssetDailyStatusWithDeviceProperties : SISchemaInstrumentationMessage

@property (retain, nonatomic) UAFSchemaUAFDeviceMetadata *deviceMetadata;
@property (nonatomic) BOOL hasDeviceMetadata;
@property (retain, nonatomic) SADSchemaSADAvailableAssetDailyStatus *availableAssetDailyStatus;
@property (nonatomic) BOOL hasAvailableAssetDailyStatus;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent;

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
- (void)deleteAvailableAssetDailyStatus;
- (void)deleteDeviceMetadata;

@end
