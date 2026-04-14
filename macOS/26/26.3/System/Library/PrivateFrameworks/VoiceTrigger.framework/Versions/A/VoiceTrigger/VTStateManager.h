@class VTCoreSpeechKeepAliveHandler;

@interface VTStateManager : NSObject

@property (retain, nonatomic) VTCoreSpeechKeepAliveHandler *coreSpeechKeepAliveHandler;

+ (void)requestRaiseToSpeakBypassing:(BOOL)a0 timeout:(double)a1;
+ (void)setCurrentBuiltInRTModelDictionary:(id)a0;
+ (void)requestForcedTriggerEvent;
+ (void)requestForcedSecondChance;
+ (void)notifyVoiceTrigger;
+ (void)requestCurrentVoiceTriggerAssetDictionaryWithReply:(id /* block */)a0;
+ (long long)getVoiceTriggerCount;
+ (BOOL)isLastTriggerForced;
+ (void)requestAudioCapture:(double)a0;
+ (id)firstChanceAudioBuffer;
+ (BOOL)iPhoneShouldStartVoiceTriggerInCoreSpeech;
+ (void)requestVoiceTriggerEnabled:(BOOL)a0 forReason:(id)a1;
+ (BOOL)isLastTriggerSecondChanceTriggered;
+ (void)clearVoiceTriggerCount;
+ (void)notifyVoiceTriggeredSiriSessionCancelled:(id)a0;
+ (void)requestPhraseSpotterBypassing:(BOOL)a0 timeout:(double)a1;
+ (id)requestCurrentBuiltInRTModelDictionary;
+ (void)notifyVoiceTriggeredSiriSessionCancelled;
+ (id)requestCurrentVoiceTriggerAssetDictionary;
+ (id)firstChanceVTEventInfo;
+ (id)firstChanceTriggeredDate;

- (void).cxx_destruct;

@end
