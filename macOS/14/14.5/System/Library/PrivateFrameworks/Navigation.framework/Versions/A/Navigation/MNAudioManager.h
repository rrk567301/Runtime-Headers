@class MNUserOptions, NSString, MNObserverHashTable, MNAudioHardwareEngine;

@interface MNAudioManager : NSObject <MNAudioHardwareEngineObserver> {
    MNObserverHashTable *_observers;
    MNUserOptions *_options;
    MNAudioHardwareEngine *_audioEngine;
}

@property (readonly, nonatomic) int transportType;
@property (readonly, nonatomic) unsigned long long voiceGuidanceLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (BOOL)isSpeaking;
- (void)stopSpeaking;
- (void)forceDeactivate;
- (void)audioHardwareEngine:(id)a0 didActivateAudioSession:(BOOL)a1;
- (void)audioHardwareEngine:(id)a0 didStartSpeakingPrompt:(id)a1;
- (void)changeTransportType:(int)a0;
- (void)changeVoiceGuidanceLevel:(unsigned long long)a0 forTransportType:(int)a1;
- (void)clearAllAnnouncements;
- (void)didChangeUserOptionsFrom:(id)a0 to:(id)a1;
- (double)durationOf:(id)a0;
- (id)initWithTransportType:(int)a0 andVoiceGuidanceLevel:(unsigned long long)a1 andVoiceLanguage:(id)a2;
- (void)speak:(id)a0 withVoiceGuidanceLevel:(unsigned long long)a1 andCondition:(unsigned long long)a2 usingShortPrompt:(unsigned long long)a3 thenCallCompletion:(id /* block */)a4;
- (BOOL)vibrateForShortPrompt:(unsigned long long)a0;
- (BOOL)voiceGuidanceEnabled;

@end
