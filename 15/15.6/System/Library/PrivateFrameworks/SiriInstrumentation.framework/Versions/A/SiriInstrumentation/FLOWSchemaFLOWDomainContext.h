@class FLOWSchemaFLOWVoiceShortcutContext, FLOWSchemaFLOWPhoneCallContext, FLOWSchemaFLOWMediaPlayerContext, FLOWSchemaFLOWHomeAutomationContext, FLOWSchemaFLOWHomeCommunicationContext, FLOWSchemaFLOWBriefingContext, FLOWSchemaFLOWPhotosContext, FLOWSchemaFLOWNotificationContext, FLOWSchemaFLOWSafariContext, FLOWSchemaFLOWSmsContext, FLOWSchemaFLOWIdentityContext, FLOWSchemaFLOWInformationPluginContext, NSData, FLOWSchemaFLOWPegasusContext;

@interface FLOWSchemaFLOWDomainContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) FLOWSchemaFLOWVoiceShortcutContext *voiceShortcutContext;
@property (nonatomic) char hasVoiceShortcutContext;
@property (retain, nonatomic) FLOWSchemaFLOWHomeAutomationContext *homeAutomationContext;
@property (nonatomic) char hasHomeAutomationContext;
@property (retain, nonatomic) FLOWSchemaFLOWPhoneCallContext *phoneCallContext;
@property (nonatomic) char hasPhoneCallContext;
@property (retain, nonatomic) FLOWSchemaFLOWSmsContext *smsContext;
@property (nonatomic) char hasSmsContext;
@property (retain, nonatomic) FLOWSchemaFLOWMediaPlayerContext *mediaPlayerContext;
@property (nonatomic) char hasMediaPlayerContext;
@property (retain, nonatomic) FLOWSchemaFLOWIdentityContext *identityContext;
@property (nonatomic) char hasIdentityContext;
@property (retain, nonatomic) FLOWSchemaFLOWBriefingContext *briefingContext;
@property (nonatomic) char hasBriefingContext;
@property (retain, nonatomic) FLOWSchemaFLOWPegasusContext *pegasusContext;
@property (nonatomic) char hasPegasusContext;
@property (retain, nonatomic) FLOWSchemaFLOWInformationPluginContext *informationPluginContext;
@property (nonatomic) char hasInformationPluginContext;
@property (retain, nonatomic) FLOWSchemaFLOWHomeCommunicationContext *homeCommunicationContext;
@property (nonatomic) char hasHomeCommunicationContext;
@property (retain, nonatomic) FLOWSchemaFLOWNotificationContext *notificationContext;
@property (nonatomic) char hasNotificationContext;
@property (retain, nonatomic) FLOWSchemaFLOWPhotosContext *photosContext;
@property (nonatomic) char hasPhotosContext;
@property (retain, nonatomic) FLOWSchemaFLOWSafariContext *safariContext;
@property (nonatomic) char hasSafariContext;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichDomaincontext;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteBriefingContext;
- (void)deleteHomeAutomationContext;
- (void)deleteHomeCommunicationContext;
- (void)deleteIdentityContext;
- (void)deleteInformationPluginContext;
- (void)deleteMediaPlayerContext;
- (void)deleteNotificationContext;
- (void)deletePegasusContext;
- (void)deletePhoneCallContext;
- (void)deletePhotosContext;
- (void)deleteSafariContext;
- (void)deleteSmsContext;
- (void)deleteVoiceShortcutContext;
- (id)suppressMessageUnderConditions;

@end
