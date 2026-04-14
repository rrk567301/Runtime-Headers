@class NSArray, NSString;

@interface ZMSpeechSynthesizer : NSObject {
    struct SpeechChannelRecord { long long x0[1]; } *_speechChannel;
    NSString *_currentVoice;
    unsigned int _currentVoiceScriptCode;
    BOOL _speechFinishedSuccessfully;
    BOOL _usingDefaultVoice;
}

@property (readonly, weak, nonatomic) NSArray *supportedLiteralCharacterRanges;
@property (readonly, weak, nonatomic) NSArray *supportedCharacterRanges;

+ (BOOL)_makeVoiceForIdentifier:(struct __CFString { } *)a0 voiceSpec:(struct VoiceSpec { unsigned int x0; unsigned int x1; } *)a1;
+ (BOOL)_findVoiceByIdentifier:(id)a0 returningCreator:(unsigned int *)a1 returningID:(unsigned int *)a2;
+ (id)_copyIdentifierStringForVoiceSpec:(struct VoiceSpec { unsigned int x0; unsigned int x1; } *)a0;
+ (id)_voiceIdentifierForVoiceCreator:(unsigned int)a0 voiceID:(unsigned int)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isSpeaking;
- (void)_handleDefaultVoiceChange;
- (void)stopSpeaking;
- (void)startSpeakingString:(id)a0;
- (BOOL)_setupCallbacks;
- (unsigned int)_currentVoiceScriptCode;
- (void)_stopSpeakingOutputThread;
- (void)resetVoice;
- (BOOL)_setSpeechChannelWithVoiceCreator:(unsigned int)a0 voiceID:(unsigned int)a1;
- (BOOL)_beginSpeakingString:(id)a0;
- (void)_handleSpeechDone;

@end
