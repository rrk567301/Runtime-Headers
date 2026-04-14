@class NSData, SISchemaInstrumentationMessage, SADSchemaSADImmediateDownloadTriggered, SADSchemaSADIntelligenceFeatureAvailabilityDetailedStatus, SADSchemaSADIntelligenceFeatureAvailabilityChangeStatus, SADSchemaSADUODAssetsPrepared, SADSchemaSADAvailableAssetDailyStatus, SADSchemaSADAssetBringUpState;

@interface SADSchemaSADClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) SADSchemaSADUODAssetsPrepared *uodAssetsPrepared;
@property (nonatomic) BOOL hasUodAssetsPrepared;
@property (retain, nonatomic) SADSchemaSADAvailableAssetDailyStatus *availableAssetDailyStatus;
@property (nonatomic) BOOL hasAvailableAssetDailyStatus;
@property (retain, nonatomic) SADSchemaSADImmediateDownloadTriggered *immediateDownloadTriggered;
@property (nonatomic) BOOL hasImmediateDownloadTriggered;
@property (retain, nonatomic) SADSchemaSADIntelligenceFeatureAvailabilityDetailedStatus *intelligenceFeatureAvailabilityDetailedStatus;
@property (nonatomic) BOOL hasIntelligenceFeatureAvailabilityDetailedStatus;
@property (retain, nonatomic) SADSchemaSADIntelligenceFeatureAvailabilityChangeStatus *intelligenceFeatureAvailabilityChangeStatus;
@property (nonatomic) BOOL hasIntelligenceFeatureAvailabilityChangeStatus;
@property (retain, nonatomic) SADSchemaSADAssetBringUpState *assetBringUpState;
@property (nonatomic) BOOL hasAssetBringUpState;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;

- (id)suppressMessageUnderConditions;
- (int)getAnyEventType;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)qualifiedMessageName;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAvailableAssetDailyStatus;
- (void)deleteAssetBringUpState;
- (void)deleteImmediateDownloadTriggered;
- (void)deleteIntelligenceFeatureAvailabilityChangeStatus;
- (void)deleteIntelligenceFeatureAvailabilityDetailedStatus;
- (void)deleteUodAssetsPrepared;
- (unsigned long long)whichInnerEventType;

@end
