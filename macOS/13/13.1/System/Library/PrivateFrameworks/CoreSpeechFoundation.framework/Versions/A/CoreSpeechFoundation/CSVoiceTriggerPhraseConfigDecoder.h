@interface CSVoiceTriggerPhraseConfigDecoder : NSObject

+ (id)decodeConfigFrom:(id)a0 category:(id)a1;
+ (id)decodeConfigV2:(id)a0 category:(id)a1;
+ (id)decodeConfigV1:(id)a0 category:(id)a1;
+ (float)defaultTwoShotDelay;
+ (id)twoShotDelayConfigKey;
+ (float)adjustTwoShotDelay:(float)a0;

@end
