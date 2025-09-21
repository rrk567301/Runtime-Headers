@class NSData;

@interface ODDSiriSchemaODDiOSAccessibilityProperties : SISchemaInstrumentationMessage {
    struct { unsigned char isAlwaysListenForHeySiriEnabled : 1; unsigned char siriPauseTimeState : 1; unsigned char isShowAppsBehindSiriEnabled : 1; unsigned char siriSpeechRate : 1; unsigned char isVoiceOverEnabled : 1; unsigned char isTypeToSiriEnabled : 1; unsigned char voiceFeedback : 1; unsigned char isAtypicalSpeechEnabled : 1; } _has;
}

@property (nonatomic) char isAlwaysListenForHeySiriEnabled;
@property (nonatomic) char hasIsAlwaysListenForHeySiriEnabled;
@property (nonatomic) int siriPauseTimeState;
@property (nonatomic) char hasSiriPauseTimeState;
@property (nonatomic) char isShowAppsBehindSiriEnabled;
@property (nonatomic) char hasIsShowAppsBehindSiriEnabled;
@property (nonatomic) double siriSpeechRate;
@property (nonatomic) char hasSiriSpeechRate;
@property (nonatomic) char isVoiceOverEnabled;
@property (nonatomic) char hasIsVoiceOverEnabled;
@property (nonatomic) char isTypeToSiriEnabled;
@property (nonatomic) char hasIsTypeToSiriEnabled;
@property (nonatomic) int voiceFeedback;
@property (nonatomic) char hasVoiceFeedback;
@property (nonatomic) char isAtypicalSpeechEnabled;
@property (nonatomic) char hasIsAtypicalSpeechEnabled;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsAlwaysListenForHeySiriEnabled;
- (void)deleteIsAtypicalSpeechEnabled;
- (void)deleteIsShowAppsBehindSiriEnabled;
- (void)deleteIsTypeToSiriEnabled;
- (void)deleteIsVoiceOverEnabled;
- (void)deleteSiriPauseTimeState;
- (void)deleteSiriSpeechRate;
- (void)deleteVoiceFeedback;
- (id)suppressMessageUnderConditions;

@end
