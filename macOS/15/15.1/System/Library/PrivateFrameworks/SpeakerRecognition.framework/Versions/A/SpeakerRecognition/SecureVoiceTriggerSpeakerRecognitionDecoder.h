@interface SecureVoiceTriggerSpeakerRecognitionDecoder : NSObject

- (id)init;
- (id)_decodePhraseConfig:(id)a0;
- (BOOL)_getBooleanValue:(id)a0 forKey:(id)a1 withDefaultValue:(BOOL)a2;
- (float)_getFloatValue:(id)a0 forKey:(id)a1 withDefaultValue:(float)a2;
- (unsigned int)_getIntValue:(id)a0 forKey:(id)a1 withDefaultValue:(unsigned long long)a2;
- (id)decodeSecureVoiceTriggerSpeakerRecognitionConfigForAsset:(id)a0;

@end
