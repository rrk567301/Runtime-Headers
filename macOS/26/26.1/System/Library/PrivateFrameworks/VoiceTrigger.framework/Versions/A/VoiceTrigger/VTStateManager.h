@class VTCoreSpeechKeepAliveHandler;

@interface VTStateManager : NSObject

@property (retain, nonatomic) VTCoreSpeechKeepAliveHandler *coreSpeechKeepAliveHandler;

+ (BOOL)isLastTriggerSecondChanceTriggered;
+ (id)firstChanceTriggeredDate;
+ (void)clearVoiceTriggerCount;
+ (id)requestCurrentVoiceTriggerAssetDictionary;
+ (void)requestRaiseToSpeakBypassing:(BOOL)a0 timeout:(double)a1;
+ (void)notifyVoiceTrigger;
+ (void)requestPhraseSpotterBypassing:(BOOL)a0 timeout:(double)a1;
+ (void)notifyVoiceTriggeredSiriSessionCancelled:(id)a0;
+ (void)requestAudioCapture:(double)a0;
+ (long long)getVoiceTriggerCount;
+ (id)requestCurrentBuiltInRTModelDictionary;
+ (BOOL)iPhoneShouldStartVoiceTriggerInCoreSpeech;
+ (BOOL)isLastTriggerForced;
+ (void)requestForcedSecondChance;
+ (void)setCurrentBuiltInRTModelDictionary:(id)a0;
+ (id)firstChanceAudioBuffer;
+ (void)notifyVoiceTriggeredSiriSessionCancelled;
+ (id)firstChanceVTEventInfo;
+ (void)requestVoiceTriggerEnabled:(BOOL)a0 forReason:(id)a1;
+ (void)requestCurrentVoiceTriggerAssetDictionaryWithReply:(id /* block */)a0;
+ (void)requestForcedTriggerEvent;

- (void).cxx_destruct;

@end
