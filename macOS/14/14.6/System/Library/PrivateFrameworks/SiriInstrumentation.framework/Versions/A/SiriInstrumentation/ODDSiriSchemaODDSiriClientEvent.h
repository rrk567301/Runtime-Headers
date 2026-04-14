@class ODDSiriSchemaODDmacOSDevicePropertiesReported, ODDSiriSchemaODDDeviceSegmentsReported, ODDSiriSchemaODDAssistantDeviceDigestsReported, ODDSiriSchemaODDAssistantExperimentDigestsReported, SISchemaInstrumentationMessage, ODDSiriSchemaODDvisionOSDevicePropertiesReported, ODDSiriSchemaODDDeviceCohortsReported, ODDSiriSchemaODDDictationDeviceDigestsReported, ODDSiriSchemaODDAssistantDiagnosticAndUsageOptInDigestsReported, ODDSiriSchemaODDiOSDevicePropertiesReported, ODDSiriSchemaODDSiriAccountInformation, ODDSiriSchemaODDtvOSDevicePropertiesReported, ODDSiriSchemaODDClientEventMetadata, NSData, ODDSiriSchemaODDwatchOSDevicePropertiesReported;

@interface ODDSiriSchemaODDSiriClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) ODDSiriSchemaODDClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) ODDSiriSchemaODDDeviceSegmentsReported *deviceSegmentsReported;
@property (nonatomic) BOOL hasDeviceSegmentsReported;
@property (retain, nonatomic) ODDSiriSchemaODDDeviceCohortsReported *deviceCohortsReported;
@property (nonatomic) BOOL hasDeviceCohortsReported;
@property (retain, nonatomic) ODDSiriSchemaODDAssistantDeviceDigestsReported *assistantDeviceDigestReported;
@property (nonatomic) BOOL hasAssistantDeviceDigestReported;
@property (retain, nonatomic) ODDSiriSchemaODDDictationDeviceDigestsReported *dictationDeviceDigestReported;
@property (nonatomic) BOOL hasDictationDeviceDigestReported;
@property (retain, nonatomic) ODDSiriSchemaODDSiriAccountInformation *siriAccountInformation;
@property (nonatomic) BOOL hasSiriAccountInformation;
@property (retain, nonatomic) ODDSiriSchemaODDAssistantExperimentDigestsReported *assistantExperimentDigestReported;
@property (nonatomic) BOOL hasAssistantExperimentDigestReported;
@property (retain, nonatomic) ODDSiriSchemaODDAssistantDiagnosticAndUsageOptInDigestsReported *assistantDiagnosticAndUsageOptInDigestReported;
@property (nonatomic) BOOL hasAssistantDiagnosticAndUsageOptInDigestReported;
@property (retain, nonatomic) ODDSiriSchemaODDiOSDevicePropertiesReported *iOSDevicePropertiesReported;
@property (nonatomic) BOOL hasIOSDevicePropertiesReported;
@property (retain, nonatomic) ODDSiriSchemaODDwatchOSDevicePropertiesReported *watchOSDevicePropertiesReported;
@property (nonatomic) BOOL hasWatchOSDevicePropertiesReported;
@property (retain, nonatomic) ODDSiriSchemaODDtvOSDevicePropertiesReported *tvOSDevicePropertiesReported;
@property (nonatomic) BOOL hasTvOSDevicePropertiesReported;
@property (retain, nonatomic) ODDSiriSchemaODDmacOSDevicePropertiesReported *macOSDevicePropertiesReported;
@property (nonatomic) BOOL hasMacOSDevicePropertiesReported;
@property (retain, nonatomic) ODDSiriSchemaODDvisionOSDevicePropertiesReported *visionOSDevicePropertiesReported;
@property (nonatomic) BOOL hasVisionOSDevicePropertiesReported;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (int)getAnyEventType;
- (int)clockIsolationLevel;
- (void)deleteAssistantDeviceDigestReported;
- (void)deleteAssistantDiagnosticAndUsageOptInDigestReported;
- (void)deleteAssistantExperimentDigestReported;
- (void)deleteDeviceCohortsReported;
- (void)deleteDeviceSegmentsReported;
- (void)deleteDictationDeviceDigestReported;
- (void)deleteEventMetadata;
- (void)deleteIOSDevicePropertiesReported;
- (void)deleteMacOSDevicePropertiesReported;
- (void)deleteSiriAccountInformation;
- (void)deleteTvOSDevicePropertiesReported;
- (void)deleteVisionOSDevicePropertiesReported;
- (void)deleteWatchOSDevicePropertiesReported;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
