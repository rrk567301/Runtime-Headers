@class NSArray, SISchemaAnnounceEnabledStatus, NSData, SISchemaAdaptiveVolumeUserPreferences;

@interface SISchemaEnabledStatus : SISchemaInstrumentationMessage {
    struct { unsigned char assistantEnabled : 1; unsigned char dictationEnabled : 1; unsigned char hardwareButtonEnabled : 1; unsigned char heySiriEnabled : 1; unsigned char assistantOnLockscreen : 1; unsigned char raiseToSpeakEnabled : 1; unsigned char spokenNotificationsEnabled : 1; unsigned char hasHomekitHome : 1; unsigned char shortcutsAvailable : 1; unsigned char dataSharingOptInStatus : 1; unsigned char typeToSiriEnabled : 1; unsigned char isPreciseLocationEnabled : 1; unsigned char voiceFeedback : 1; unsigned char isAdaptiveVolumeEnabled : 1; unsigned char isRemoteDarwinHeySiriEnabled : 1; } _has;
}

@property (nonatomic) BOOL assistantEnabled;
@property (nonatomic) BOOL hasAssistantEnabled;
@property (nonatomic) BOOL dictationEnabled;
@property (nonatomic) BOOL hasDictationEnabled;
@property (nonatomic) BOOL hardwareButtonEnabled;
@property (nonatomic) BOOL hasHardwareButtonEnabled;
@property (nonatomic) BOOL heySiriEnabled;
@property (nonatomic) BOOL hasHeySiriEnabled;
@property (nonatomic) BOOL assistantOnLockscreen;
@property (nonatomic) BOOL hasAssistantOnLockscreen;
@property (nonatomic) BOOL raiseToSpeakEnabled;
@property (nonatomic) BOOL hasRaiseToSpeakEnabled;
@property (nonatomic) BOOL spokenNotificationsEnabled;
@property (nonatomic) BOOL hasSpokenNotificationsEnabled;
@property (nonatomic) BOOL hasHomekitHome;
@property (nonatomic) BOOL hasHasHomekitHome;
@property (nonatomic) int shortcutsAvailable;
@property (nonatomic) BOOL hasShortcutsAvailable;
@property (nonatomic) int dataSharingOptInStatus;
@property (nonatomic) BOOL hasDataSharingOptInStatus;
@property (nonatomic) BOOL typeToSiriEnabled;
@property (nonatomic) BOOL hasTypeToSiriEnabled;
@property (nonatomic) BOOL isPreciseLocationEnabled;
@property (nonatomic) BOOL hasIsPreciseLocationEnabled;
@property (nonatomic) int voiceFeedback;
@property (nonatomic) BOOL hasVoiceFeedback;
@property (retain, nonatomic) SISchemaAnnounceEnabledStatus *announceEnabledStatus;
@property (nonatomic) BOOL hasAnnounceEnabledStatus;
@property (nonatomic) BOOL isAdaptiveVolumeEnabled;
@property (nonatomic) BOOL hasIsAdaptiveVolumeEnabled;
@property (retain, nonatomic) SISchemaAdaptiveVolumeUserPreferences *adaptiveVolumeUserPreferences;
@property (nonatomic) BOOL hasAdaptiveVolumeUserPreferences;
@property (nonatomic) BOOL isRemoteDarwinHeySiriEnabled;
@property (nonatomic) BOOL hasIsRemoteDarwinHeySiriEnabled;
@property (copy, nonatomic) NSArray *gradingOptInStateChanges;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)clearGradingOptInStateChanges;
- (void)addGradingOptInStateChanges:(id)a0;
- (void)deleteAssistantEnabled;
- (void)deleteDictationEnabled;
- (void)deleteHardwareButtonEnabled;
- (void)deleteHeySiriEnabled;
- (void)deleteAssistantOnLockscreen;
- (void)deleteRaiseToSpeakEnabled;
- (void)deleteSpokenNotificationsEnabled;
- (void)deleteHasHomekitHome;
- (void)deleteShortcutsAvailable;
- (void)deleteDataSharingOptInStatus;
- (void)deleteTypeToSiriEnabled;
- (void)deleteIsPreciseLocationEnabled;
- (void)deleteVoiceFeedback;
- (void)deleteAnnounceEnabledStatus;
- (void)deleteIsAdaptiveVolumeEnabled;
- (void)deleteAdaptiveVolumeUserPreferences;
- (void)deleteIsRemoteDarwinHeySiriEnabled;
- (void)deleteGradingOptInStateChanges;
- (unsigned long long)gradingOptInStateChangesCount;
- (id)gradingOptInStateChangesAtIndex:(unsigned long long)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
