@class FLOWSchemaFLOWSmsAttachmentMetadataTier1, FLOWSchemaFLOWEventMetadata, FLOWSchemaFLOWPegasusContextTier1, FLOWSchemaFLOWEntityContextTier1, FLOWSchemaFLOWStep, FLOWSchemaFLOWAppleMusicVoicePreviewOfferNotShown, NSData;

@interface FLOWSchemaFLOWClientEvent : SISchemaTopLevelUnionType

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
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (int)getAnyEventType;
- (id)qualifiedMessageName;
- (void)deleteEventMetadata;
- (void)deleteFlowStep;
- (void)deleteFlowEntityContextTier1;
- (void)deleteSmsAttachmentMetadataTier1;
- (void)deleteAppleMusicVoicePreviewOfferNotShown;
- (void)deletePegasusContextTier1;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
