@class SISchemaInstrumentationMessage, SADSchemaSADUODAssetsPrepared, SADSchemaSADIntelligenceFeatureAvailabilityChangeStatus, SADSchemaSADImmediateDownloadTriggered, SADSchemaSADIntelligenceFeatureAvailabilityDetailedStatus, SADSchemaSADAvailableAssetDailyStatus, NSData;

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
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;

- (id)qualifiedMessageName;
- (int)getAnyEventType;
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
- (void)deleteAvailableAssetDailyStatus;
- (void)deleteImmediateDownloadTriggered;
- (void)deleteIntelligenceFeatureAvailabilityChangeStatus;
- (void)deleteIntelligenceFeatureAvailabilityDetailedStatus;
- (void)deleteUodAssetsPrepared;
- (unsigned long long)whichInnerEventType;

@end
