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
- (int)clockIsolationLevel;
- (void)deleteEventMetadata;
- (void)deleteVoiceTriggerEnrollmentFunnelReported;
- (unsigned long long)whichInnerEventType;

@end
