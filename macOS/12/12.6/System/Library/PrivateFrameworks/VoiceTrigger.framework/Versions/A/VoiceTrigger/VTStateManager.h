@class VTCoreSpeechKeepAliveHandler;

@interface VTStateManager : NSObject

@property (retain, nonatomic) VTCoreSpeechKeepAliveHandler *coreSpeechKeepAliveHandler;

+ (void)notifyVoiceTriggeredSiriSessionCancelled;
+ (BOOL)isLastTriggerForced;
+ (void)requestVoiceTriggerEnabled:(BOOL)a0 forReason:(id)a1;
+ (void)requestPhraseSpotterBypassing:(BOOL)a0 timeout:(double)a1;
+ (void)requestRaiseToSpeakBypassing:(BOOL)a0 timeout:(double)a1;
+ (void)notifyVoiceTriggeredSiriSessionCancelled:(id)a0;
+ (void)requestForcedSecondChance;
+ (void)requestForcedTriggerEvent;
+ (BOOL)isLastTriggerSecondChanceTriggered;
+ (void)clearVoiceTriggerCount;
+ (long long)getVoiceTriggerCount;
+ (id)firstChanceAudioBuffer;
+ (id)firstChanceVTEventInfo;
+ (id)firstChanceTriggeredDate;
+ (void)requestAudioCapture:(double)a0;
+ (id)requestCurrentVoiceTriggerAssetDictionary;
+ (void)requestCurrentVoiceTriggerAssetDictionaryWithReply:(id /* block */)a0;
+ (id)requestCurrentBuiltInRTModelDictionary;
+ (void)setCurrentBuiltInRTModelDictionary:(id)a0;
+ (void)notifyVoiceTrigger;
+ (BOOL)iPhoneShouldStartVoiceTriggerInCoreSpeech;

- (void).cxx_destruct;

@end
