@class NSString, NSArray;
@protocol NSSpeechSynthesizerDelegate;

@interface NSSpeechSynthesizer : NSObject {
    id _privateNSSpeechSynthesizerVars;
}

@property (class, readonly, getter=isAnyApplicationSpeaking) BOOL anyApplicationSpeaking;
@property (class, readonly, copy) NSString *defaultVoice;
@property (class, readonly, copy) NSArray *availableVoices;

@property (readonly, getter=isSpeaking) BOOL speaking;
@property (weak) id<NSSpeechSynthesizerDelegate> delegate;
@property float rate;
@property float volume;
@property BOOL usesFeedbackWindow;

+ (id)attributesForVoice:(id)a0;

- (void)dealloc;
- (id)init;
- (float)_volume;
- (void)_handleDefaultVoiceChange;
- (void)stopSpeaking;
- (id)initWithVoice:(id)a0;
- (BOOL)startSpeakingString:(id)a0;
- (BOOL)startSpeakingString:(id)a0 toURL:(id)a1;
- (void)stopSpeakingAtBoundary:(unsigned long long)a0;
- (void)pauseSpeakingAtBoundary:(unsigned long long)a0;
- (void)continueSpeaking;
- (id)voice;
- (BOOL)setVoice:(id)a0;
- (void)addSpeechDictionary:(id)a0;
- (id)phonemesFromText:(id)a0;
- (id)objectForProperty:(id)a0 error:(id *)a1;
- (BOOL)setObject:(id)a0 forProperty:(id)a1 error:(id *)a2;
- (BOOL)_feedbackWindowIsVisible;
- (void)_handleSpeechDoneCallback;
- (void)_handleWordCallbackWithParams:(id)a0;
- (void)_handlePhonemeCallbackWithOpcode:(short)a0;
- (void)_handleErrorCallbackWithParams:(id)a0;
- (void)_handleSyncCallbackWithMessage:(unsigned int)a0;
- (BOOL)_beginSpeakingString:(id)a0 optionallyToURL:(id)a1;
- (void)_setupCallbacks;
- (float)_normalSpeakingRate;
- (void)_setPitchBase:(float)a0;
- (float)_pitchBase;
- (void)_setRate:(float)a0;
- (float)_rate;
- (void)_setVolume:(float)a0;
- (void)_stopSpeakingAtBoundary:(unsigned long long)a0;
- (void)_pauseSpeakingAtBoundary:(unsigned long long)a0;
- (void)_continueSpeaking;
- (id)_objectForProperty:(unsigned int)a0 usingDataSize:(int)a1 withRequestedObjectClass:(Class)a2;
- (BOOL)_setObject:(id)a0 forProperty:(unsigned int)a1 usingDataSize:(int)a2;

@end
