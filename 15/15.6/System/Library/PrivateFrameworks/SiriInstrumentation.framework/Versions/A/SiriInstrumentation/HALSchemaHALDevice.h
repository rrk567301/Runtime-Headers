@class HALSchemaHALAlarmContext, NSString, HALSchemaHALTimerContext, NSData, HALSchemaHALMediaPlayerContext, HALSchemaHALVoiceTriggerContext;

@interface HALSchemaHALDevice : SISchemaInstrumentationMessage {
    struct { unsigned char deviceProximity : 1; unsigned char deviceFamily : 1; unsigned char siriInputLocale : 1; unsigned char powerState : 1; } _has;
}

@property (nonatomic) int deviceProximity;
@property (nonatomic) char hasDeviceProximity;
@property (nonatomic) int deviceFamily;
@property (nonatomic) char hasDeviceFamily;
@property (copy, nonatomic) NSString *systemBuild;
@property (nonatomic) char hasSystemBuild;
@property (nonatomic) int siriInputLocale;
@property (nonatomic) char hasSiriInputLocale;
@property (retain, nonatomic) HALSchemaHALMediaPlayerContext *mediaPlayerContext;
@property (nonatomic) char hasMediaPlayerContext;
@property (retain, nonatomic) HALSchemaHALAlarmContext *alarmContext;
@property (nonatomic) char hasAlarmContext;
@property (retain, nonatomic) HALSchemaHALTimerContext *timerContext;
@property (nonatomic) char hasTimerContext;
@property (retain, nonatomic) HALSchemaHALVoiceTriggerContext *voiceTriggerContext;
@property (nonatomic) char hasVoiceTriggerContext;
@property (nonatomic) int powerState;
@property (nonatomic) char hasPowerState;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteAlarmContext;
- (void)deleteDeviceFamily;
- (void)deleteDeviceProximity;
- (void)deleteMediaPlayerContext;
- (void)deletePowerState;
- (void)deleteSiriInputLocale;
- (void)deleteSystemBuild;
- (void)deleteTimerContext;
- (void)deleteVoiceTriggerContext;
- (id)suppressMessageUnderConditions;

@end
