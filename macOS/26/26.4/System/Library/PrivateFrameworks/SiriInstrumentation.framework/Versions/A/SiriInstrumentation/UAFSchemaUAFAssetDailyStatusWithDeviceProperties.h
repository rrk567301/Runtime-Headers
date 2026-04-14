@class NSData, UAFSchemaUAFDeviceMetadata, SADSchemaSADAvailableAssetDailyStatus;

@interface UAFSchemaUAFAssetDailyStatusWithDeviceProperties : SISchemaInstrumentationMessage

@property (retain, nonatomic) UAFSchemaUAFDeviceMetadata *deviceMetadata;
@property (nonatomic) BOOL hasDeviceMetadata;
@property (retain, nonatomic) SADSchemaSADAvailableAssetDailyStatus *availableAssetDailyStatus;
@property (nonatomic) BOOL hasAvailableAssetDailyStatus;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent;

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
- (void)deleteAvailableAssetDailyStatus;
- (void)deleteDeviceMetadata;

@end
