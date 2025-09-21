@interface SSREnrollmentDataManager : NSObject

+ (id)_getBaseMetaDictionaryForUtterancePath:(id)a0;
+ (char)saveMetadata:(id)a0;
+ (void)saveRawUtteranceAndMetadata:(id)a0 to:(id)a1 isExplicitEnrollment:(char)a2;
+ (char)saveUtterance:(id)a0 utteranceAudioPath:(id)a1 numSamplesToWrite:(unsigned long long)a2;
+ (char)saveUtteranceAndMetadata:(id)a0 atDirectory:(id)a1;
+ (char)writeMetaDict:(id)a0 atMetaPath:(id)a1;

@end
