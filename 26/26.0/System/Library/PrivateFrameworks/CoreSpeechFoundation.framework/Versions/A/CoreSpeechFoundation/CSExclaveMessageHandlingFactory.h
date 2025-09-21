@interface CSExclaveMessageHandlingFactory : NSObject

+ (id)exclaveAssetsController;
+ (id)exclaveFirstPassVoiceTriggerAnalyzer;
+ (id)exclaveSecondPassVoiceTriggerAnalyzerForFirstPassSource:(unsigned long long)a0;
+ (id)commonExclaveMessageHandler;
+ (id)exclaveAdblockerAnalyzer;
+ (id)exclaveAudioProvider;

@end
