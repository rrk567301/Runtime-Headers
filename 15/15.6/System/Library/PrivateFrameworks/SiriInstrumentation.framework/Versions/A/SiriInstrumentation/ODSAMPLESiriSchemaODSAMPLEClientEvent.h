@class SISchemaInstrumentationMessage, ODSAMPLESiriSchemaODSAMPLESpeakerIdModelDeviceSelected, ODSAMPLESiriSchemaODSAMPLESpeakerIdSampleToRequestMap, ODSAMPLESiriSchemaODSAMPLEClientEventMetadata, ODSAMPLESiriSchemaODSAMPLESpeakerIdModelSampleReported, ODSAMPLESiriSchemaODSAMPLESpeakerIdModelSampleManifestReported, NSData;

@interface ODSAMPLESiriSchemaODSAMPLEClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) ODSAMPLESiriSchemaODSAMPLEClientEventMetadata *eventMetadata;
@property (nonatomic) char hasEventMetadata;
@property (retain, nonatomic) ODSAMPLESiriSchemaODSAMPLESpeakerIdModelDeviceSelected *speakerIdModelDeviceSelected;
@property (nonatomic) char hasSpeakerIdModelDeviceSelected;
@property (retain, nonatomic) ODSAMPLESiriSchemaODSAMPLESpeakerIdModelSampleReported *speakerIdModelSampleReported;
@property (nonatomic) char hasSpeakerIdModelSampleReported;
@property (retain, nonatomic) ODSAMPLESiriSchemaODSAMPLESpeakerIdModelSampleManifestReported *speakerIdModelSampleManifestReported;
@property (nonatomic) char hasSpeakerIdModelSampleManifestReported;
@property (retain, nonatomic) ODSAMPLESiriSchemaODSAMPLESpeakerIdSampleToRequestMap *speakerIdSampleToRequestMap;
@property (nonatomic) char hasSpeakerIdSampleToRequestMap;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (int)getAnyEventType;
- (int)clockIsolationLevel;
- (void)deleteEventMetadata;
- (void)deleteSpeakerIdModelDeviceSelected;
- (void)deleteSpeakerIdModelSampleManifestReported;
- (void)deleteSpeakerIdModelSampleReported;
- (void)deleteSpeakerIdSampleToRequestMap;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
