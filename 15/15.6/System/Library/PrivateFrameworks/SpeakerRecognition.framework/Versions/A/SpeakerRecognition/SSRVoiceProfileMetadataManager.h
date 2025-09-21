@interface SSRVoiceProfileMetadataManager : NSObject

+ (id)_getBaseMetaDictionaryForUtterancePath:(id)a0;
+ (void)_writeMetaDict:(id)a0 forUtterancePath:(id)a1;
+ (char)isUtteranceImplicitlyTrained:(id)a0;
+ (id)recordedTimeStampOfFile:(id)a0;
+ (id)getUtteranceEnrollmentType:(id)a0;
+ (id)readVoiceTriggerRePromptMetadata:(id)a0;
+ (id)recordedTimeStampFromFileName:(id)a0;
+ (void)saveUtteranceMetadataForUtterance:(id)a0 enrollmentType:(id)a1 isHandheldEnrollment:(char)a2 triggerSource:(id)a3 audioInput:(id)a4 otherBiometricResult:(unsigned long long)a5 containsPayload:(char)a6;
+ (void)saveVoiceTriggeRePromptMetadata:(id)a0;

@end
