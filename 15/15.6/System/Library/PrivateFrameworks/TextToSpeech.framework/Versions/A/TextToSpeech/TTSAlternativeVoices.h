@interface TTSAlternativeVoices : NSObject

+ (char)isCombinedVocalizerVoiceIdentifier:(id)a0;
+ (char)isCompactVocalizerVoiceIdentifier:(id)a0;
+ (char)isNeuralAXSiriVoiceIdentifier:(id)a0;
+ (char)isNeuralSiriVoiceIdentifier:(id)a0;
+ (char)isOldSiriVoiceIdentifier:(id)a0;
+ (char)isPersonalVoiceIdentifier:(id)a0;
+ (char)isSiriVoiceIdentifier:(id)a0;
+ (char)isVocalizerVoiceIdentifier:(id)a0;
+ (id)nameForVoiceIdentifier:(id)a0;

@end
