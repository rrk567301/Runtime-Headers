@class FLOWSchemaFLOWSmsContext, FLOWSchemaFLOWPegasusContext, NSData, FLOWSchemaFLOWHomeCommunicationContext, FLOWSchemaFLOWHomeAutomationContext, FLOWSchemaFLOWVoiceShortcutContext, FLOWSchemaFLOWIdentityContext, FLOWSchemaFLOWPhoneCallContext, FLOWSchemaFLOWMediaPlayerContext, FLOWSchemaFLOWInformationPluginContext, FLOWSchemaFLOWBriefingContext;

@interface FLOWSchemaFLOWDomainContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) FLOWSchemaFLOWVoiceShortcutContext *voiceShortcutContext;
@property (nonatomic) BOOL hasVoiceShortcutContext;
@property (retain, nonatomic) FLOWSchemaFLOWHomeAutomationContext *homeAutomationContext;
@property (nonatomic) BOOL hasHomeAutomationContext;
@property (retain, nonatomic) FLOWSchemaFLOWPhoneCallContext *phoneCallContext;
@property (nonatomic) BOOL hasPhoneCallContext;
@property (retain, nonatomic) FLOWSchemaFLOWSmsContext *smsContext;
@property (nonatomic) BOOL hasSmsContext;
@property (retain, nonatomic) FLOWSchemaFLOWMediaPlayerContext *mediaPlayerContext;
@property (nonatomic) BOOL hasMediaPlayerContext;
@property (retain, nonatomic) FLOWSchemaFLOWIdentityContext *identityContext;
@property (nonatomic) BOOL hasIdentityContext;
@property (retain, nonatomic) FLOWSchemaFLOWBriefingContext *briefingContext;
@property (nonatomic) BOOL hasBriefingContext;
@property (retain, nonatomic) FLOWSchemaFLOWPegasusContext *pegasusContext;
@property (nonatomic) BOOL hasPegasusContext;
@property (retain, nonatomic) FLOWSchemaFLOWInformationPluginContext *informationPluginContext;
@property (nonatomic) BOOL hasInformationPluginContext;
@property (retain, nonatomic) FLOWSchemaFLOWHomeCommunicationContext *homeCommunicationContext;
@property (nonatomic) BOOL hasHomeCommunicationContext;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichDomaincontext;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteVoiceShortcutContext;
- (void)deleteHomeAutomationContext;
- (void)deletePhoneCallContext;
- (void)deleteSmsContext;
- (void)deleteMediaPlayerContext;
- (void)deleteIdentityContext;
- (void)deleteBriefingContext;
- (void)deletePegasusContext;
- (void)deleteInformationPluginContext;
- (void)deleteHomeCommunicationContext;

@end
