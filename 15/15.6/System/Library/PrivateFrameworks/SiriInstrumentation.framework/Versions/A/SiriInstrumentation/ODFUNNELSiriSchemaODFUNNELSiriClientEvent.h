@class SISchemaInstrumentationMessage, ODFUNNELSiriSchemaODFUNNELClientEventMetadata, NSData, ODFUNNELSiriSchemaODFUNNELVoiceTriggerEnrollmentFunnel;

@interface ODFUNNELSiriSchemaODFUNNELSiriClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) ODFUNNELSiriSchemaODFUNNELClientEventMetadata *eventMetadata;
@property (nonatomic) char hasEventMetadata;
@property (retain, nonatomic) ODFUNNELSiriSchemaODFUNNELVoiceTriggerEnrollmentFunnel *voiceTriggerEnrollmentFunnelReported;
@property (nonatomic) char hasVoiceTriggerEnrollmentFunnelReported;
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
- (void)deleteVoiceTriggerEnrollmentFunnelReported;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
