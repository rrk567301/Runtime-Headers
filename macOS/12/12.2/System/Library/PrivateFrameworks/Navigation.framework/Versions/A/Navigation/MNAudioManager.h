@class MNUserOptions, NSString, MNObserverHashTable, MNAudioHardwareEngine;

@interface MNAudioManager : NSObject <MNAudioHardwareEngineObserver, MNAudioProvider> {
    MNObserverHashTable *_observers;
    MNUserOptions *_options;
    MNAudioHardwareEngine *_audioEngine;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) int transportType;
@property (readonly, nonatomic) unsigned long long voiceGuidanceLevel;

- (void)dealloc;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (BOOL)isSpeaking;
- (void)stopSpeaking;
- (BOOL)voiceGuidanceEnabled;
- (void)speak:(id)a0 withVoiceGuidanceLevel:(unsigned long long)a1 andCondition:(unsigned long long)a2 usingShortPrompt:(unsigned long long)a3 thenCallCompletion:(id /* block */)a4;
- (BOOL)vibrateForShortPrompt:(unsigned long long)a0;
- (double)durationOf:(id)a0;
- (id)initWithTransportType:(int)a0 andVoiceGuidanceLevel:(unsigned long long)a1 andVoiceLanguage:(id)a2;
- (void)didChangeUserOptionsFrom:(id)a0 to:(id)a1;
- (void)clearAllAnnouncements;
- (void)changeTransportType:(int)a0;
- (void)changeVoiceGuidanceLevel:(unsigned long long)a0 forTransportType:(int)a1;
- (void)audioHardwareEngine:(id)a0 didActivateAudioSession:(BOOL)a1;
- (void)audioHardwareEngine:(id)a0 didStartSpeakingPrompt:(id)a1;

@end
