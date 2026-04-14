@class SISchemaInstrumentationMessage, SADSchemaSADUODAssetsPrepared, SADSchemaSADImmediateDownloadTriggered, NSData, SADSchemaSADAvailableAssetDailyStatus;

@interface SADSchemaSADClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) SADSchemaSADUODAssetsPrepared *uodAssetsPrepared;
@property (nonatomic) BOOL hasUodAssetsPrepared;
@property (retain, nonatomic) SADSchemaSADAvailableAssetDailyStatus *availableAssetDailyStatus;
@property (nonatomic) BOOL hasAvailableAssetDailyStatus;
@property (retain, nonatomic) SADSchemaSADImmediateDownloadTriggered *immediateDownloadTriggered;
@property (nonatomic) BOOL hasImmediateDownloadTriggered;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (int)getAnyEventType;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteUodAssetsPrepared;
- (void)deleteAvailableAssetDailyStatus;
- (void)deleteImmediateDownloadTriggered;

@end
