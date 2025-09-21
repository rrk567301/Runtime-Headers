@class NSString, NSData;

@interface POMMESSchemaPOMMESDeviceState : SISchemaInstrumentationMessage {
    struct { unsigned char isCarDoNotDisturbModeEnabled : 1; unsigned char isCarPlayEnabled : 1; unsigned char isEyesFreeEnabled : 1; unsigned char isLockedWithPasscode : 1; unsigned char isMultiUserDevice : 1; unsigned char isTextToSpeechEnabled : 1; unsigned char isVoiceTriggerEnabled : 1; } _has;
}

@property (copy, nonatomic) NSString *companionName;
@property (nonatomic) char hasCompanionName;
@property (nonatomic) char isCarDoNotDisturbModeEnabled;
@property (nonatomic) char hasIsCarDoNotDisturbModeEnabled;
@property (nonatomic) char isCarPlayEnabled;
@property (nonatomic) char hasIsCarPlayEnabled;
@property (nonatomic) char isEyesFreeEnabled;
@property (nonatomic) char hasIsEyesFreeEnabled;
@property (nonatomic) char isLockedWithPasscode;
@property (nonatomic) char hasIsLockedWithPasscode;
@property (nonatomic) char isMultiUserDevice;
@property (nonatomic) char hasIsMultiUserDevice;
@property (nonatomic) char isTextToSpeechEnabled;
@property (nonatomic) char hasIsTextToSpeechEnabled;
@property (nonatomic) char isVoiceTriggerEnabled;
@property (nonatomic) char hasIsVoiceTriggerEnabled;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCompanionName;
- (void)deleteIsCarDoNotDisturbModeEnabled;
- (void)deleteIsCarPlayEnabled;
- (void)deleteIsEyesFreeEnabled;
- (void)deleteIsLockedWithPasscode;
- (void)deleteIsMultiUserDevice;
- (void)deleteIsTextToSpeechEnabled;
- (void)deleteIsVoiceTriggerEnabled;
- (id)suppressMessageUnderConditions;

@end
