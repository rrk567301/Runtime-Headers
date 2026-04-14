@class VTCoreSpeechKeepAliveHandler;

@interface VTStateManager : NSObject

@property (retain, nonatomic) VTCoreSpeechKeepAliveHandler *coreSpeechKeepAliveHandler;

+ (void)notifyVoiceTriggeredSiriSessionCancelled;
+ (void)requestAudioCapture:(double)a0;
+ (void)requestCurrentVoiceTriggerAssetDictionaryWithReply:(id /* block */)a0;
+ (long long)getVoiceTriggerCount;
+ (id)requestCurrentVoiceTriggerAssetDictionary;
+ (BOOL)isLastTriggerSecondChanceTriggered;
+ (void)notifyVoiceTriggeredSiriSessionCancelled:(id)a0;
+ (id)requestCurrentBuiltInRTModelDictionary;
+ (void)requestVoiceTriggerEnabled:(BOOL)a0 forReason:(id)a1;
+ (BOOL)iPhoneShouldStartVoiceTriggerInCoreSpeech;
+ (void)requestPhraseSpotterBypassing:(BOOL)a0 timeout:(double)a1;
+ (void)setCurrentBuiltInRTModelDictionary:(id)a0;
+ (void)requestForcedTriggerEvent;
+ (void)clearVoiceTriggerCount;
+ (void)notifyVoiceTrigger;
+ (id)firstChanceTriggeredDate;
+ (id)firstChanceAudioBuffer;
+ (id)firstChanceVTEventInfo;
+ (void)requestRaiseToSpeakBypassing:(BOOL)a0 timeout:(double)a1;
+ (void)requestForcedSecondChance;
+ (BOOL)isLastTriggerForced;

- (void).cxx_destruct;

@end
