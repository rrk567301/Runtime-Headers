@class FLOWSchemaFLOWEventMetadata, FLOWSchemaFLOWPegasusContextTier1, SISchemaInstrumentationMessage, FLOWSchemaFLOWEntityContextTier1, FLOWSchemaFLOWStep, FLOWSchemaFLOWMediaPlayerPlaybackContextTier1, FLOWSchemaFLOWMediaPlayerRadioStationContextTier1, NSData, FLOWSchemaFLOWSmsAttachmentMetadataTier1, FLOWSchemaFLOWAppleMusicVoicePreviewOfferNotShown;

@interface FLOWSchemaFLOWClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) FLOWSchemaFLOWEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) FLOWSchemaFLOWStep *flowStep;
@property (nonatomic) BOOL hasFlowStep;
@property (retain, nonatomic) FLOWSchemaFLOWEntityContextTier1 *flowEntityContextTier1;
@property (nonatomic) BOOL hasFlowEntityContextTier1;
@property (retain, nonatomic) FLOWSchemaFLOWSmsAttachmentMetadataTier1 *smsAttachmentMetadataTier1;
@property (nonatomic) BOOL hasSmsAttachmentMetadataTier1;
@property (retain, nonatomic) FLOWSchemaFLOWAppleMusicVoicePreviewOfferNotShown *appleMusicVoicePreviewOfferNotShown;
@property (nonatomic) BOOL hasAppleMusicVoicePreviewOfferNotShown;
@property (retain, nonatomic) FLOWSchemaFLOWPegasusContextTier1 *pegasusContextTier1;
@property (nonatomic) BOOL hasPegasusContextTier1;
@property (retain, nonatomic) FLOWSchemaFLOWMediaPlayerPlaybackContextTier1 *mediaPlayerPlaybackContextTier1;
@property (nonatomic) BOOL hasMediaPlayerPlaybackContextTier1;
@property (retain, nonatomic) FLOWSchemaFLOWMediaPlayerRadioStationContextTier1 *mediaPlayerRadioStationContextTier1;
@property (nonatomic) BOOL hasMediaPlayerRadioStationContextTier1;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (int)joinability;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (int)componentName;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (int)getAnyEventType;
- (id)qualifiedMessageName;
- (id)getComponentId;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteEventMetadata;
- (void)deleteFlowStep;
- (void)deleteFlowEntityContextTier1;
- (void)deleteSmsAttachmentMetadataTier1;
- (void)deleteAppleMusicVoicePreviewOfferNotShown;
- (void)deletePegasusContextTier1;
- (void)deleteMediaPlayerPlaybackContextTier1;
- (void)deleteMediaPlayerRadioStationContextTier1;

@end
