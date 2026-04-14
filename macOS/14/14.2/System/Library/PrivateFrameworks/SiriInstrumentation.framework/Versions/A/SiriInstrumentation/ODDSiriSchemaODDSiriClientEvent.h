@class NSData, SISchemaInstrumentationMessage, ODDSiriSchemaODDAssistantDeviceDigestsReported, ODDSiriSchemaODDDeviceSegmentsReported, ODDSiriSchemaODDClientEventMetadata, ODDSiriSchemaODDDeviceCohortsReported, ODDSiriSchemaODDDictationDeviceDigestsReported, ODDSiriSchemaODDSiriAccountInformation;

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
- (int)getAnyEventType;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (int)clockIsolationLevel;
- (void)deleteAssistantDeviceDigestReported;
- (void)deleteDeviceCohortsReported;
- (void)deleteDeviceSegmentsReported;
- (void)deleteDictationDeviceDigestReported;
- (void)deleteEventMetadata;
- (void)deleteSiriAccountInformation;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
