@class SISchemaInstrumentationMessage, ODFUNNELSiriSchemaODFUNNELClientEventMetadata, NSData, ODFUNNELSiriSchemaODFUNNELVoiceTriggerEnrollmentFunnel;

@interface ODFUNNELSiriSchemaODFUNNELSiriClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) ODFUNNELSiriSchemaODFUNNELClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) ODFUNNELSiriSchemaODFUNNELVoiceTriggerEnrollmentFunnel *voiceTriggerEnrollmentFunnelReported;
@property (nonatomic) BOOL hasVoiceTriggerEnrollmentFunnelReported;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;

- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (id)qualifiedMessageName;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (int)getAnyEventType;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (int)clockIsolationLevel;
- (void)deleteEventMetadata;
- (void)deleteVoiceTriggerEnrollmentFunnelReported;
- (unsigned long long)whichInnerEventType;

@end
