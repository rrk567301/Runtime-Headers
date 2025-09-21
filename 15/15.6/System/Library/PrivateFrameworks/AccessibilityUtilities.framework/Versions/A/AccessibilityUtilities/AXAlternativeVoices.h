@interface AXAlternativeVoices : NSObject

+ (id)sharedInstance;

- (char)isNeuralSiriVoiceIdentifier:(id)a0;
- (char)isOldSiriVoiceIdentifier:(id)a0;
- (char)isSiriVoiceIdentifier:(id)a0;
- (id)nameForVoiceIdentifier:(id)a0;

@end
