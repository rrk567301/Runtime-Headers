@class VTCoreSpeechKeepAliveHandler;

@interface VTStateManager : NSObject

@property (retain, nonatomic) VTCoreSpeechKeepAliveHandler *coreSpeechKeepAliveHandler;

+ (char)isLastTriggerForced;
+ (void)notifyVoiceTriggeredSiriSessionCancelled;
+ (void)clearVoiceTriggerCount;
+ (id)firstChanceAudioBuffer;
+ (id)firstChanceTriggeredDate;
+ (id)firstChanceVTEventInfo;
+ (long long)getVoiceTriggerCount;
+ (char)iPhoneShouldStartVoiceTriggerInCoreSpeech;
+ (char)isLastTriggerSecondChanceTriggered;
+ (void)notifyVoiceTrigger;
+ (void)notifyVoiceTriggeredSiriSessionCancelled:(id)a0;
+ (void)requestAudioCapture:(double)a0;
+ (id)requestCurrentBuiltInRTModelDictionary;
+ (id)requestCurrentVoiceTriggerAssetDictionary;
+ (void)requestCurrentVoiceTriggerAssetDictionaryWithReply:(id /* block */)a0;
+ (void)requestForcedSecondChance;
+ (void)requestForcedTriggerEvent;
+ (void)requestPhraseSpotterBypassing:(char)a0 timeout:(double)a1;
+ (void)requestRaiseToSpeakBypassing:(char)a0 timeout:(double)a1;
+ (void)requestVoiceTriggerEnabled:(char)a0 forReason:(id)a1;
+ (void)setCurrentBuiltInRTModelDictionary:(id)a0;

- (void).cxx_destruct;

@end
