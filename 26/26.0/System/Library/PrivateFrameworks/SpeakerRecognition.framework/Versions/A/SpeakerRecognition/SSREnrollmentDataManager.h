@interface SSREnrollmentDataManager : NSObject

+ (id)_getBaseMetaDictionaryForUtterancePath:(id)a0;
+ (BOOL)saveMetadata:(id)a0 phId:(id)a1;
+ (BOOL)saveRawUtteranceAndMetadata:(id)a0 withMetadata:(id)a1 atDirectory:(id)a2 isExplicitEnrollment:(BOOL)a3;
+ (BOOL)saveUtterance:(id)a0 utteranceAudioPath:(id)a1 numSamplesToWrite:(unsigned long long)a2;
+ (BOOL)saveUtteranceAndMetadata:(id)a0 phId:(id)a1 atDirectory:(id)a2;
+ (BOOL)writeMetaData:(id)a0 atMetaPath:(id)a1;
+ (BOOL)writeMetaDict:(id)a0 atMetaPath:(id)a1;

@end
