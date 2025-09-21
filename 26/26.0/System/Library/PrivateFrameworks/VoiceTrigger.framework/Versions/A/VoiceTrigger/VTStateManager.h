@class VTCoreSpeechKeepAliveHandler;

@interface VTStateManager : NSObject

@property (retain, nonatomic) VTCoreSpeechKeepAliveHandler *coreSpeechKeepAliveHandler;

+ (long long)getVoiceTriggerCount;
+ (void)requestPhraseSpotterBypassing:(BOOL)a0 timeout:(double)a1;
+ (void)notifyVoiceTrigger;
+ (void)requestCurrentVoiceTriggerAssetDictionaryWithReply:(id /* block */)a0;
+ (void)requestAudioCapture:(double)a0;
+ (void)requestForcedSecondChance;
+ (id)firstChanceVTEventInfo;
+ (id)firstChanceAudioBuffer;
+ (void)setCurrentBuiltInRTModelDictionary:(id)a0;
+ (void)notifyVoiceTriggeredSiriSessionCancelled:(id)a0;
+ (BOOL)iPhoneShouldStartVoiceTriggerInCoreSpeech;
+ (BOOL)isLastTriggerForced;
+ (void)requestRaiseToSpeakBypassing:(BOOL)a0 timeout:(double)a1;
+ (id)requestCurrentBuiltInRTModelDictionary;
+ (void)requestForcedTriggerEvent;
+ (void)notifyVoiceTriggeredSiriSessionCancelled;
+ (BOOL)isLastTriggerSecondChanceTriggered;
+ (void)requestVoiceTriggerEnabled:(BOOL)a0 forReason:(id)a1;
+ (id)firstChanceTriggeredDate;
+ (void)clearVoiceTriggerCount;
+ (id)requestCurrentVoiceTriggerAssetDictionary;

- (void).cxx_destruct;

@end
