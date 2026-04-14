@class SISchemaInstrumentationMessage, ODSAMPLESiriSchemaODSAMPLESpeakerIdModelDeviceSelected, ODSAMPLESiriSchemaODSAMPLESpeakerIdSampleToRequestMap, ODSAMPLESiriSchemaODSAMPLEClientEventMetadata, ODSAMPLESiriSchemaODSAMPLESpeakerIdModelSampleReported, ODSAMPLESiriSchemaODSAMPLESpeakerIdModelSampleManifestReported, NSData;

@interface ODSAMPLESiriSchemaODSAMPLEClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) ODSAMPLESiriSchemaODSAMPLEClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) ODSAMPLESiriSchemaODSAMPLESpeakerIdModelDeviceSelected *speakerIdModelDeviceSelected;
@property (nonatomic) BOOL hasSpeakerIdModelDeviceSelected;
@property (retain, nonatomic) ODSAMPLESiriSchemaODSAMPLESpeakerIdModelSampleReported *speakerIdModelSampleReported;
@property (nonatomic) BOOL hasSpeakerIdModelSampleReported;
@property (retain, nonatomic) ODSAMPLESiriSchemaODSAMPLESpeakerIdModelSampleManifestReported *speakerIdModelSampleManifestReported;
@property (nonatomic) BOOL hasSpeakerIdModelSampleManifestReported;
@property (retain, nonatomic) ODSAMPLESiriSchemaODSAMPLESpeakerIdSampleToRequestMap *speakerIdSampleToRequestMap;
@property (nonatomic) BOOL hasSpeakerIdSampleToRequestMap;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (int)getAnyEventType;
- (id)dictionaryRepresentation;
- (id)qualifiedMessageName;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)clockIsolationLevel;
- (void)deleteEventMetadata;
- (void)deleteSpeakerIdModelDeviceSelected;
- (void)deleteSpeakerIdModelSampleManifestReported;
- (void)deleteSpeakerIdModelSampleReported;
- (void)deleteSpeakerIdSampleToRequestMap;
- (unsigned long long)whichInnerEventType;

@end
