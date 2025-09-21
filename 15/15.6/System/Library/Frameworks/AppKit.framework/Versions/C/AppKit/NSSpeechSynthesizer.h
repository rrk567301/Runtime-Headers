@class NSString, NSArray;
@protocol NSSpeechSynthesizerDelegate;

@interface NSSpeechSynthesizer : NSObject {
    id _privateNSSpeechSynthesizerVars;
}

@property (class, readonly, getter=isAnyApplicationSpeaking) char anyApplicationSpeaking;
@property (class, readonly, copy) NSString *defaultVoice;
@property (class, readonly, copy) NSArray *availableVoices;

@property (readonly, getter=isSpeaking) char speaking;
@property (weak) id<NSSpeechSynthesizerDelegate> delegate;
@property float rate;
@property float volume;
@property char usesFeedbackWindow;

+ (id)attributesForVoice:(id)a0;

- (void)dealloc;
- (id)init;
- (void)_handleSyncCallbackWithMessage:(unsigned int)a0;
- (void)_handleErrorCallbackWithParams:(id)a0;
- (void)_setupCallbacks;
- (float)_volume;
- (char)_beginSpeakingString:(id)a0 optionallyToURL:(id)a1;
- (void)_continueSpeaking;
- (char)_feedbackWindowIsVisible;
- (void)_handleDefaultVoiceChange;
- (void)_handlePhonemeCallbackWithOpcode:(short)a0;
- (void)_handleSpeechDoneCallback;
- (void)_handleWordCallbackWithParams:(id)a0;
- (float)_normalSpeakingRate;
- (id)_objectForProperty:(unsigned int)a0 usingDataSize:(int)a1 withRequestedObjectClass:(Class)a2;
- (void)_pauseSpeakingAtBoundary:(unsigned long long)a0;
- (float)_pitchBase;
- (float)_rate;
- (char)_setObject:(id)a0 forProperty:(unsigned int)a1 usingDataSize:(int)a2;
- (void)_setPitchBase:(float)a0;
- (void)_setRate:(float)a0;
- (void)_setVolume:(float)a0;
- (void)_stopSpeakingAtBoundary:(unsigned long long)a0;
- (void)addSpeechDictionary:(id)a0;
- (void)continueSpeaking;
- (id)initWithVoice:(id)a0;
- (id)objectForProperty:(id)a0 error:(id *)a1;
- (void)pauseSpeakingAtBoundary:(unsigned long long)a0;
- (id)phonemesFromText:(id)a0;
- (char)setObject:(id)a0 forProperty:(id)a1 error:(id *)a2;
- (char)setVoice:(id)a0;
- (char)startSpeakingString:(id)a0;
- (char)startSpeakingString:(id)a0 toURL:(id)a1;
- (void)stopSpeaking;
- (void)stopSpeakingAtBoundary:(unsigned long long)a0;
- (id)voice;

@end
