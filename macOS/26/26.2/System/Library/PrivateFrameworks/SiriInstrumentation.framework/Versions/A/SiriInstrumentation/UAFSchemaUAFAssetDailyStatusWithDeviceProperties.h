@class NSData, UAFSchemaUAFDeviceMetadata, SADSchemaSADAvailableAssetDailyStatus;

@interface UAFSchemaUAFAssetDailyStatusWithDeviceProperties : SISchemaInstrumentationMessage

@property (retain, nonatomic) UAFSchemaUAFDeviceMetadata *deviceMetadata;
@property (nonatomic) BOOL hasDeviceMetadata;
@property (retain, nonatomic) SADSchemaSADAvailableAssetDailyStatus *availableAssetDailyStatus;
@property (nonatomic) BOOL hasAvailableAssetDailyStatus;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent;

- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteAvailableAssetDailyStatus;
- (void)deleteDeviceMetadata;

@end
