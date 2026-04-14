@class NSData, TTSSchemaTTSClientSpeechContext, SISchemaInstrumentationMessage, TTSSchemaTTSVoiceFallbackOccurred, TTSSchemaTTSClientEventMetadata, TTSSchemaTTSClientSynthesisContext, TTSSchemaTTSRequestReceivedTier1, TTSSchemaTTSRequestReceived;

@interface TTSSchemaTTSClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) TTSSchemaTTSClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) TTSSchemaTTSClientSpeechContext *speechContext;
@property (nonatomic) BOOL hasSpeechContext;
@property (retain, nonatomic) TTSSchemaTTSRequestReceived *requestReceived;
@property (nonatomic) BOOL hasRequestReceived;
@property (retain, nonatomic) TTSSchemaTTSRequestReceivedTier1 *requestReceivedTier1;
@property (nonatomic) BOOL hasRequestReceivedTier1;
@property (retain, nonatomic) TTSSchemaTTSVoiceFallbackOccurred *voiceFallbackOccurred;
@property (nonatomic) BOOL hasVoiceFallbackOccurred;
@property (retain, nonatomic) TTSSchemaTTSClientSynthesisContext *synthesisContext;
@property (nonatomic) BOOL hasSynthesisContext;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

- (int)componentName;
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
- (void)deleteEventMetadata;
- (void)deleteRequestReceived;
- (void)deleteRequestReceivedTier1;
- (void)deleteSpeechContext;
- (void)deleteSynthesisContext;
- (void)deleteVoiceFallbackOccurred;
- (id)getComponentId;
- (unsigned long long)whichInnerEventType;

@end
