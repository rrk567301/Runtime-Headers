@class VTCoreSpeechKeepAliveHandler;

@interface VTStateManager : NSObject

@property (retain, nonatomic) VTCoreSpeechKeepAliveHandler *coreSpeechKeepAliveHandler;

+ (void)notifyVoiceTrigger;
+ (id)firstChanceVTEventInfo;
+ (void)requestPhraseSpotterBypassing:(BOOL)a0 timeout:(double)a1;
+ (id)firstChanceAudioBuffer;
+ (void)requestAudioCapture:(double)a0;
+ (void)clearVoiceTriggerCount;
+ (void)notifyVoiceTriggeredSiriSessionCancelled:(id)a0;
+ (id)firstChanceTriggeredDate;
+ (BOOL)iPhoneShouldStartVoiceTriggerInCoreSpeech;
+ (void)notifyVoiceTriggeredSiriSessionCancelled;
+ (BOOL)isLastTriggerSecondChanceTriggered;
+ (id)requestCurrentBuiltInRTModelDictionary;
+ (void)requestCurrentVoiceTriggerAssetDictionaryWithReply:(id /* block */)a0;
+ (BOOL)isLastTriggerForced;
+ (void)requestVoiceTriggerEnabled:(BOOL)a0 forReason:(id)a1;
+ (void)requestForcedTriggerEvent;
+ (void)requestForcedSecondChance;
+ (id)requestCurrentVoiceTriggerAssetDictionary;
+ (long long)getVoiceTriggerCount;
+ (void)setCurrentBuiltInRTModelDictionary:(id)a0;
+ (void)requestRaiseToSpeakBypassing:(BOOL)a0 timeout:(double)a1;

- (void).cxx_destruct;

@end
